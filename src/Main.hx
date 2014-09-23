package;

import hxcpp.StaticStd;
import hxcpp.StaticZlib;
import hxcpp.StaticRegexp;

class Main implements AppInstance{

	static public function main(){
		trace("static main()");
		App.instance = new Main( );
	}

	public function new(){
		trace("new Main()");
	}

	public function init(){
		trace("calling init()");
	}

	public function update(){
		trace("calling update()");	
	}
}