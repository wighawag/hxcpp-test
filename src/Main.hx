package;

import hxcpp.StaticStd;
import hxcpp.StaticZlib;
import hxcpp.StaticRegexp;

class Main implements AppInstance{

	var t : TestValue;

	static public function main(){
		trace("main()");
		App.instance = new Main( );
	}

	public function new(){
		trace("new Main()");
	}

	public function init():Void{
		trace("init()");
	}

	public function update():Void{
		trace("update()");	
	}
}