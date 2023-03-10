# CMakeList.txt : CMake project for myCAD, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (myCAD
	myCAD.cpp
	application.cpp
	pch.cpp
	elems/element.cpp
	elems/face.cpp
	elems/mesh.cpp
	elems/vertex_holder.cpp
	mesh_import/import_obj.cpp
	render/opengl_buffer_manager.cpp
	render/opengl_context.cpp
	render/ui_context.cpp
	shader/shader_util.cpp
	ui/property_panel.cpp
	ui/scene_view.cpp
	ui/Ribbon.cpp
	window/jgl_window.cpp
    user_tools/tools.cpp
)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET myCAD PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
find_package(glad CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE glad::glad)

find_package(glfw3 CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE glfw)

find_package(imgui CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE imgui::imgui)

find_package(GLEW REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE GLEW::GLEW)

find_package(glm CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE glm::glm)

find_package(assimp CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE assimp::assimp)

