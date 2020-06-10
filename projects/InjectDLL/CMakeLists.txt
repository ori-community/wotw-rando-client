project("InjectDLL")
string(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPER)

message(STATUS "")
message(STATUS "Project ${PROJECT_NAME}:")

set(PROJECT_DIR ${WOTWR_PROJECTS_DIR}/${PROJECT_NAME})

set(
	SOURCE_FILES
	"dllmain.cpp"
	"interception.cpp"
	"pch.cpp"
	"PEModule.cpp"
	"features/keystoneDoorFromBothSides.cpp"
	"features/messages.cpp"
	"fixes/dashFixes.cpp"
	"fixes/FlapFix.cpp"
	"pickups/energyCellInterception.cpp"
	"pickups/experiencePickups.cpp"
	"pickups/healthCellInterception.cpp"
	"pickups/keystoneInterception.cpp"
	"pickups/oreInterception.cpp"
	"pickups/shops.cpp"
	"pickups/spiritShardInterception.cpp"
	"pickups/treeInterception.cpp"
)

set(
	PUBLIC_HEADER_FILES
	"common.h"
	"dllmain.h"
	"framework.h"
	"interception.h"
	"interceptionMacros.h"
	"pch.h"
	"PEModule.h"
	"fixes/dashFixes.h"
	"pickups/oreInterception.h"
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
