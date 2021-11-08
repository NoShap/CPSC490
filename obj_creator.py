import bpy
import json
import os

os.chdir("/Users/noahshapiro/Documents/Yale/Senior/Fall/CPSC490/JSONs")
print("Listing Directory:")
print("current working Directory:", os.getcwd())

g = open("house_test.json")
house_sketch = json.load(g)

#Helper methods for consuming JSON
def stroke_to_points(stroke):
	return stroke["points"]

def plane_to_strokes(plane):
	return plane["strokes"]

def sketch_to_planes(sketch):
	return sketch["planes"]


def draw_points_3D(point_set, translate_x=0, translate_y=0, translate_z=0, scale=-10,):
    verts = []
    edges = []
    faces = []
    for i in range(0, len(point_set)-1):
        x = (point_set[i]["x"] + translate_x) * scale 
        y = (point_set[i]["y"] + translate_y) * scale 
        z = (point_set[i]["z"] + translate_z) * scale 
        verts.append([x, z, y])
        
    for i in range(0, len(verts)-1):
        edges.append([i, i+1])
        
    name = "New Object"
    mesh = bpy.data.meshes.new('new_mesh')
    mesh.from_pydata(verts, edges, faces)
    mesh.update()
    obj = bpy.data.objects.new(name, mesh)
    mode_skin = obj.modifiers.new('skin', 'SKIN')
    new_collection = bpy.data.collections.new('new_collection')
    bpy.context.scene.collection.children.link(new_collection)
    new_collection.objects.link(obj)
    

# Draw all the sketches of a plane and create a new svg
def draw_plane_3D(plane):
    strokes = plane_to_strokes(plane)
    trans_x = plane["position"]["x"]
    trans_y = plane["position"]["y"]
    trans_z = plane["position"]["z"]
    for stroke in strokes:
        point_set = stroke_to_points(stroke)
        draw_points_3D(point_set, trans_x, trans_y, trans_z)

def draw_sketch(sketch):
    for plane in sketch_to_planes(sketch):
        draw_plane_3D(plane)

draw_sketch(house_sketch)
bpy.ops.export_scene.obj(filepath="../models/new_save_test.obj")
print("made it to the end!")
        
 