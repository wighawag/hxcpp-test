cmake_minimum_required (VERSION 2.6)
project (HaxeText)

set(sources src/haxetest.cpp 
   )
set(libs  
	../../TestApp/Main
	#/HaxeToolkit/haxe/lib/hxcpp/3,1,39/lib/Windows/libzlib.lib  
	#/HaxeToolkit/haxe/lib/hxcpp/3,1,39/lib/Windows/libstd.lib  
	#/HaxeToolkit/haxe/lib/hxcpp/3,1,39/lib/Windows/libregexp.lib 
	#/HaxeToolkit/haxe/lib/hxcpp/3,1,39/lib/Windows/libsqlite.lib 
	#/HaxeToolkit/haxe/lib/hxcpp/3,1,39/lib/Windows/libmysql5.lib 
	#/HaxeToolkit/haxe/lib/hxcpp/3,1,39/lib/Windows/libmsvccompat-16.lib 
	#"/Program Files (x86)/Microsoft SDKs/Windows/v7.1A/Lib/WS2_32.lib" 
	#"/Program Files (x86)/Microsoft SDKs/Windows/v7.1A/Lib/User32.Lib"
   )

include_directories("/HaxeToolkit/haxe/lib/hxcpp/3,1,39/include")
include_directories("../TestApp/include")

add_executable(HaxeTest ${sources})

target_link_libraries(HaxeTest ${libs})
