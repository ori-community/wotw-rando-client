#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/Wrapper_TaskQueueDispatcher.h>
#include <Il2CppModLoader/app/types/Wrapper_c_DisplayClass38_0.h>
#include <Il2CppModLoader/app/types/Wrapper_c_DisplayClass45_0.h>
#include <Il2CppModLoader/app/types/Wrapper_c.h>
#include <Il2CppModLoader/app/types/Wrapper_c_DisplayClass50_0.h>
#include <Il2CppModLoader/app/types/Wrapper_c_DisplayClass51_0.h>
#include <Il2CppModLoader/app/types/Wrapper_c_DisplayClass64_0.h>
#include <Il2CppModLoader/app/types/Wrapper_c_DisplayClass87_0.h>
#include <Il2CppModLoader/app/types/TypeExtensions_c.h>
#include <Il2CppModLoader/app/types/MemoryLabelDebugger_MemoryManagerDataCache.h>
#include <Il2CppModLoader/app/types/MemoryLabelDebugger_MemoryLabelAllocationCache.h>
#include <Il2CppModLoader/app/types/MemoryLabelDebugger_MemoryLabelBucketInfoCache.h>
#include <Il2CppModLoader/app/types/MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array.h>
#include <Il2CppModLoader/app/types/MemoryLabelDebugger.h>
#include <Il2CppModLoader/app/types/MemoryLabelDebugger_c_DisplayClass17_0.h>
#include <Il2CppModLoader/app/types/MemoryManagerDebugger_MemoryManagerDataCache.h>
#include <Il2CppModLoader/app/types/MemoryManagerDebugger_MemoryManagerAllocatorCache.h>
#include <Il2CppModLoader/app/types/MemoryManagerDebugger.h>
#include <Il2CppModLoader/app/types/NvnMemoryDebugger_NvnDataCache.h>
#include <Il2CppModLoader/app/types/NvnMemoryDebugger_NvnPoolCache.h>
#include <Il2CppModLoader/app/types/NvnMemoryDebugger.h>
#include <Il2CppModLoader/app/types/Application_NvnBufferUsage__Enum__Array.h>
#include <Il2CppModLoader/app/types/SwitchUndockingController.h>
#include <Il2CppModLoader/app/types/UberGCLogic_MemoryProbeType__Enum.h>
#include <Il2CppModLoader/app/types/UberGCLogic.h>
#include <Il2CppModLoader/app/types/UberGCLogic_GCLogicSettings.h>
#include <Il2CppModLoader/app/types/Single__Array__Array.h>
#include <Il2CppModLoader/app/types/UberAtlasPrewarmContainer.h>
#include <Il2CppModLoader/app/types/UberShaderAtlasBuildValidator.h>
#include <Il2CppModLoader/app/types/MoonIconRenderer_IconObject.h>
#include <Il2CppModLoader/app/types/MoonIconRenderer_c.h>
#include <Il2CppModLoader/app/types/MoonTextMeshRenderer.h>
#include <Il2CppModLoader/app/types/TextMeshRenderer.h>
#include <Il2CppModLoader/app/types/AppId_t.h>
#include <Il2CppModLoader/app/types/AppId_t__Array.h>
#include <Il2CppModLoader/app/types/DepotId_t.h>
#include <Il2CppModLoader/app/types/SteamAPICall_t.h>
#include <Il2CppModLoader/app/types/HSteamPipe.h>
#include <Il2CppModLoader/app/types/HSteamUser.h>
#include <Il2CppModLoader/app/types/ControllerHandle_t.h>
#include <Il2CppModLoader/app/types/ControllerActionSetHandle_t.h>
#include <Il2CppModLoader/app/types/ControllerDigitalActionHandle_t.h>
#include <Il2CppModLoader/app/types/ControllerAnalogActionHandle_t.h>
#include <Il2CppModLoader/app/types/CGameID.h>
#include <Il2CppModLoader/app/types/FriendsGroupID_t.h>
#include <Il2CppModLoader/app/types/CSteamID__Array.h>
#include <Il2CppModLoader/app/types/HAuthTicket.h>
#include <Il2CppModLoader/app/types/HTTPRequestHandle.h>
#include <Il2CppModLoader/app/types/HTTPCookieContainerHandle.h>
#include <Il2CppModLoader/app/types/SteamInventoryResult_t.h>
#include <Il2CppModLoader/app/types/SteamItemInstanceID_t.h>
#include <Il2CppModLoader/app/types/SteamItemDef_t.h>
#include <Il2CppModLoader/app/types/SteamInventoryUpdateHandle_t.h>
#include <Il2CppModLoader/app/types/SNetListenSocket_t.h>
#include <Il2CppModLoader/app/types/SNetSocket_t.h>
#include <Il2CppModLoader/app/types/UGCQueryHandle_t.h>
#include <Il2CppModLoader/app/types/AccountID_t.h>
#include <Il2CppModLoader/app/types/PublishedFileId_t.h>
#include <Il2CppModLoader/app/types/PublishedFileId_t__Array.h>
#include <Il2CppModLoader/app/types/UGCHandle_t.h>
#include <Il2CppModLoader/app/types/UGCUpdateHandle_t.h>
#include <Il2CppModLoader/app/types/HHTMLBrowser.h>
#include <Il2CppModLoader/app/types/InputHandle_t.h>
#include <Il2CppModLoader/app/types/InputActionSetHandle_t.h>
#include <Il2CppModLoader/app/types/InputDigitalActionHandle_t.h>
#include <Il2CppModLoader/app/types/InputAnalogActionHandle_t.h>
#include <Il2CppModLoader/app/types/HServerListRequest.h>
#include <Il2CppModLoader/app/types/ISteamMatchmakingServerListResponse_VTable.h>
#include <Il2CppModLoader/app/types/ISteamMatchmakingServerListResponse_InternalServerResponded.h>
#include <Il2CppModLoader/app/types/ISteamMatchmakingServerListResponse_InternalServerFailedToRespond.h>
#include <Il2CppModLoader/app/types/ISteamMatchmakingServerListResponse_InternalRefreshComplete.h>
#include <Il2CppModLoader/app/types/EMatchMakingServerResponse__Enum.h>
#include <Il2CppModLoader/app/types/servernetadr_t.h>
#include <Il2CppModLoader/app/types/gameserveritem_t.h>
#include <Il2CppModLoader/app/types/HServerQuery.h>
#include <Il2CppModLoader/app/types/ISteamMatchmakingPingResponse_VTable.h>
#include <Il2CppModLoader/app/types/ISteamMatchmakingPingResponse_InternalServerResponded.h>
#include <Il2CppModLoader/app/types/ISteamMatchmakingPingResponse_InternalServerFailedToRespond.h>
#include <Il2CppModLoader/app/types/ISteamMatchmakingPlayersResponse_VTable.h>
#include <Il2CppModLoader/app/types/ISteamMatchmakingPlayersResponse_InternalAddPlayerToList.h>
#include <Il2CppModLoader/app/types/ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond.h>
#include <Il2CppModLoader/app/types/ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete.h>
#include <Il2CppModLoader/app/types/ISteamMatchmakingRulesResponse_VTable.h>
#include <Il2CppModLoader/app/types/ISteamMatchmakingRulesResponse_InternalRulesResponded.h>
#include <Il2CppModLoader/app/types/ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond.h>
#include <Il2CppModLoader/app/types/ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete.h>
#include <Il2CppModLoader/app/types/PartyBeaconID_t.h>
#include <Il2CppModLoader/app/types/UGCFileWriteStreamHandle_t.h>
#include <Il2CppModLoader/app/types/PublishedFileUpdateHandle_t.h>
#include <Il2CppModLoader/app/types/ScreenshotHandle.h>
#include <Il2CppModLoader/app/types/SteamLeaderboard_t.h>
#include <Il2CppModLoader/app/types/SteamLeaderboardEntries_t.h>
#include <Il2CppModLoader/app/types/InteropHelp_UTF8StringHandle.h>
#include <Il2CppModLoader/app/types/CCallbackBase.h>
#include <Il2CppModLoader/app/types/CCallbackBaseVTable.h>
#include <Il2CppModLoader/app/types/CCallbackBaseVTable_RunCRDel.h>
#include <Il2CppModLoader/app/types/CCallbackBaseVTable_RunCBDel.h>
#include <Il2CppModLoader/app/types/CCallbackBaseVTable_GetCallbackSizeBytesDel.h>
#include <Il2CppModLoader/app/types/CallbackIdentityAttribute.h>
#include <Il2CppModLoader/app/types/InteropHelp_SteamParamStringArray.h>

