import json
import svgwrite

# Fetch the Json object
f = open("plane.json")
sketch = json.load(f)


# Takes in a set of points from a
def draw_points(point_set):
	my_drawing = svgwrite.drawing.Drawing(filename='noname.svg', size=('100%', '100%'))

	for point in range(0,100):
	the_line = my_drawing.line(start=(0, 0), end=(100, 100), stroke="red")
	# the_line = my_drawing.polyline(points=[point_set])
	my_drawing.add(the_line)
	my_drawing.saveas("noname.svg")




# For each plane in the JSON object, draw it's points onto our output file
for pl in sketch["planes"]: # Each json file has a list of planes...
	for stroke in pl["strokes"]:		   # which each have a list of objects...
		pass # print(stroke)		   # one of those objects is the strokes, which each have a list of points


# print(len(sketch["planes"][0]["strokes"]))

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

