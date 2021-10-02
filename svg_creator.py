import json
import svgwrite

# Fetch the Json object
f = open("plane.json")
sketch = json.load(f)


# Takes in a set of points from a
def draw_points(point_set):
	my_drawing = svgwrite.drawing.Drawing(filename='noname.svg', size=('100%', '100%'))

	for i in range(0,100):
		the_line = my_drawing.line(start=(i, i), end=(i+1, i+1))
		# the_line = my_drawing.polyline(points=[point_set])
		my_drawing.add(the_line)
		my_drawing.saveas("noname.svg")

	# circle = my_drawing.circle(center=(100, 100), r=100)
	# my_drawing.add(circle)
	# my_drawing.saveas("noname.svg")



# For each plane in the JSON object, draw it's points onto our output file
for pl in sketch["planes"]: # Each json file has a list of planes...
	for stroke in pl["strokes"]:		   # which each have a list of objects...
		pass # print(stroke)		   # one of those objects is the strokes, which each have a list of points


# print(len(sketch["planes"][0]["strokes"]))

draw_points([])