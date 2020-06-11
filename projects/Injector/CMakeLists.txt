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

install(CODE
	"execute_process(COMMAND dotnet publish projects/Injector/Injector.sln -p:PublishProfile=Properties/PublishProfiles/FolderProfile.pubxml)"
)
