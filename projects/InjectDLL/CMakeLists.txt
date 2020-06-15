project("InjectDLL")
string(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPER)

message(STATUS "")
message(STATUS "Project ${PROJECT_NAME}:")

set(PROJECT_DIR ${WOTWR_PROJECTS_DIR}/${PROJECT_NAME})

set(
	SOURCE_FILES
	"dll_main.cpp"
	"interception.cpp"
	"pch.cpp"
	"pe_module.cpp"
	"features/keystone_door.cpp"
	"features/messages.cpp"
	"features/opher_everywhere.cpp"
	"features/map.cpp"
	"features/goal_mode_check.cpp"
	"features/invert_swim.cpp"
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
	"dll_main.h"
	"framework.h"
	"interception.h"
	"interception_macros.h"
	"pch.h"
	"pe_module.h"
	"fixes/dash.h"
	"pickups/ore.h"
	"pickups/pickups.h"
	"features/invert_swim.h"
)

set(
	MISC_FILES
	".editorconfig"
)

add_library(${PROJECT_NAME} SHARED
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

message(STATUS "Assigning source groups.")

set_vc_structure("${CMAKE_CURRENT_SOURCE_DIR}" "${SOURCE_FILES};${PUBLIC_HEADER_FILES};${MISC_FILES}")

install(
	TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION "${WOTWR_INSTALL_DIR}"
	LIBRARY DESTINATION "${WOTWR_INSTALL_DIR}"
	ARCHIVE DESTINATION "${WOTWR_INSTALL_DIR}"
)

