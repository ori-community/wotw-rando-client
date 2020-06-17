project("TraceClientManaged")
string(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPER)

include(CSharpUtilities)

set(
	SOURCE_FILES
	"NetClient.cs"
	"TraceClient.cs"
)

set(
	MISC_FILES
	".editorconfig"
	"CMakeLists.txt"
)

set(
	REFERENCES
    "Microsoft.CSharp"
    "System"
    "System.Core"
    "System.Data"
    "System.Xml"
    "System.Xml.Linq"
    "System.Net"
    "System.Net.Sockets"
)

add_library(${PROJECT_NAME} SHARED
	${SOURCE_FILES}
	${MISC_FILES}
)

set_property(TARGET ${PROJECT_NAME} PROPERTY WIN32_EXECUTABLE FALSE)
set_property(TARGET ${PROJECT_NAME} PROPERTY VS_DOTNET_REFERENCES ${REFERENCES})
set_property(TARGET ${PROJECT_NAME} PROPERTY VS_DOTNET_REFERENCE_Newtonsoft.Json ${WOTWR_LIB_DIR}/Newtonsoft.Json.dll)
set_property(TARGET ${PROJECT_NAME} PROPERTY VS_DOTNET_REFERENCE_AutoHotkey.Interop ${WOTWR_LIB_DIR}/AutoHotkey.Interop.dll)

target_compile_options(${PROJECT_NAME} PUBLIC /platform:x64)

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