namespace app::classes::types {
    namespace Wrapper_TaskQueueDispatcher { IL2CPP_MODLOADER_DLLEXPORT ::app::Wrapper_TaskQueueDispatcher__Class** type_info = (::app::Wrapper_TaskQueueDispatcher__Class**)(modloader::win::memory::resolve_rva(0x047716D8)); }
    namespace Wrapper_c_DisplayClass38_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::Wrapper_c_DisplayClass38_0__Class** type_info = (::app::Wrapper_c_DisplayClass38_0__Class**)(modloader::win::memory::resolve_rva(0x04761328)); }
    namespace Wrapper_c_DisplayClass45_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::Wrapper_c_DisplayClass45_0__Class** type_info = (::app::Wrapper_c_DisplayClass45_0__Class**)(modloader::win::memory::resolve_rva(0x04705930)); }
    namespace Wrapper_c { IL2CPP_MODLOADER_DLLEXPORT ::app::Wrapper_c__Class** type_info = (::app::Wrapper_c__Class**)(modloader::win::memory::resolve_rva(0x04793B58)); }
    namespace Wrapper_c_DisplayClass50_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::Wrapper_c_DisplayClass50_0__Class** type_info = (::app::Wrapper_c_DisplayClass50_0__Class**)(modloader::win::memory::resolve_rva(0x0476C1A0)); }
    namespace Wrapper_c_DisplayClass51_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::Wrapper_c_DisplayClass51_0__Class** type_info = (::app::Wrapper_c_DisplayClass51_0__Class**)(modloader::win::memory::resolve_rva(0x0474A2B8)); }
    namespace Wrapper_c_DisplayClass64_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::Wrapper_c_DisplayClass64_0__Class** type_info = (::app::Wrapper_c_DisplayClass64_0__Class**)(modloader::win::memory::resolve_rva(0x04706668)); }
    namespace Wrapper_c_DisplayClass87_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::Wrapper_c_DisplayClass87_0__Class** type_info = (::app::Wrapper_c_DisplayClass87_0__Class**)(modloader::win::memory::resolve_rva(0x04745778)); }
    namespace TypeExtensions_c { IL2CPP_MODLOADER_DLLEXPORT ::app::TypeExtensions_c__Class** type_info = (::app::TypeExtensions_c__Class**)(modloader::win::memory::resolve_rva(0x0473BBA0)); }
    namespace MemoryLabelDebugger_MemoryManagerDataCache { IL2CPP_MODLOADER_DLLEXPORT ::app::MemoryLabelDebugger_MemoryManagerDataCache__Class** type_info = (::app::MemoryLabelDebugger_MemoryManagerDataCache__Class**)(modloader::win::memory::resolve_rva(0x0478B3C8)); }
    namespace MemoryLabelDebugger_MemoryLabelAllocationCache { IL2CPP_MODLOADER_DLLEXPORT ::app::MemoryLabelDebugger_MemoryLabelAllocationCache__Class** type_info = (::app::MemoryLabelDebugger_MemoryLabelAllocationCache__Class**)(modloader::win::memory::resolve_rva(0x0470BC40)); }
    namespace MemoryLabelDebugger_MemoryLabelBucketInfoCache { IL2CPP_MODLOADER_DLLEXPORT ::app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Class** type_info = (::app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Class**)(modloader::win::memory::resolve_rva(0x04704F68)); }
    namespace MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array__Class** type_info = (::app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array__Class**)(modloader::win::memory::resolve_rva(0x04770000)); }
    namespace MemoryLabelDebugger { IL2CPP_MODLOADER_DLLEXPORT ::app::MemoryLabelDebugger__Class** type_info = (::app::MemoryLabelDebugger__Class**)(modloader::win::memory::resolve_rva(0x04763B78)); }
    namespace MemoryLabelDebugger_c_DisplayClass17_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::MemoryLabelDebugger_c_DisplayClass17_0__Class** type_info = (::app::MemoryLabelDebugger_c_DisplayClass17_0__Class**)(modloader::win::memory::resolve_rva(0x04716778)); }
    namespace MemoryManagerDebugger_MemoryManagerDataCache { IL2CPP_MODLOADER_DLLEXPORT ::app::MemoryManagerDebugger_MemoryManagerDataCache__Class** type_info = (::app::MemoryManagerDebugger_MemoryManagerDataCache__Class**)(modloader::win::memory::resolve_rva(0x04734B90)); }
    namespace MemoryManagerDebugger_MemoryManagerAllocatorCache { IL2CPP_MODLOADER_DLLEXPORT ::app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Class** type_info = (::app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Class**)(modloader::win::memory::resolve_rva(0x047234F8)); }
    namespace MemoryManagerDebugger { IL2CPP_MODLOADER_DLLEXPORT ::app::MemoryManagerDebugger__Class** type_info = (::app::MemoryManagerDebugger__Class**)(modloader::win::memory::resolve_rva(0x0476F6D0)); }
    namespace NvnMemoryDebugger_NvnDataCache { IL2CPP_MODLOADER_DLLEXPORT ::app::NvnMemoryDebugger_NvnDataCache__Class** type_info = (::app::NvnMemoryDebugger_NvnDataCache__Class**)(modloader::win::memory::resolve_rva(0x0472DB20)); }
    namespace NvnMemoryDebugger_NvnPoolCache { IL2CPP_MODLOADER_DLLEXPORT ::app::NvnMemoryDebugger_NvnPoolCache__Class** type_info = (::app::NvnMemoryDebugger_NvnPoolCache__Class**)(modloader::win::memory::resolve_rva(0x04758A70)); }
    namespace NvnMemoryDebugger { IL2CPP_MODLOADER_DLLEXPORT ::app::NvnMemoryDebugger__Class** type_info = (::app::NvnMemoryDebugger__Class**)(modloader::win::memory::resolve_rva(0x047503F0)); }
    namespace Application_NvnBufferUsage__Enum__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Application_NvnBufferUsage__Enum__Array__Class** type_info = (::app::Application_NvnBufferUsage__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04781ED8)); }
    namespace SwitchUndockingController { IL2CPP_MODLOADER_DLLEXPORT ::app::SwitchUndockingController__Class** type_info = (::app::SwitchUndockingController__Class**)(modloader::win::memory::resolve_rva(0x0476AC88)); }
    namespace UberGCLogic_MemoryProbeType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::UberGCLogic_MemoryProbeType__Enum__Class** type_info = (::app::UberGCLogic_MemoryProbeType__Enum__Class**)(modloader::win::memory::resolve_rva(0x047191B0)); }
    namespace UberGCLogic { IL2CPP_MODLOADER_DLLEXPORT ::app::UberGCLogic__Class** type_info = (::app::UberGCLogic__Class**)(modloader::win::memory::resolve_rva(0x0470B908)); }
    namespace UberGCLogic_GCLogicSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::UberGCLogic_GCLogicSettings__Class** type_info = (::app::UberGCLogic_GCLogicSettings__Class**)(modloader::win::memory::resolve_rva(0x0474B988)); }
    namespace Single__Array__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Single__Array__Array__Class** type_info = (::app::Single__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x04797448)); }
    namespace UberAtlasPrewarmContainer { IL2CPP_MODLOADER_DLLEXPORT ::app::UberAtlasPrewarmContainer__Class** type_info = (::app::UberAtlasPrewarmContainer__Class**)(modloader::win::memory::resolve_rva(0x0476EE40)); }
    namespace UberShaderAtlasBuildValidator { IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderAtlasBuildValidator__Class** type_info = (::app::UberShaderAtlasBuildValidator__Class**)(modloader::win::memory::resolve_rva(0x04753688)); }
    namespace MoonIconRenderer_IconObject { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonIconRenderer_IconObject__Class** type_info = (::app::MoonIconRenderer_IconObject__Class**)(modloader::win::memory::resolve_rva(0x04732AE0)); }
    namespace MoonIconRenderer_c { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonIconRenderer_c__Class** type_info = (::app::MoonIconRenderer_c__Class**)(modloader::win::memory::resolve_rva(0x04791220)); }
    namespace MoonTextMeshRenderer { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTextMeshRenderer__Class** type_info = (::app::MoonTextMeshRenderer__Class**)(modloader::win::memory::resolve_rva(0x047596C0)); }
    namespace TextMeshRenderer { IL2CPP_MODLOADER_DLLEXPORT ::app::TextMeshRenderer__Class** type_info = (::app::TextMeshRenderer__Class**)(modloader::win::memory::resolve_rva(0x0473D570)); }
    namespace AppId_t { IL2CPP_MODLOADER_DLLEXPORT ::app::AppId_t__Class** type_info = (::app::AppId_t__Class**)(modloader::win::memory::resolve_rva(0x04778470)); }
    namespace AppId_t__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::AppId_t__Array__Class** type_info = (::app::AppId_t__Array__Class**)(modloader::win::memory::resolve_rva(0x04754E18)); }
    namespace DepotId_t { IL2CPP_MODLOADER_DLLEXPORT ::app::DepotId_t__Class** type_info = (::app::DepotId_t__Class**)(modloader::win::memory::resolve_rva(0x0475CB68)); }
    namespace SteamAPICall_t { IL2CPP_MODLOADER_DLLEXPORT ::app::SteamAPICall_t__Class** type_info = (::app::SteamAPICall_t__Class**)(modloader::win::memory::resolve_rva(0x0475F9B0)); }
    namespace HSteamPipe { IL2CPP_MODLOADER_DLLEXPORT ::app::HSteamPipe__Class** type_info = (::app::HSteamPipe__Class**)(modloader::win::memory::resolve_rva(0x04730358)); }
    namespace HSteamUser { IL2CPP_MODLOADER_DLLEXPORT ::app::HSteamUser__Class** type_info = (::app::HSteamUser__Class**)(modloader::win::memory::resolve_rva(0x0472C278)); }
    namespace ControllerHandle_t { IL2CPP_MODLOADER_DLLEXPORT ::app::ControllerHandle_t__Class** type_info = (::app::ControllerHandle_t__Class**)(modloader::win::memory::resolve_rva(0x04747F28)); }
    namespace ControllerActionSetHandle_t { IL2CPP_MODLOADER_DLLEXPORT ::app::ControllerActionSetHandle_t__Class** type_info = (::app::ControllerActionSetHandle_t__Class**)(modloader::win::memory::resolve_rva(0x0470B788)); }
    namespace ControllerDigitalActionHandle_t { IL2CPP_MODLOADER_DLLEXPORT ::app::ControllerDigitalActionHandle_t__Class** type_info = (::app::ControllerDigitalActionHandle_t__Class**)(modloader::win::memory::resolve_rva(0x0478A050)); }
    namespace ControllerAnalogActionHandle_t { IL2CPP_MODLOADER_DLLEXPORT ::app::ControllerAnalogActionHandle_t__Class** type_info = (::app::ControllerAnalogActionHandle_t__Class**)(modloader::win::memory::resolve_rva(0x04761648)); }
    namespace CGameID { IL2CPP_MODLOADER_DLLEXPORT ::app::CGameID__Class** type_info = (::app::CGameID__Class**)(modloader::win::memory::resolve_rva(0x04710A08)); }
    namespace FriendsGroupID_t { IL2CPP_MODLOADER_DLLEXPORT ::app::FriendsGroupID_t__Class** type_info = (::app::FriendsGroupID_t__Class**)(modloader::win::memory::resolve_rva(0x04702990)); }
    namespace CSteamID__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::CSteamID__Array__Class** type_info = (::app::CSteamID__Array__Class**)(modloader::win::memory::resolve_rva(0x04798440)); }
    namespace HAuthTicket { IL2CPP_MODLOADER_DLLEXPORT ::app::HAuthTicket__Class** type_info = (::app::HAuthTicket__Class**)(modloader::win::memory::resolve_rva(0x0478F1F0)); }
    namespace HTTPRequestHandle { IL2CPP_MODLOADER_DLLEXPORT ::app::HTTPRequestHandle__Class** type_info = (::app::HTTPRequestHandle__Class**)(modloader::win::memory::resolve_rva(0x0474D658)); }
    namespace HTTPCookieContainerHandle { IL2CPP_MODLOADER_DLLEXPORT ::app::HTTPCookieContainerHandle__Class** type_info = (::app::HTTPCookieContainerHandle__Class**)(modloader::win::memory::resolve_rva(0x04713678)); }
    namespace SteamInventoryResult_t { IL2CPP_MODLOADER_DLLEXPORT ::app::SteamInventoryResult_t__Class** type_info = (::app::SteamInventoryResult_t__Class**)(modloader::win::memory::resolve_rva(0x04713A28)); }
    namespace SteamItemInstanceID_t { IL2CPP_MODLOADER_DLLEXPORT ::app::SteamItemInstanceID_t__Class** type_info = (::app::SteamItemInstanceID_t__Class**)(modloader::win::memory::resolve_rva(0x047867D8)); }
    namespace SteamItemDef_t { IL2CPP_MODLOADER_DLLEXPORT ::app::SteamItemDef_t__Class** type_info = (::app::SteamItemDef_t__Class**)(modloader::win::memory::resolve_rva(0x0475B1E0)); }
    namespace SteamInventoryUpdateHandle_t { IL2CPP_MODLOADER_DLLEXPORT ::app::SteamInventoryUpdateHandle_t__Class** type_info = (::app::SteamInventoryUpdateHandle_t__Class**)(modloader::win::memory::resolve_rva(0x0474C798)); }
    namespace SNetListenSocket_t { IL2CPP_MODLOADER_DLLEXPORT ::app::SNetListenSocket_t__Class** type_info = (::app::SNetListenSocket_t__Class**)(modloader::win::memory::resolve_rva(0x04795B08)); }
    namespace SNetSocket_t { IL2CPP_MODLOADER_DLLEXPORT ::app::SNetSocket_t__Class** type_info = (::app::SNetSocket_t__Class**)(modloader::win::memory::resolve_rva(0x0473AF98)); }
    namespace UGCQueryHandle_t { IL2CPP_MODLOADER_DLLEXPORT ::app::UGCQueryHandle_t__Class** type_info = (::app::UGCQueryHandle_t__Class**)(modloader::win::memory::resolve_rva(0x04740B78)); }
    namespace AccountID_t { IL2CPP_MODLOADER_DLLEXPORT ::app::AccountID_t__Class** type_info = (::app::AccountID_t__Class**)(modloader::win::memory::resolve_rva(0x0478CD78)); }
    namespace PublishedFileId_t { IL2CPP_MODLOADER_DLLEXPORT ::app::PublishedFileId_t__Class** type_info = (::app::PublishedFileId_t__Class**)(modloader::win::memory::resolve_rva(0x0478C060)); }
    namespace PublishedFileId_t__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::PublishedFileId_t__Array__Class** type_info = (::app::PublishedFileId_t__Array__Class**)(modloader::win::memory::resolve_rva(0x04764128)); }
    namespace UGCHandle_t { IL2CPP_MODLOADER_DLLEXPORT ::app::UGCHandle_t__Class** type_info = (::app::UGCHandle_t__Class**)(modloader::win::memory::resolve_rva(0x04729B68)); }
    namespace UGCUpdateHandle_t { IL2CPP_MODLOADER_DLLEXPORT ::app::UGCUpdateHandle_t__Class** type_info = (::app::UGCUpdateHandle_t__Class**)(modloader::win::memory::resolve_rva(0x047117F0)); }
    namespace HHTMLBrowser { IL2CPP_MODLOADER_DLLEXPORT ::app::HHTMLBrowser__Class** type_info = (::app::HHTMLBrowser__Class**)(modloader::win::memory::resolve_rva(0x04756660)); }
    namespace InputHandle_t { IL2CPP_MODLOADER_DLLEXPORT ::app::InputHandle_t__Class** type_info = (::app::InputHandle_t__Class**)(modloader::win::memory::resolve_rva(0x047956F8)); }
    namespace InputActionSetHandle_t { IL2CPP_MODLOADER_DLLEXPORT ::app::InputActionSetHandle_t__Class** type_info = (::app::InputActionSetHandle_t__Class**)(modloader::win::memory::resolve_rva(0x0474ACB0)); }
    namespace InputDigitalActionHandle_t { IL2CPP_MODLOADER_DLLEXPORT ::app::InputDigitalActionHandle_t__Class** type_info = (::app::InputDigitalActionHandle_t__Class**)(modloader::win::memory::resolve_rva(0x0473E768)); }
    namespace InputAnalogActionHandle_t { IL2CPP_MODLOADER_DLLEXPORT ::app::InputAnalogActionHandle_t__Class** type_info = (::app::InputAnalogActionHandle_t__Class**)(modloader::win::memory::resolve_rva(0x04762810)); }
    namespace HServerListRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::HServerListRequest__Class** type_info = (::app::HServerListRequest__Class**)(modloader::win::memory::resolve_rva(0x0471D3D0)); }
    namespace ISteamMatchmakingServerListResponse_VTable { IL2CPP_MODLOADER_DLLEXPORT ::app::ISteamMatchmakingServerListResponse_VTable__Class** type_info = (::app::ISteamMatchmakingServerListResponse_VTable__Class**)(modloader::win::memory::resolve_rva(0x0478A6A8)); }
    namespace ISteamMatchmakingServerListResponse_InternalServerResponded { IL2CPP_MODLOADER_DLLEXPORT ::app::ISteamMatchmakingServerListResponse_InternalServerResponded__Class** type_info = (::app::ISteamMatchmakingServerListResponse_InternalServerResponded__Class**)(modloader::win::memory::resolve_rva(0x04738628)); }
    namespace ISteamMatchmakingServerListResponse_InternalServerFailedToRespond { IL2CPP_MODLOADER_DLLEXPORT ::app::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__Class** type_info = (::app::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__Class**)(modloader::win::memory::resolve_rva(0x04705C88)); }
    namespace ISteamMatchmakingServerListResponse_InternalRefreshComplete { IL2CPP_MODLOADER_DLLEXPORT ::app::ISteamMatchmakingServerListResponse_InternalRefreshComplete__Class** type_info = (::app::ISteamMatchmakingServerListResponse_InternalRefreshComplete__Class**)(modloader::win::memory::resolve_rva(0x0471D098)); }
    namespace EMatchMakingServerResponse__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::EMatchMakingServerResponse__Enum__Class** type_info = (::app::EMatchMakingServerResponse__Enum__Class**)(modloader::win::memory::resolve_rva(0x04753270)); }
    namespace servernetadr_t { IL2CPP_MODLOADER_DLLEXPORT ::app::servernetadr_t__Class** type_info = (::app::servernetadr_t__Class**)(modloader::win::memory::resolve_rva(0x0476CF90)); }
    namespace gameserveritem_t { IL2CPP_MODLOADER_DLLEXPORT ::app::gameserveritem_t__Class** type_info = (::app::gameserveritem_t__Class**)(modloader::win::memory::resolve_rva(0x04792EF8)); }
    namespace HServerQuery { IL2CPP_MODLOADER_DLLEXPORT ::app::HServerQuery__Class** type_info = (::app::HServerQuery__Class**)(modloader::win::memory::resolve_rva(0x047164A0)); }
    namespace ISteamMatchmakingPingResponse_VTable { IL2CPP_MODLOADER_DLLEXPORT ::app::ISteamMatchmakingPingResponse_VTable__Class** type_info = (::app::ISteamMatchmakingPingResponse_VTable__Class**)(modloader::win::memory::resolve_rva(0x047875D0)); }
    namespace ISteamMatchmakingPingResponse_InternalServerResponded { IL2CPP_MODLOADER_DLLEXPORT ::app::ISteamMatchmakingPingResponse_InternalServerResponded__Class** type_info = (::app::ISteamMatchmakingPingResponse_InternalServerResponded__Class**)(modloader::win::memory::resolve_rva(0x04708CD8)); }
    namespace ISteamMatchmakingPingResponse_InternalServerFailedToRespond { IL2CPP_MODLOADER_DLLEXPORT ::app::ISteamMatchmakingPingResponse_InternalServerFailedToRespond__Class** type_info = (::app::ISteamMatchmakingPingResponse_InternalServerFailedToRespond__Class**)(modloader::win::memory::resolve_rva(0x0475FAF0)); }
    namespace ISteamMatchmakingPlayersResponse_VTable { IL2CPP_MODLOADER_DLLEXPORT ::app::ISteamMatchmakingPlayersResponse_VTable__Class** type_info = (::app::ISteamMatchmakingPlayersResponse_VTable__Class**)(modloader::win::memory::resolve_rva(0x04794D38)); }
    namespace ISteamMatchmakingPlayersResponse_InternalAddPlayerToList { IL2CPP_MODLOADER_DLLEXPORT ::app::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__Class** type_info = (::app::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__Class**)(modloader::win::memory::resolve_rva(0x0476E5B0)); }
    namespace ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond { IL2CPP_MODLOADER_DLLEXPORT ::app::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__Class** type_info = (::app::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__Class**)(modloader::win::memory::resolve_rva(0x047306A8)); }
    namespace ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete { IL2CPP_MODLOADER_DLLEXPORT ::app::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete__Class** type_info = (::app::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete__Class**)(modloader::win::memory::resolve_rva(0x04712DD0)); }
    namespace ISteamMatchmakingRulesResponse_VTable { IL2CPP_MODLOADER_DLLEXPORT ::app::ISteamMatchmakingRulesResponse_VTable__Class** type_info = (::app::ISteamMatchmakingRulesResponse_VTable__Class**)(modloader::win::memory::resolve_rva(0x047756B8)); }
    namespace ISteamMatchmakingRulesResponse_InternalRulesResponded { IL2CPP_MODLOADER_DLLEXPORT ::app::ISteamMatchmakingRulesResponse_InternalRulesResponded__Class** type_info = (::app::ISteamMatchmakingRulesResponse_InternalRulesResponded__Class**)(modloader::win::memory::resolve_rva(0x0475F880)); }
    namespace ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond { IL2CPP_MODLOADER_DLLEXPORT ::app::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond__Class** type_info = (::app::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond__Class**)(modloader::win::memory::resolve_rva(0x0475CEA8)); }
    namespace ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete { IL2CPP_MODLOADER_DLLEXPORT ::app::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete__Class** type_info = (::app::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete__Class**)(modloader::win::memory::resolve_rva(0x04715D80)); }
    namespace PartyBeaconID_t { IL2CPP_MODLOADER_DLLEXPORT ::app::PartyBeaconID_t__Class** type_info = (::app::PartyBeaconID_t__Class**)(modloader::win::memory::resolve_rva(0x04761B50)); }
    namespace UGCFileWriteStreamHandle_t { IL2CPP_MODLOADER_DLLEXPORT ::app::UGCFileWriteStreamHandle_t__Class** type_info = (::app::UGCFileWriteStreamHandle_t__Class**)(modloader::win::memory::resolve_rva(0x04733E88)); }
    namespace PublishedFileUpdateHandle_t { IL2CPP_MODLOADER_DLLEXPORT ::app::PublishedFileUpdateHandle_t__Class** type_info = (::app::PublishedFileUpdateHandle_t__Class**)(modloader::win::memory::resolve_rva(0x0474B068)); }
    namespace ScreenshotHandle { IL2CPP_MODLOADER_DLLEXPORT ::app::ScreenshotHandle__Class** type_info = (::app::ScreenshotHandle__Class**)(modloader::win::memory::resolve_rva(0x04787F58)); }
    namespace SteamLeaderboard_t { IL2CPP_MODLOADER_DLLEXPORT ::app::SteamLeaderboard_t__Class** type_info = (::app::SteamLeaderboard_t__Class**)(modloader::win::memory::resolve_rva(0x0474D7C0)); }
    namespace SteamLeaderboardEntries_t { IL2CPP_MODLOADER_DLLEXPORT ::app::SteamLeaderboardEntries_t__Class** type_info = (::app::SteamLeaderboardEntries_t__Class**)(modloader::win::memory::resolve_rva(0x04778060)); }
    namespace InteropHelp_UTF8StringHandle { IL2CPP_MODLOADER_DLLEXPORT ::app::InteropHelp_UTF8StringHandle__Class** type_info = (::app::InteropHelp_UTF8StringHandle__Class**)(modloader::win::memory::resolve_rva(0x04718868)); }
    namespace CCallbackBase { IL2CPP_MODLOADER_DLLEXPORT ::app::CCallbackBase__Class** type_info = (::app::CCallbackBase__Class**)(modloader::win::memory::resolve_rva(0x0471DD90)); }
    namespace CCallbackBaseVTable { IL2CPP_MODLOADER_DLLEXPORT ::app::CCallbackBaseVTable__Class** type_info = (::app::CCallbackBaseVTable__Class**)(modloader::win::memory::resolve_rva(0x0476DDC0)); }
    namespace CCallbackBaseVTable_RunCRDel { IL2CPP_MODLOADER_DLLEXPORT ::app::CCallbackBaseVTable_RunCRDel__Class** type_info = (::app::CCallbackBaseVTable_RunCRDel__Class**)(modloader::win::memory::resolve_rva(0x0478FB20)); }
    namespace CCallbackBaseVTable_RunCBDel { IL2CPP_MODLOADER_DLLEXPORT ::app::CCallbackBaseVTable_RunCBDel__Class** type_info = (::app::CCallbackBaseVTable_RunCBDel__Class**)(modloader::win::memory::resolve_rva(0x04765B98)); }
    namespace CCallbackBaseVTable_GetCallbackSizeBytesDel { IL2CPP_MODLOADER_DLLEXPORT ::app::CCallbackBaseVTable_GetCallbackSizeBytesDel__Class** type_info = (::app::CCallbackBaseVTable_GetCallbackSizeBytesDel__Class**)(modloader::win::memory::resolve_rva(0x04769EB8)); }
    namespace CallbackIdentityAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::CallbackIdentityAttribute__Class** type_info = (::app::CallbackIdentityAttribute__Class**)(modloader::win::memory::resolve_rva(0x04787358)); }
    namespace InteropHelp_SteamParamStringArray { IL2CPP_MODLOADER_DLLEXPORT ::app::InteropHelp_SteamParamStringArray__Class** type_info = (::app::InteropHelp_SteamParamStringArray__Class**)(modloader::win::memory::resolve_rva(0x04796298)); }
}
