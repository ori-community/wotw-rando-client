project("InjectDLL")
string(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPER)

message(STATUS "")
message(STATUS "Project ${PROJECT_NAME}:")

set(PROJECT_DIR ${WOTWR_PROJECTS_DIR}/${PROJECT_NAME})

set(
	SOURCE_FILES
	"bootstrap.cpp"
    "csharp_bridge.cpp"
	"dev_commands.cpp"
	"dll_main.cpp"
	"interception.cpp"
	"features/difficulty.cpp"
	"features/keystone_door.cpp"
	"features/messages.cpp"
	"features/opher_everywhere.cpp"
	"features/map.cpp"
	"features/goal_mode_check.cpp"
	"features/invert_swim.cpp"
	"features/input_poller.cpp"
	"features/no_energy.cpp"
	"fixes/dash.cpp"
	"fixes/flap.cpp"
	"pickups/pickups.cpp"
	"pickups/energy_cell.cpp"
	"pickups/experience.cpp"
	"pickups/health_cell.cpp"
	"pickups/keystone.cpp"
	"pickups/ore.cpp"
	"pickups/quests.cpp"
	"pickups/shops.cpp"
	"pickups/spirit_shard.cpp"
	"pickups/tree.cpp"
)

set(
	PUBLIC_HEADER_FILES
	"common.h"
	"constants.h"
    "csharp_bridge.h"
	"dev_commands.h"
	"dll_main.h"
    "enum_definitions.h"
	"framework.h"
	"interception.h"
	"interception_macros.h"
    "macros.h"
	"features/invert_swim.h"
	"features/input_poller.h"
	"fixes/dash.h"
	"pickups/ore.h"
	"pickups/pickups.h"
)

set(
	MISC_FILES
	".editorconfig"
	"CMakeLists.txt"
)

add_library(${PROJECT_NAME} SHARED
	${SOURCE_FILES}
	${PUBLIC_HEADER_FILES}
	${MISC_FILES}
)

target_compile_definitions(${PROJECT_NAME}
	PRIVATE COMPILING_INJECTDLL
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
		${CONFIG_DIRECTORY}
		${CMAKE_ENGINE_DIRECTORY}
		${WOTWR_LIB_INCLUDE_DIR}
	SYSTEM
		${WOTWR_BASE_INCLUDES}
)

target_link_libraries(
	${PROJECT_NAME}
	"${WOTWR_LIB_DIR}/detours.lib"
	WinNetwork
)

target_precompile_headers(
	${PROJECT_NAME}
		PRIVATE "framework.h"
		PRIVATE <tchar.h>
		PRIVATE <detours/il2cpp.h>
)

message(STATUS "Assigning source groups.")

set_vc_structure("${CMAKE_CURRENT_SOURCE_DIR}" "${SOURCE_FILES};${PUBLIC_HEADER_FILES};${MISC_FILES}")
set_vc_structure_with_prefix("_project_settings" "${CMAKE_CURRENT_SOURCE_DIR}" "${MISC_FILES};")

message(STATUS "TESTING ${PROJECT_BINARY_DIR}")

source_group("_precompiled_headers"
	FILES
		${PROJECT_BINARY_DIR}/CMakeFiles/InjectDLL.dir/Debug/cmake_pch.hxx
		${PROJECT_BINARY_DIR}/CMakeFiles/InjectDLL.dir/MinSizeRel/cmake_pch.hxx
		${PROJECT_BINARY_DIR}/CMakeFiles/InjectDLL.dir/RelWithDebInfo/cmake_pch.hxx
		${PROJECT_BINARY_DIR}/CMakeFiles/InjectDLL.dir/Release/cmake_pch.hxx
		${PROJECT_BINARY_DIR}/CMakeFiles/InjectDLL.dir/cmake_pch.cxx
)

install(
	TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION "${WOTWR_INSTALL_DIR}"
	LIBRARY DESTINATION "${WOTWR_INSTALL_DIR}"
	ARCHIVE DESTINATION "${WOTWR_INSTALL_DIR}"
)
