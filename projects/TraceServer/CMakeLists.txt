project("TraceServer")
string(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPER)

message(STATUS "")
message(STATUS "Project ${PROJECT_NAME}:")

set(PROJECT_DIR ${WOTWR_PROJECTS_DIR}/${PROJECT_NAME})
set(CONFIG_DIR ${CMAKE_CONFIG_DIRECTORY}/${PROJECT_NAME})

set(
	SOURCE_FILES
	"app.cpp"
	"ext.cpp"
	"gui/imgui.cpp"
	"gui/imgui_draw.cpp"
	"gui/imgui_widgets.cpp"
	
	"gui/implementation/imgui_impl_sdl.cpp"
	"gui/implementation/imgui_impl_opengl2.cpp"
	"gui/implementation/imgui_impl_vulkan.cpp"
	
	"gui/imgui_demo.cpp"
	
	"gui_helpers/dropdown.cpp"
)

set(
	PUBLIC_HEADER_FILES
	"ext.h"
	"opengl_engine.h"
	"vulkan_engine.h"
	"trace_structs.h"
	
	"gui/imconfig.h"
	"gui/imgui.h"
	"gui/imgui_internal.h"
	"gui/imstb_rectpack.h"
	"gui/imstb_textedit.h"
	"gui/imstb_truetype.h"
	
	"gui/implementation/imgui_impl_sdl.h"
	"gui/implementation/imgui_impl_opengl2.h"
	"gui/implementation/imgui_impl_vulkan.h"
	
	"gui_helpers/dropdown.h"
)

set(
	MISC_FILES
	".editorconfig"
)

set(Vulkan_FOUND FALSE)
if (NOT USE_OPENGL)
	find_package(Vulkan)
	if (Vulkan_FOUND)
		set(RENDER_INCLUDES "${Vulkan_INCLUDE_DIRS}")
		set(RENDER_LIBRARY Vulkan::Vulkan)
	endif()
else()
	message(STATUS "Skipping Vulkan search due to USE_OPENGL")
endif()

if (NOT Vulkan_FOUND)
	find_package(OpenGL REQUIRED)
	set(RENDER_INCLUDES "${OpenGL_INCLUDE_DIRS}")
	set(RENDER_LIBRARY OpenGL::GL)
endif()

configure_file(${PROJECT_DIR}/build.h.in ${CONFIG_DIR}/build.h)

add_executable(${PROJECT_NAME} WIN32
	${SOURCE_FILES}
	${PUBLIC_HEADER_FILES}
	${MISC_FILES}
	${PROJECT_DIR}/build.h.in
	${CONFIG_DIR}/build.h
)

set_target_properties(
	${PROJECT_NAME}
	PROPERTIES
		VERSION ${WORWR_VERSION}
		SOVERSION ${WORWR_MAJOR_VERSION}
		FOLDER cpp
)

target_include_directories(
	${PROJECT_NAME}
	PRIVATE
		.
		${CMAKE_CONFIG_DIRECTORY}
		${CMAKE_ENGINE_DIRECTORY}
		${WOTWR_LIB_INCLUDE_DIR}
		${RENDER_INCLUDES}
		${CONFIG_DIR}
	SYSTEM
		${WOTWR_BASE_INCLUDES}
)

message(STATUS "Assigning source groups.")

set_vc_structure("${CMAKE_CURRENT_SOURCE_DIR}" "${SOURCE_FILES};${PUBLIC_HEADER_FILES};${MISC_FILES};")

source_group("" FILES "${CONFIG_DIR}/build.h")
source_group("" FILES "${PROJECT_DIR}/build.h.in")

target_link_libraries(
	${PROJECT_NAME}
	${WOTWR_LIB_DIR}/SDL2/SDL2.lib
	${WOTWR_LIB_DIR}/SDL2/SDL2main.lib
	${RENDER_LIBRARY}
	WinNetwork
)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${WOTWR_LIB_DIR}/SDL2/SDL2.dll"
        $<TARGET_FILE_DIR:${PROJECT_NAME}>)

install(
	TARGETS ${PROJECT_NAME}
	COMPONENT tool
	RUNTIME DESTINATION "${WOTWR_INSTALL_DIR}"
	LIBRARY DESTINATION "${WOTWR_INSTALL_DIR}"
	ARCHIVE DESTINATION "${WOTWR_INSTALL_DIR}"
)

install(
	FILES "${WOTWR_LIB_DIR}/SDL2/SDL2.dll"
	DESTINATION "${WOTWR_INSTALL_DIR}"
)
