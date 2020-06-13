project("Injector" LANGUAGES CSharp)
set(PROJECT_DIR ${WOTWR_PROJECTS_DIR}/${PROJECT_NAME})

include(CSharpUtilities)

configure_file(${PROJECT_DIR}/${PROJECT_NAME}.csproj.in ${PROJECT_DIR}/${PROJECT_NAME}.csproj)

include_external_msproject(${PROJECT_NAME} ${PROJECT_DIR}/${PROJECT_NAME}.csproj)

set_target_properties(
	${PROJECT_NAME}
	PROPERTIES
		VERSION ${WORWR_VERSION}
		SOVERSION ${WORWR_MAJOR_VERSION}
		FOLDER csharp
)

# Because xcopy is stupid we need this backslash replacing hell.
STRING(REGEX REPLACE "/" "\\\\\\\\" BUILD_DIR_BACK ${CMAKE_BUILD_DIRECTORY} )
STRING(REGEX REPLACE "/" "\\\\\\\\" INSTALL_DIR_BACK ${WOTWR_INSTALL_DIR} )

string(
    APPEND _cmd
    "$<IF:$<CONFIG:Debug>,"
        "execute_process(COMMAND xcopy \"${BUILD_DIR_BACK}\\\\bin\\\\x64\\\\netcoreapp3.1\\\\*\" \"${INSTALL_DIR_BACK}\" /f /y\),"
        "execute_process(COMMAND dotnet publish projects/Injector/Injector.sln -p:PublishProfile=Properties/PublishProfiles/FolderProfile.pubxml)"
    ">"
)

install(CODE ${_cmd})
