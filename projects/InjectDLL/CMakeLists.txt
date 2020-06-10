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
	"fixes/dash.cpp"
	"fixes/flap.cpp"
	"pickups/energy_cell.cpp"
	"pickups/experience.cpp"
	"pickups/health_cell.cpp"
	"pickups/keystone.cpp"
	"pickups/ore.cpp"
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
)

add_library(${PROJECT_NAME}
	${SOURCE_FILES}
	${PUBLIC_HEADER_FILES}
)

set_target_properties(
	${PROJECT_NAME}
	PROPERTIES
		PUBLIC_HEADER "${PUBLIC_HEADER_FILES}"
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
)

message(STATUS "Assigning source groups.")

set_vc_structure("${CMAKE_CURRENT_SOURCE_DIR}" "${SOURCE_FILES};${PUBLIC_HEADER_FILES}")

install(
	TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION "${WORWR_INSTALL_DIR}/bin"
	LIBRARY DESTINATION "${WORWR_INSTALL_DIR}/lib"
	ARCHIVE DESTINATION "${WORWR_INSTALL_DIR}/lib"
	PUBLIC_HEADER DESTINATION "${WORWR_INSTALL_DIR}/include/${PROJECT_NAME}"
)
