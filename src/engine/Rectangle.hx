package engine;


@:structAccess
@:unreflective
@:include("Rectangle.h")
@:native("Rectangle")
@:keep
extern class Rectangle{
    public function set_values(w : Int, h : Int) : Void;
    public function area() : Int;
}