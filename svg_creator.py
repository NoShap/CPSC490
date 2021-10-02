import json
import svgwrite

# Fetch the Json object
f = open("plane.json")
sketch = json.load(f)


# Takes in a set of points from a
def draw_points(points):
	my_drawing = svgwrite.drawing.Drawing(filename='noname.svg', size=('100%', '100%'))
	my_drawing.line(start=(0, 0), end=(100, 100))
	my_drawing.saveas("noname.svg")



# For each plane in the JSON object, draw it's points onto our output file
for pl in sketch["planes"]: # Each json file has a list of planes...
	for stroke in pl["strokes"]:		   # which each have a list of objects...
		print(stroke)		   # one of those objects is the strokes, which each have a list of points


# print(len(sketch["planes"][0]["strokes"]))

draw_points([])