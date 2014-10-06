cmake_minimum_required (VERSION 2.6)
project (HaxeText)

set(sources src/haxetest.cpp 
	src/Rectangle.cpp 
   )
set(libs  
	../../TestApp/Main-debug	
   )

include_directories("include")

add_executable(HaxeTest ${sources})

target_link_libraries(HaxeTest ${libs})
