project("TraceServer")
string(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPER)

message(STATUS "")
message(STATUS "Project ${PROJECT_NAME}:")

set(PROJECT_DIR ${WOTWR_PROJECTS_DIR}/${PROJECT_NAME})

set(
	SOURCE_FILES
	"app.cpp"
	"binary_walker.cpp"
	"ext.cpp"
	"server.cpp"
	"gui/imgui.cpp"
	"gui/imgui_draw.cpp"
	"gui/imgui_widgets.cpp"
	
	"gui/implementation/imgui_impl_opengl2.cpp"
	"gui/implementation/imgui_impl_sdl.cpp"
	
	"gui/imgui_demo.cpp"
	
	"gui_helpers/dropdown.cpp"
)

set(
	PUBLIC_HEADER_FILES
	"binary_walker.h"
	"ext.h"
	"server.h"
	"trace_structs.h"
	
	"gui/imconfig.h"
	"gui/imgui.h"
	"gui/imgui_internal.h"
	"gui/imstb_rectpack.h"
	"gui/imstb_textedit.h"
	"gui/imstb_truetype.h"
	
	"gui/implementation/imgui_impl_opengl2.h"
	"gui/implementation/imgui_impl_sdl.h"
	
	"gui_helpers/dropdown.h"
)

set(
	MISC_FILES
	".editorconfig"
)

add_executable(${PROJECT_NAME} WIN32
	${SOURCE_FILES}
	${PUBLIC_HEADER_FILES}
	${MISC_FILES}
)

set_target_properties(
	${PROJECT_NAME}
	PROPERTIES
		VERSION ${WORWR_VERSION}
		SOVERSION ${WORWR_MAJOR_VERSION}
		FOLDER cpp
)

find_package(OpenGL)

target_include_directories(
	${PROJECT_NAME}
	PRIVATE
		.
		${CMAKE_CONFIG_DIRECTORY}
		${CONFIG_DIRECTORY}
		${CMAKE_ENGINE_DIRECTORY}
		${WOTWR_LIB_INCLUDE_DIR}
		${OPENGL_INCLUDE_DIRS}
	SYSTEM
		${WOTWR_BASE_INCLUDES}
)

message(STATUS "Assigning source groups.")

set_vc_structure("${CMAKE_CURRENT_SOURCE_DIR}" "${SOURCE_FILES};${PUBLIC_HEADER_FILES};${MISC_FILES}")

target_link_libraries(
	${PROJECT_NAME}
	"${WOTWR_LIB_DIR}/SDL2/SDL2.lib"
	"${WOTWR_LIB_DIR}/SDL2/SDL2main.lib"
	"${OPENGL_LIBRARIES}"
)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${WOTWR_LIB_DIR}/SDL2/SDL2.dll"
        $<TARGET_FILE_DIR:${PROJECT_NAME}>)

install(
	TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION "${WOTWR_INSTALL_DIR}"
	LIBRARY DESTINATION "${WOTWR_INSTALL_DIR}"
	ARCHIVE DESTINATION "${WOTWR_INSTALL_DIR}"
)

install(
	FILES "${WOTWR_LIB_DIR}/SDL2/SDL2.dll"
	DESTINATION "${WOTWR_INSTALL_DIR}"
)
