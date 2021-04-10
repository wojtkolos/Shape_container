# Shape_container

class ShapeContainer implementation, who is responsible for managing the collection
different figures. 
Implemented figures: rectangle, square, circle, ellipse.Each of then have metods to calculate area and perimeter.

ShapeContainer class must have functions:
a. void add(Shape*) – add figure to collection,
b. void displayAll() const – displaying names of all figures with area,
c. double totalArea() const – returning sum of all figures fields in collection,
d. std::vector<Shape*> getGreaterThan(double area) – returning list of figures with area greater than user defined.
