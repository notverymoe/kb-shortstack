linear_extrude(5) difference() {
    board_shape(1.2);
    board_shape(0.1);
}

translate([0,0,-1.2])
linear_extrude(1.2)
    board_shape(1.2);

color([0,1,0])
for(y = [0 : 5]) {
    width = y == 4 ? 5.5 : (y > 4 ? 9 : 9.5);
    translate([19.05/4,1+y*19.05,0]) 
        cube([width*19.05,3,3]);
}

//color([1,0,0]) board_obstructions();

module board_shape(by=0.0) {
    offset(by) import("outline.svg");
}

module board_obstructions() {
    import("obstructions.svg");
}