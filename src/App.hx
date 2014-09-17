package;

class App
{
   public static var instance:AppInstance; // Gets set from your "main" routine
   public static function init() { instance.init(); }
   public static function update() { instance.update(); }
}