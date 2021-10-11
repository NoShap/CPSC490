import json
import svgwrite

# Fetch the Json object
f = open("single_plane.json")
sketch = json.load(f)


# Takes in a set of points and adds them to the input drawing
def draw_points(point_set, drawing, color="black", scale=50, translate_x=10, translate_y=10):
	# TODO: you need to make the drawign an argument and then add on the line that is drawn by the points
	my_drawing = svgwrite.drawing.Drawing(filename=svg_name + ".svg", size=('100%', '100%'))

	for i in range(0, len(point_set)-1):
		x1 = point_set[i]["x"]* scale + translate_x
		y1 = point_set[i]["y"] * scale + translate_y
		x2 = point_set[i+1]["x"] * scale + translate_x
		y2 = point_set[i+1]["y"] * scale + translate_y
		line = drawing.line(start=(x1, y1), end=(x2, y2), stroke=color)
		drawing.add(line)
		# my_drawing.saveas(svg_name + ".svg")


def stroke_to_points(stroke):
	return stroke["points"]

def plane_to_strokes(plane):
	return plane["strokes"]

def sketch_to_planes(sketch):
	return sketch["planes"]

# Draw all the sketches of a plane and create a new svg
def draw_plane(plane, svg_name):
	my_drawing = svgwrite.drawing.Drawing(filename=svg_name + ".svg", size=('100%', '100%'))

	strokes = plane_to_strokes(plane)
	for stroke in strokes:
		point_set = stroke_to_points(stroke)
		draw_points(point_set, my_drawing)

	my_drawing.saveas(svg_name + ".svg")



	pass
# For each plane in the JSON object, draw it's points onto our output file
for pl in sketch["planes"]: # Each json file has a list of planes...
	for stroke in pl["strokes"]:		   # which each have a list of objects...
		pass # print(stroke)		   # one of those objects is the strokes, which each have a list of points

draw_plane(sketch["planes"][0], "test_draw")

# draw_points(sketch["planes"][0]["strokes"][1]["points"], "black", "new_sketch", 30, 20, 20)
# draw_points(sketch["planes"][0]["strokes"][0]["points"], "black", "new_sketch", 30, 20, 20)




# draw_points(sketch["planes"][0]["strokes"][0]

# for stroke in sketch["planes"][0]["strokes"]:
# 	stroke_points = stroke_to_points(stroke)
# 	draw_points(stroke_points)
	
		
#Rotation Matrices to be applied!
# rotate-z = 

# [cos φ − sin φ 0
# sin φ cos φ    0
# 0 	   0	   1]

# rotate-x = 

# [1   0   0 
# 0 cosφ -sinφ
# o sinφ  cos φ]


# rotate-y = 

# [cosφ   0   sinφ 
# 0      1    0
# -sinφ   0 cos φ]

