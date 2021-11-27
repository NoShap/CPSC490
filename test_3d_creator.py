import bpy 


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
