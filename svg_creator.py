import json
import svgwrite
import numpy as np

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



# Takes degrees in radians!
# Takes in rotation and point dictionary, updates point
def rotate_point(point, x_r, y_r, z_r):
	point_vector = np.array(list(point.values()))
	x_transform = np.array(
		[[1, 0, 0],
		[0, np.cos(x_r), -np.sin(x_r)], 
		[0, np.sin(x_r), np.cos(x_r)]])

	y_transform = np.array([
		[np.cos(y_r), 0, np.sin(y_r)],
		[0, 1, 0], 
		[-np.sin(y_r), 0, np.cos(y_r)]])

	z_transform = np.array([
		[np.cos(z_r), -np.sin(z_r), 0],
		[np.sin(z_r), np.cos(z_r), 0],
		[0, 0, 1]])

	#Potentially throw an error if an invalid point is input
	result_vector = np.matmul(x_transform, point_vector)
	result_vector = np.matmul(y_transform, result_vector)
	result_vector = np.matmul(z_transform, result_vector)
	point["x"] = result_vector[0]
	point["y"] = result_vector[1]
	point["z"] = result_vector[2]




#TODO: Try with helper methods
# rotate all the points in a plane
def rotate_plane(plane, x_r, y_r, z_r):
	for stroke in plane["strokes"]:
		for point in stroke["points"]:
			rotate_point(point, x_r, y_r, z_r)



draw_plane(smile_sketch["planes"][0], "test_draw")

draw_plane(rotated_sketch["planes"][0], "rotated_draw1")
rotate_plane(rotated_sketch["planes"][0], 0,  -1.5707963267948966, 0) 
draw_plane(rotated_sketch["planes"][0], "rotated_draw2")
draw_plane(rotated_smile["planes"][0], "rotated_draw3")

# 
# draw_plane(smile_sketch["planes"][0], "test_draw")





# draw_points(sketch["planes"][0]["strokes"][0]

