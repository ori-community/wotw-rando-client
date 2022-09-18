project("RandoMainDLL" LANGUAGES CSharp)
set(PROJECT_DIR ${WOTWR_PROJECTS_DIR}/${PROJECT_NAME})

include(CSharpUtilities)

file(MAKE_DIRECTORY ${PROJECT_DIR}/Generated/)
execute_process(
	COMMAND ${CMAKE_ROOT_DIRECTORY}/ext/protoc-3.19.4-win64/bin/protoc
		-I=${PROJECT_DIR}/proto/
		--csharp_out=${PROJECT_DIR}/Generated/
		${PROJECT_DIR}/proto/packets.proto
)

FILE(GLOB_RECURSE SOURCE_FILES RELATIVE ${PROJECT_DIR} "*.cs")



set(
	MISC_FILES
	"Properties/AssemblyInfo.cs"
	".editorconfig"
	"CMakeLists.txt"
)

set(
	REFERENCES
    "Microsoft.CSharp"
    "System"
	"System.Core"
	"System.Drawing"
)

add_library(${PROJECT_NAME} SHARED
	${SOURCE_FILES}
	${MISC_FILES}
)

set_property(TARGET ${PROJECT_NAME} PROPERTY WIN32_EXECUTABLE FALSE)
set_property(TARGET ${PROJECT_NAME} PROPERTY VS_DOTNET_REFERENCES ${REFERENCES})
set_property(TARGET ${PROJECT_NAME} PROPERTY VS_DOTNET_REFERENCE_Google.Protobuf ${WOTWR_LIB_DIR}/Google.Protobuf.dll)
set_property(TARGET ${PROJECT_NAME} PROPERTY VS_DOTNET_REFERENCE_Newtonsoft.Json ${WOTWR_LIB_DIR}/Newtonsoft.Json.dll)
set_property(TARGET ${PROJECT_NAME} PROPERTY VS_PACKAGE_REFERENCES "ini-parser_2.5.2")

target_compile_options(${PROJECT_NAME}
    PRIVATE /unsafe
    PRIVATE /platform:x64
)

set(CMAKE_CSharp_FLAGS "/langversion:latest")

set_target_properties(
	${PROJECT_NAME}
	PROPERTIES
		VERSION ${WORWR_VERSION}
		SOVERSION ${WORWR_MAJOR_VERSION}
		FOLDER csharp
		DOTNET_TARGET_FRAMEWORK_VERSION "v4.7.2"
)

install(
	TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION "${WOTWR_INSTALL_DIR}"
	LIBRARY DESTINATION "${WOTWR_INSTALL_DIR}"
	ARCHIVE DESTINATION "${WOTWR_INSTALL_DIR}"
)
