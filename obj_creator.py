# import bpy
import json

g = open("smile.json")
smile_sketch = json.load(g)


# Creating a mesh from the all the exported 3D points
# Drawbacks - no plane attributes

verts = []

for plane in smile_sketch["planes"]:
	for stroke in plane["strokes"]:
		for point in stroke["points"]:
			print(point.values())
			# verts.append(list(point.values()))



# name = "Test Object"
# mesh = bpy.data.meshes.new(name)
# obj = bpy.data.objects.new(name, mesh)
# col = bpy.data.collections.get("Objects")
# col.objects.link(obj)
# bpy.context.view_layer.objects.active = obj
# mesh.from_pydata(verts, edges, faces)

# print(verts)