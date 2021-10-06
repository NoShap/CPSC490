import json
import svgwrite

# Fetch the Json object
f = open("plane.json")
sketch = json.load(f)


# Takes in a set of points and saves an svg in this file's directory
def draw_points(point_set, color="black", svg_name="noname.svg"):
	my_drawing = svgwrite.drawing.Drawing(filename=svg_name, size=('100%', '100%'))

	for i in range(0, len(point_set-1)):
		x1 = point_set[i]["x"]
		y1 = point_set[i]["y"]
		x2 = point_set[i+1]["x"]
		y2 = point_set[i+1]["y"]
		line = my_drawing.line(start=(x1, y1), end=(x2, y2), stroke=color)
		my_drawing.add(line)
		my_drawing.saveas(svg_name)


def stroke_to_points(stroke):
	return stroke["points"]

def planes_to_strokes(plane):
	return plane["strokes"]

# For each plane in the JSON object, draw it's points onto our output file
for pl in sketch["planes"]: # Each json file has a list of planes...
	for stroke in pl["strokes"]:		   # which each have a list of objects...
		pass # print(stroke)		   # one of those objects is the strokes, which each have a list of points



for stroke in sketch["planes"][0]["strokes"]:
	for point in stroke["points"]:
		print(point)
	print("Total points in stroke:", i)


draw_points([])


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

