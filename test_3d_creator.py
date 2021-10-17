import bpy 

verts = []
edges = []
faces = []

verts.append([0.0, 1.0, 0.0]) #index 0
verts.append([1.0, 0.0, 0.0]) # index 1
verts.append([0.0, 0.0, 1.0]) # index 2
verts.append([-1.0, 0.0, 0.0]) # index 3

edges.append([0,1])
edges.append([1,2])
edges.append([0,2])
edges.append([0,3])
edges.append([2,3])


mod_skin = obj.modifiers.new('skin', 'SKIN')


name = "New Object"
mesh = bpy.data.meshes.new(name)
obj = bpy.data.objects.new(name,mesh)
col = bpy.data.collections.get("Objects")
col.objects.link(obj)
bpy.context.view_layer.objects.active = obj

mesh.from_pydata(verts, edges, faces)

#print("hello world")