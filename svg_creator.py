import json
import svgwrite
import numpy as np

# Fetch the Json object
f = open("single_plane.json")
g = open("smile.json")
sketch = json.load(f)
smile_sketch = json.load(g)


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



draw_plane(smile_sketch["planes"][0], "test_draw")


# Takes degrees in radians!
# Takes initial rotation of plane and returns it back to 0, 0, 0 
def rotate_point(x_r, y_r, z_r, point):
	#rotate X
	x_transform = np.array(
		[1, 0, 0],
		[0, np.cos(x_r), -np.sin(x_r)], 
		[0, np.sin(x_r), np.cos(x_r)])

	y_transform = np.array(
		[np.cos(y_r), 0, np.sin(y_r)],
		[0, 1, 0], 
		[-np.sin(y_r), 0, np.cos(y_r)])

	z_transform = np.array(
		[np.cos(z_r), -np.sin(z_r), 0],
		[np.sin(z_r), np.cos(z_r), 0],
		[0, 0, 1])





# draw_points(sketch["planes"][0]["strokes"][0]
	
		
#Rotation Matrices to be applied!
# rotate-z = 

# [cos φ − sin φ 0
# sin φ cos φ    0
# 0 	   0	   1]

# rotate-y = 

# [cosφ   0   sinφ 
# 0      1    0
# -sinφ   0 cos φ]


# rotate-x = 

# [1   0   0 
# 0 cosφ -sinφ
# o sinφ  cos φ]




