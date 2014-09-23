package;

@:buildXml("
<target id='haxe'>
  <compilerflag value=\"-Icpp/include\"/>
</target>
")
@:include("TestValue")
extern class TestValue{
	public var value : Int;
}