project("Il2CppModLoader")
string(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPER)

message(STATUS "")
message(STATUS "Project ${PROJECT_NAME}:")

set(PROJECT_DIR ${WOTWR_PROJECTS_DIR}/${PROJECT_NAME})

set(
	SOURCE_FILES
	"bootstrap.cpp"
	"console.cpp"
	"dll_main.cpp"
	"il2cpp_helpers.cpp"
	"interception.cpp"
)

set(
	PUBLIC_HEADER_FILES
	"console.h"
	"common.h"
	"constants.h"
	"framework.h"
	"il2cpp_helpers.h"
	"il2cpp_internals/il2cpp_internals.h"
	"interception.h"
	"interception_macros.h"
	"macros.h"
	"il2cpp_math.h"
)

if(${DEFINE_INTERNALS})
    set(
        INTERNAL_IL2CPP_HEADERS
        "il2cpp_internals/il2cpp_internals_p1.h"
        "il2cpp_internals/il2cpp_internals_p2.h"
        "il2cpp_internals/il2cpp_internals_p3.h"
        "il2cpp_internals/il2cpp_internals_p4.h"
        "il2cpp_internals/il2cpp_internals_p5.h"
        "il2cpp_internals/il2cpp_internals_p6.h"
        "il2cpp_internals/il2cpp_internals_p7.h"
        "il2cpp_internals/il2cpp_internals_p8.h"
    )
endif()

set(
	MISC_FILES
	".editorconfig"
	"CMakeLists.txt"
	"cpp.hint"
)

add_library(${PROJECT_NAME} SHARED
	${SOURCE_FILES}
	${PUBLIC_HEADER_FILES}
	${INTERNAL_IL2CPP_HEADERS}
	${MISC_FILES}
)

target_compile_definitions(${PROJECT_NAME}
	PRIVATE COMPILING_IL2CPP_MODLOADER
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
	Common
	WinNetwork
)

target_precompile_headers(
	${PROJECT_NAME}
		PRIVATE <tchar.h>
		PRIVATE <framework.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/il2cpp_internals.h>
)

message(STATUS "Assigning source groups.")

message(STATUS "test ${SOURCE_FILES};${PUBLIC_HEADER_FILES};${MISC_FILES};${INTERNAL_IL2CPP_HEADERS}")
set_vc_structure("${CMAKE_CURRENT_SOURCE_DIR}" "${SOURCE_FILES};${PUBLIC_HEADER_FILES};${MISC_FILES};${INTERNAL_IL2CPP_HEADERS}")
set_vc_structure_with_prefix("_project_settings" "${CMAKE_CURRENT_SOURCE_DIR}" "${MISC_FILES};")

message(STATUS "TESTING ${PROJECT_BINARY_DIR}")

source_group("_precompiled_headers"
	FILES
		${PROJECT_BINARY_DIR}/CMakeFiles/Il2CppModLoader.dir/Debug/cmake_pch.hxx
		${PROJECT_BINARY_DIR}/CMakeFiles/Il2CppModLoader.dir/MinSizeRel/cmake_pch.hxx
		${PROJECT_BINARY_DIR}/CMakeFiles/Il2CppModLoader.dir/RelWithDebInfo/cmake_pch.hxx
		${PROJECT_BINARY_DIR}/CMakeFiles/Il2CppModLoader.dir/Release/cmake_pch.hxx
		${PROJECT_BINARY_DIR}/CMakeFiles/Il2CppModLoader.dir/cmake_pch.cxx
)

install(
	TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION "${WOTWR_INSTALL_DIR}"
	LIBRARY DESTINATION "${WOTWR_INSTALL_DIR}"
	ARCHIVE DESTINATION "${WOTWR_INSTALL_DIR}"
)
