project("RandoMainDLL" LANGUAGES CSharp)
set(PROJECT_DIR ${WOTWR_PROJECTS_DIR}/${PROJECT_NAME})

include(CSharpUtilities)

file(MAKE_DIRECTORY ${PROJECT_DIR}/Generated/)
execute_process(
	COMMAND ${CMAKE_ROOT_DIRECTORY}/ext/protobuf-3.13.0/bin/protoc
		-I=${WOTWR_PROJECTS_DIR}/wotw-server/docs/
		--csharp_out=${PROJECT_DIR}/Generated/
		${WOTWR_PROJECTS_DIR}/wotw-server/docs/packets.proto
)

set(
	SOURCE_FILES
	"AHK.cs"
	"CppCallbacks.cs"
	"DiscordController.cs"
	"Extensions.cs"
	"HintsController.cs"
	"InterOp.cs"
	"LocData.cs"
	"MapController.cs"
	"Pickup.cs"
	"Randomizer.cs"
	"Relics.cs"
	"SaveController.cs"
	"SeedController.cs"
	"ShopController.cs"
	"TrackFileController.cs"
	"UberStateController.cs"
	"BonusItemController.cs"
	"WebSocketClient.cs"
	
	"DiscordIntegration/ActivityManager.cs"
	"DiscordIntegration/Constants.cs"
	"DiscordIntegration/Core.cs"
	"DiscordIntegration/ImageManager.cs"
	"DiscordIntegration/LobbyManager.cs"
	"DiscordIntegration/StorageManager.cs"
	"DiscordIntegration/StoreManager.cs"

	"Memory/Ability.cs"
	"Memory/AreaType.cs"
	"Memory/GameState.cs"
	"Memory/InventoryItem.cs"
	"Memory/WorldMapIconType.cs"
	"Memory/MessageDescriptor.cs"
	"Memory/Screen.cs"
	"Memory/Shard.cs"
	"Memory/Stats.cs"
	"Memory/UberState.cs"
	"Memory/Vector2.cs"
	"Memory/Vector4.cs"

	"Generated/Packets.cs"
)

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
)

add_library(${PROJECT_NAME} SHARED
	${SOURCE_FILES}
	${MISC_FILES}
)

set_property(TARGET ${PROJECT_NAME} PROPERTY WIN32_EXECUTABLE FALSE)
set_property(TARGET ${PROJECT_NAME} PROPERTY VS_DOTNET_REFERENCES ${REFERENCES})
set_property(TARGET ${PROJECT_NAME} PROPERTY VS_DOTNET_REFERENCE_Newtonsoft.Json ${WOTWR_LIB_DIR}/Newtonsoft.Json.dll)
set_property(TARGET ${PROJECT_NAME} PROPERTY VS_DOTNET_REFERENCE_AutoHotkey.Interop ${WOTWR_LIB_DIR}/AutoHotkey.Interop.dll)
set_property(TARGET ${PROJECT_NAME} PROPERTY VS_PACKAGE_REFERENCES "MSBuild.ILMerge.Task_1.1.3;Websocket.Client_4.3.21;Google.Protobuf_3.13.0")

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
