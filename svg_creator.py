import json
import svgwrite
import numpy as np
import bpy

# Fetch Json objects
f = open("rotation_smile2.json")
g = open("smile.json")
h = open ("rotated_smile.json")
rotated_sketch = json.load(f)
smile_sketch = json.load(g)
rotated_smile = json.load(h)


#Helper methods for consuming JSON
def stroke_to_points(stroke):
	return stroke["points"]

def plane_to_strokes(plane):
	return plane["strokes"]

def sketch_to_planes(sketch):
	return sketch["planes"]

# Takes in a set of points and adds them to the input drawing
def draw_points(point_set, drawing, color="black", scale=-50, translate_x=150, translate_y=150):

	for i in range(0, len(point_set)-1):
		x1 = point_set[i]["x"]* scale + translate_x
		y1 = point_set[i]["y"] * scale + translate_y
		x2 = point_set[i+1]["x"] * scale + translate_x
		y2 = point_set[i+1]["y"] * scale + translate_y
		line = drawing.line(start=(x1, y1), end=(x2, y2), stroke=color)
		drawing.add(line)


# Draw all the sketches of a plane and create a new svg
def draw_plane(plane, svg_name):
	my_drawing = svgwrite.drawing.Drawing(filename=svg_name + ".svg", size=('100%', '100%'))

	strokes = plane_to_strokes(plane)
	for stroke in strokes:
		point_set = stroke_to_points(stroke)
		draw_points(point_set, my_drawing)
	my_drawing.saveas(svg_name + ".svg")



# 
verts = []
edges = []
faces = []

verts.append([0.0, 10.0, 0.0]) #index 0
verts.append([10.0, 0.0, 0.0]) # index 1
verts.append([0.0, 0.0, 10.0]) # index 2
verts.append([-10.0, 0.0, 0.0]) # index 3

edges.append([0,1])
edges.append([1,2])
edges.append([0,2])
edges.append([0,3])
edges.append([2,3])



name = "New Object"
mesh = bpy.data.meshes.new('new_mesh')
mesh.from_pydata(verts, edges, faces)
mesh.update()
obj = bpy.data.objects.new(name, mesh)
mod_skin = obj.modifiers.new('skin', 'SKIN')
new_collection = bpy.data.collections.new('new_collection')
bpy.context.scene.collection.children.link(new_collection)
new_collection.objects.link(obj)



# draw_plane(smile_sketch["planes"][0], "test_draw")

# draw_plane(rotated_sketch["planes"][0], "rotated_draw1")
# rotate_plane(rotated_sketch["planes"][0], 0,  -1.5707963267948966/2, 0) 
# draw_plane(rotated_sketch["planes"][0], "rotated_draw2")
# draw_plane(rotated_smile["planes"][0], "rotated_draw3")



#OBJ is jsut 4 vertices of a plane and then 
#ply file 

# 
# draw_plane(smile_sketch["planes"][0], "test_draw")





# draw_points(sketch["planes"][0]["strokes"][0]

