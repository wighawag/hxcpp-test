package ff;


@:structAccess
@:unreflective
@:include("FFValue.h")
@:native("FFValue")
@:keep
extern class FFValue{
	public var value : Int;
}