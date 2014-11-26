package;


import engine.Rectangle;
import cpp.ConstPointer;
import cpp.Pointer;

class App
{
   public static var instance:AppInstance; // Gets set from your "main" routine
   public static function init(value : Int) : Int{ instance.init(); return 0; }
   public static function update(rect : Pointer<Rectangle>) : Int{ 
   	rect.ref.set_values(4,200);
   	instance.update(rect.ref.area()); 

   	return 0;
   }
}