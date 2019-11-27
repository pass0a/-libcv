#cmake file for project association
#author: liuwenjun
#created:2014/02/20

CMAKE_MINIMUM_REQUIRED(VERSION 2.8)



## 添加项目
set(CMAKE_SHARED_LIBRARY_SUFFIX ".passoa")
SET(CMAKE_SHARED_LIBRARY_PREFIX "")
include_directories(
	${XTENSOR_DIR}/include
	${XTL_DIR}/include
	)
list(APPEND APP_LIST 
	src/index.cpp
	src/binding.cpp
	src/export.def)
foreach(file ${APP_LIST})
list(APPEND APP_SRC ${PROJECT_SOURCE_DIR}/${file})
endforeach(file)

add_library(libcv SHARED
	${APP_SRC})


