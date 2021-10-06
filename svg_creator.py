import json
import svgwrite

# Fetch the Json object
f = open("single_plane.json")
sketch = json.load(f)


# Takes in a set of points and saves an svg in this file's directory
def draw_points(point_set, color="black", svg_name="new_sketch", scale=50, translate_x=10, translate_y=10):
	my_drawing = svgwrite.drawing.Drawing(filename=svg_name + ".svg", size=('100%', '100%'))

	for i in range(0, len(point_set)-1):
		x1 = point_set[i]["x"]* scale + translate_x
		y1 = point_set[i]["y"] * scale + translate_y
		x2 = point_set[i+1]["x"] * scale + translate_x
		y2 = point_set[i+1]["y"] * scale + translate_y
		line = my_drawing.line(start=(x1, y1), end=(x2, y2), stroke=color)
		my_drawing.add(line)
		my_drawing.saveas(svg_name + ".svg")


def stroke_to_points(stroke):
	return stroke["points"]

def planes_to_strokes(plane):
	return plane["strokes"]

def draw_sketch(sketch):
	pass
# For each plane in the JSON object, draw it's points onto our output file
for pl in sketch["planes"]: # Each json file has a list of planes...
	for stroke in pl["strokes"]:		   # which each have a list of objects...
		pass # print(stroke)		   # one of those objects is the strokes, which each have a list of points


draw_points(sketch["planes"][0]["strokes"][0]["points"], "black", "new_svg", 30, 20, 20)




for stroke in sketch["planes"][0]["strokes"]:
	stroke_points = stroke_to_points(stroke)
	draw_points(stroke_points)
	
		
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

