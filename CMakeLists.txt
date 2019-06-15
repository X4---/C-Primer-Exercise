#1.Set CMake Required
cmake_minimum_required(VERSION 3.1.0)
cmake_policy(VERSION 3.1.0)

#2.Set ProjectName
set(PROJECT_NAME "CPP Exercise")
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")
set(SOURCE_DIR "${CMAKE_SOURCE_DIR}/src")

#3.Add Macro
#---------------------------------------
macro(GET_UI_INCLUDE OUT_PATH_DIR UI_LIB_NAME)
	set(TEMP "${INCLUDE_DIR}/UI/${UI_LIB_NAME}")
	set(${OUT_PATH_DIR} ${TEMP})
endmacro(GET_UI_INCLUDE OUT_PATH_DIR UI_LIB_NAME)

macro(GET_PATHDIR OUT_PATH_DIR)
	string(REPLACE "${SOURCE_DIR}" "" TEMP ${CMAKE_CURRENT_SOURCE_DIR})
	set(${OUT_PATH_DIR} ${TEMP})
endmacro(GET_PATHDIR OUT_PATH_DIR)

macro(GET_INCLUDEDIR OUT_INCLUDE_DIR)
	string(REPLACE "${SOURCE_DIR}" "${INCLUDE_DIR}"  TEMP ${CMAKE_CURRENT_SOURCE_DIR})
	set(${OUT_INCLUDE_DIR} ${TEMP})
endmacro(GET_INCLUDEDIR OUT_INCLUDE_DIR PATH_DIR)

macro(SETUP_PROJECT MODE TARGET_NAME STR_TARGET_SOURCES STR_TARGET_LIBS)

	GET_PATHDIR(TEMP)
	message(STATUS ${TEMP})
	GET_INCLUDEDIR(TEMP)
	message(STATUS ${TEMP})

	string(REPLACE " " ";" LIST_TARGET_SOURCES ${STR_TARGET_SOURCES})
	string(REPLACE " " ";" LIST_TARGET_LIBS ${STR_TARGET_LIBS})

	foreach(A ${LIST_TARGET_SOURCES})
		message(STATUS "STR_TARGET_SOURCES: ${A}")
	endforeach(A ${LIST_TARGET_SOURCES})
	
	if(${STR_TARGET_SOURCES} STREQUAL " ")
		message(WARNING "Target [${TARGET_NAME}] has no source, so it won't be generated.")
	else()
		if(${MODE} STREQUAL "EXE")
			add_executable( ${TARGET_NAME} ${LIST_TARGET_SOURCES})
			set(INSTALL_DIR "bin")
		elseif(${MODE} STREQUAL "LIB")
			add_library(${TARGET_NAME} ${LIST_TARGET_SOURCES})
			set(INSTALL_DIR "lib/${FOLDER_NAME}")
		else()
			message(FATAL_ERROR "Mode [${MODE}] is not supported, so target [TARGET_NAME] is not generated!")
			set(MODE_NOTSUPPORT " ")
		endif()
		if(NOT DEFINED MODE_NOTSUPPORT)
			if( NOT ${FOLDER_NAME} STREQUAL " ")
				#SET_PROPERTY(TARGET caescan PROPERTY FOLDER "main")  
				#SET_PROPERTY(TARGET fileid PROPERTY FOLDER "main")  
				#SET_PROPERTY(TARGET ${TARGET_NAME} PROPERTY FOLDER  ${FOLDER_NAME})  
				message(STATUS "SET_TARGET_PROPERTIES ${TARGET_NAME} ${FOLDER_NAME}")
				SET_TARGET_PROPERTIES(${TARGET_NAME} PROPERTIES FOLDER ${FOLDER_NAME})
			endif()
			if(NOT ${STR_TARGET_LIBS} STREQUAL " ")
				target_link_libraries( ${TARGET_NAME} ${LIST_TARGET_LIBS} )
			endif()
			install (TARGETS ${TARGET_NAME} DESTINATION ${INSTALL_DIR})
			message(STATUS "Setup Project ${Mode} ${FOLDER_NAME}/[${TARGET_NAME}]")
		endif()
	endif()
endmacro(SETUP_PROJECT TARGET_NAME STR_TARGET_SOURCES STR_TARGET_LIBS)
#---------------------------------------
macro(ADD_ALL_SUBDIR)
	file(GLOB _children RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/*)
	set(_dirlist "")
	foreach(_child ${_children})
		if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${_child})
			list(APPEND _dirlist ${_child})
		endif()
	endforeach()
	#SET(${result} ${dirlist})
	foreach(_subdir ${_dirlist})
		add_subdirectory(${_subdir})
	endforeach()
endmacro(ADD_ALL_SUBDIR)
#---------------------------------------
macro(GET_DIR_NAME DIRNAME)
	string(REGEX MATCH "([^/]*)$" TMP ${CMAKE_CURRENT_SOURCE_DIR})
	set(${DIRNAME} ${TMP})
endmacro(GET_DIR_NAME DIRNAME)
#---------------------------------------
#4.Set Project
project(${PROJECT_NAME})

#6.Add src

message(STATUS "${CMAKE_BINARY_DIR}")

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)

include_directories(
	#${PROJECT_SOURCE_DIR}/include
)

link_directories(
	#${CMAKE_BINARY_DIR}/lib
	#${CMAKE_BINARY_DIR}/lib/CppUtil/Basic
	#${CMAKE_BINARY_DIR}/lib/CppUtil/Engine
)

add_subdirectory(Code)

#ADD_ALL_SUBDIR()

include (InstallRequiredSystemLibraries)