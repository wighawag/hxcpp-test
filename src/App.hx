package;

class App
{
   public static var instance:AppInstance; // Gets set from your "main" routine
   public static function init() : Int{ instance.init(); return 0; }
   public static function update() : Int{ instance.update(); return 0;}
}