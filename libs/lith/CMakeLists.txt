project(LIB_Lith)

add_library(${PROJECT_NAME} STATIC
	basehash.cpp
	baselist.cpp
	baselistcounter.cpp
	dprintf.cpp
	lith.cpp
	lithbaselist.cpp
	lithchunkallocator.cpp
	lithsimpary.cpp
	lithsimparystat.cpp
	virtlist.cpp)

if(LINUX)
    set_target_properties(${PROJECT_NAME} PROPERTIES COMPILE_FLAGS "-fpermissive -fPIC")
endif(LINUX)
