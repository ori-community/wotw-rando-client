#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/SpellUIConfirmationOverlay_c.h>
#include <Il2CppModLoader/app/types/SpellUIEquipScreen.h>
#include <Il2CppModLoader/app/types/SpiritShardUIShardSocket__Array.h>
#include <Il2CppModLoader/app/types/SpiritShardUIItem_Context.h>
#include <Il2CppModLoader/app/types/SpellUIEquipScreen_c_DisplayClass84_0.h>
#include <Il2CppModLoader/app/types/SpellUIEquipScreen_c_DisplayClass85_0.h>
#include <Il2CppModLoader/app/types/SpellUIShardListOverlay_c.h>
#include <Il2CppModLoader/app/types/SpellUISpellDetails_c.h>
#include <Il2CppModLoader/app/types/SpellPickupContext.h>
#include <Il2CppModLoader/app/types/ChainLightningController_c_DisplayClass10_0.h>
#include <Il2CppModLoader/app/types/PlayerSpiritShards_c.h>
#include <Il2CppModLoader/app/types/SpiritShardDescription.h>
#include <Il2CppModLoader/app/types/SpiritShardIcons_IconTexture__Array.h>
#include <Il2CppModLoader/app/types/SpiritShardIconsCollection_Icons.h>
#include <Il2CppModLoader/app/types/SpiritShardSettings.h>
#include <Il2CppModLoader/app/types/SpiritShardTypeListProvider.h>
#include <Il2CppModLoader/app/types/SpiritShardTypeListProvider_c.h>
#include <Il2CppModLoader/app/types/SpiritShardsScreen.h>
#include <Il2CppModLoader/app/types/SpiritShardsScreen_c_DisplayClass77_0.h>
#include <Il2CppModLoader/app/types/SpiritShardsScreen_c.h>
#include <Il2CppModLoader/app/types/SpiritShardsShopScreen_c_DisplayClass63_0.h>
#include <Il2CppModLoader/app/types/SpiritShardsShopScreen_c.h>
#include <Il2CppModLoader/app/types/SpiritShardUIConfirmationOverlay_c.h>
#include <Il2CppModLoader/app/types/StatisticsManager.h>
#include <Il2CppModLoader/app/types/StatSetting_StatDisplayCategory__Enum.h>
#include <Il2CppModLoader/app/types/StatSetting.h>
#include <Il2CppModLoader/app/types/StatisticsManager_RuntimeStatEntry.h>
#include <Il2CppModLoader/app/types/LeaderboardsB.h>
#include <Il2CppModLoader/app/types/LeaderboardsB_c_DisplayClass72_0.h>
#include <Il2CppModLoader/app/types/LeaderboardTableUI_c.h>
#include <Il2CppModLoader/app/types/SteamTelemetry.h>
#include <Il2CppModLoader/app/types/TelemetryEvent__Enum.h>
#include <Il2CppModLoader/app/types/SteamTelemetry_Data.h>
#include <Il2CppModLoader/app/types/SteamTelemetry_StringData.h>
#include <Il2CppModLoader/app/types/SteamTelemetry_SendRoutine_d_10.h>
#include <Il2CppModLoader/app/types/SteamManager.h>
#include <Il2CppModLoader/app/types/GarbageCollectionDetector.h>
#include <Il2CppModLoader/app/types/FramePerformanceMonitor.h>
#include <Il2CppModLoader/app/types/FramePerformanceMonitor_PerformanceEntry.h>
#include <Il2CppModLoader/app/types/FramePerformanceMonitor_PerformanceFrameData.h>
#include <Il2CppModLoader/app/types/FramePerformanceMonitor_PerformanceFrameData_c.h>
#include <Il2CppModLoader/app/types/FramePerformanceMonitor_PerformanceEntry_c.h>
#include <Il2CppModLoader/app/types/GameDVRPerformanceMonitor.h>
#include <Il2CppModLoader/app/types/OutputWriter.h>
#include <Il2CppModLoader/app/types/PerformanceMonitor.h>
#include <Il2CppModLoader/app/types/FPSMonitor.h>
#include <Il2CppModLoader/app/types/DroppedFrameMonitor.h>
#include <Il2CppModLoader/app/types/DroppedFrameMonitor_FrameState__Enum.h>
#include <Il2CppModLoader/app/types/DroppedFrameMonitor_TempData.h>
#include <Il2CppModLoader/app/types/FPSMonitor_FrameType__Enum.h>
#include <Il2CppModLoader/app/types/FPSMonitor_FrameTimingData.h>
#include <Il2CppModLoader/app/types/FPSMonitor_FrameTimingData__Array.h>
#include <Il2CppModLoader/app/types/FPSTestResult.h>
#include <Il2CppModLoader/app/types/FPSSampleData.h>
#include <Il2CppModLoader/app/types/PerformanceMonitor_c.h>
#include <Il2CppModLoader/app/types/PerformanceTestManager_State__Enum.h>
#include <Il2CppModLoader/app/types/PerformanceTestManager.h>
#include <Il2CppModLoader/app/types/FPSTestOutput.h>
#include <Il2CppModLoader/app/types/FPSTestFields_Scope__Enum.h>
#include <Il2CppModLoader/app/types/SceneFrameworkPerformanceMonitor.h>
#include <Il2CppModLoader/app/types/Test.h>
#include <Il2CppModLoader/app/types/TestReporter.h>
#include <Il2CppModLoader/app/types/TestSet.h>
#include <Il2CppModLoader/app/types/TestSetConfiguration.h>
#include <Il2CppModLoader/app/types/TestSet_c.h>
#include <Il2CppModLoader/app/types/TestSet_c_DisplayClass17_0.h>
#include <Il2CppModLoader/app/types/TestSetManager.h>
#include <Il2CppModLoader/app/types/JUnitReporter_TestSuite.h>
#include <Il2CppModLoader/app/types/JUnitReporter_TestCase.h>
#include <Il2CppModLoader/app/types/JUnitReporter_Failure.h>
#include <Il2CppModLoader/app/types/UnloadPreviousTestComplete.h>
#include <Il2CppModLoader/app/types/TitleScreenManager_Screen__Enum.h>
#include <Il2CppModLoader/app/types/TitleScreenManager.h>
#include <Il2CppModLoader/app/types/TitleScreenManager_WaitToShowFirstTimeQualitySettings_d_48.h>
#include <Il2CppModLoader/app/types/UberShaderPrewarmer.h>
#include <Il2CppModLoader/app/types/UberShaderPrewarmer_PrewarmedShader.h>
#include <Il2CppModLoader/app/types/PlayerAbilityStatePair.h>
#include <Il2CppModLoader/app/types/SceneUberStateCondition.h>
#include <Il2CppModLoader/app/types/WeightController.h>
#include <Il2CppModLoader/app/types/IBrigthnessContributionAgent.h>
#include <Il2CppModLoader/app/types/GlobalBrightnessController.h>
#include <Il2CppModLoader/app/types/TempBrigthnessContributionAgent.h>
#include <Il2CppModLoader/app/types/CageStructureTool_c_DisplayClass62_0.h>
#include <Il2CppModLoader/app/types/CageStructureTool_c_DisplayClass64_0.h>
#include <Il2CppModLoader/app/types/CageStructureTool_c_DisplayClass65_0.h>
#include <Il2CppModLoader/app/types/CageStructureTool_c_DisplayClass71_0.h>
#include <Il2CppModLoader/app/types/CageStructureTool_c_DisplayClass74_0.h>
#include <Il2CppModLoader/app/types/CageStructureTool_c_DisplayClass75_0.h>
#include <Il2CppModLoader/app/types/CageStructureTool_c_DisplayClass93_0.h>
#include <Il2CppModLoader/app/types/CageStructureTool_c_DisplayClass108_0.h>
#include <Il2CppModLoader/app/types/CageStructureTool_c.h>
#include <Il2CppModLoader/app/types/SmoothLinesPlugin_NodeMetaData.h>
#include <Il2CppModLoader/app/types/DistortModifier_GetKeywordsForShader_d_4.h>
#include <Il2CppModLoader/app/types/UberShaderCurve.h>
#include <Il2CppModLoader/app/types/TurbulenceDistortionModifier.h>
#include <Il2CppModLoader/app/types/TurbulenceRotationModifier.h>
#include <Il2CppModLoader/app/types/UberShaderFloat.h>
#include <Il2CppModLoader/app/types/TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11.h>
#include <Il2CppModLoader/app/types/TurbulenceRotationModifier_GetKeywordsForShader_d_13.h>
#include <Il2CppModLoader/app/types/TurbulenceScaleModifier.h>

namespace app::classes::types {
    namespace SpellUIConfirmationOverlay_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SpellUIConfirmationOverlay_c__Class** type_info = (::app::SpellUIConfirmationOverlay_c__Class**)(modloader::win::memory::resolve_rva(0x04779B70)); }
    namespace SpellUIEquipScreen { IL2CPP_MODLOADER_DLLEXPORT ::app::SpellUIEquipScreen__Class** type_info = (::app::SpellUIEquipScreen__Class**)(modloader::win::memory::resolve_rva(0x0470EE48)); }
    namespace SpiritShardUIShardSocket__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SpiritShardUIShardSocket__Array__Class** type_info = (::app::SpiritShardUIShardSocket__Array__Class**)(modloader::win::memory::resolve_rva(0x0478DB60)); }
    namespace SpiritShardUIItem_Context { IL2CPP_MODLOADER_DLLEXPORT ::app::SpiritShardUIItem_Context__Class** type_info = (::app::SpiritShardUIItem_Context__Class**)(modloader::win::memory::resolve_rva(0x04790420)); }
    namespace SpellUIEquipScreen_c_DisplayClass84_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::SpellUIEquipScreen_c_DisplayClass84_0__Class** type_info = (::app::SpellUIEquipScreen_c_DisplayClass84_0__Class**)(modloader::win::memory::resolve_rva(0x04788D88)); }
    namespace SpellUIEquipScreen_c_DisplayClass85_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::SpellUIEquipScreen_c_DisplayClass85_0__Class** type_info = (::app::SpellUIEquipScreen_c_DisplayClass85_0__Class**)(modloader::win::memory::resolve_rva(0x0473F3A0)); }
    namespace SpellUIShardListOverlay_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SpellUIShardListOverlay_c__Class** type_info = (::app::SpellUIShardListOverlay_c__Class**)(modloader::win::memory::resolve_rva(0x04791620)); }
    namespace SpellUISpellDetails_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SpellUISpellDetails_c__Class** type_info = (::app::SpellUISpellDetails_c__Class**)(modloader::win::memory::resolve_rva(0x047338B0)); }
    namespace SpellPickupContext { IL2CPP_MODLOADER_DLLEXPORT ::app::SpellPickupContext__Class** type_info = (::app::SpellPickupContext__Class**)(modloader::win::memory::resolve_rva(0x0477FDC0)); }
    namespace ChainLightningController_c_DisplayClass10_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::ChainLightningController_c_DisplayClass10_0__Class** type_info = (::app::ChainLightningController_c_DisplayClass10_0__Class**)(modloader::win::memory::resolve_rva(0x047758A8)); }
    namespace PlayerSpiritShards_c { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerSpiritShards_c__Class** type_info = (::app::PlayerSpiritShards_c__Class**)(modloader::win::memory::resolve_rva(0x0471B5F8)); }
    namespace SpiritShardDescription { IL2CPP_MODLOADER_DLLEXPORT ::app::SpiritShardDescription__Class** type_info = (::app::SpiritShardDescription__Class**)(modloader::win::memory::resolve_rva(0x04728998)); }
    namespace SpiritShardIcons_IconTexture__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SpiritShardIcons_IconTexture__Array__Class** type_info = (::app::SpiritShardIcons_IconTexture__Array__Class**)(modloader::win::memory::resolve_rva(0x04731370)); }
    namespace SpiritShardIconsCollection_Icons { IL2CPP_MODLOADER_DLLEXPORT ::app::SpiritShardIconsCollection_Icons__Class** type_info = (::app::SpiritShardIconsCollection_Icons__Class**)(modloader::win::memory::resolve_rva(0x047638F0)); }
    namespace SpiritShardSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::SpiritShardSettings__Class** type_info = (::app::SpiritShardSettings__Class**)(modloader::win::memory::resolve_rva(0x04782028)); }
    namespace SpiritShardTypeListProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::SpiritShardTypeListProvider__Class** type_info = (::app::SpiritShardTypeListProvider__Class**)(modloader::win::memory::resolve_rva(0x04789EE8)); }
    namespace SpiritShardTypeListProvider_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SpiritShardTypeListProvider_c__Class** type_info = (::app::SpiritShardTypeListProvider_c__Class**)(modloader::win::memory::resolve_rva(0x0478EEB0)); }
    namespace SpiritShardsScreen { IL2CPP_MODLOADER_DLLEXPORT ::app::SpiritShardsScreen__Class** type_info = (::app::SpiritShardsScreen__Class**)(modloader::win::memory::resolve_rva(0x04785B58)); }
    namespace SpiritShardsScreen_c_DisplayClass77_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::SpiritShardsScreen_c_DisplayClass77_0__Class** type_info = (::app::SpiritShardsScreen_c_DisplayClass77_0__Class**)(modloader::win::memory::resolve_rva(0x04757C50)); }
    namespace SpiritShardsScreen_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SpiritShardsScreen_c__Class** type_info = (::app::SpiritShardsScreen_c__Class**)(modloader::win::memory::resolve_rva(0x047608E8)); }
    namespace SpiritShardsShopScreen_c_DisplayClass63_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::SpiritShardsShopScreen_c_DisplayClass63_0__Class** type_info = (::app::SpiritShardsShopScreen_c_DisplayClass63_0__Class**)(modloader::win::memory::resolve_rva(0x0474C928)); }
    namespace SpiritShardsShopScreen_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SpiritShardsShopScreen_c__Class** type_info = (::app::SpiritShardsShopScreen_c__Class**)(modloader::win::memory::resolve_rva(0x0477FD28)); }
    namespace SpiritShardUIConfirmationOverlay_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SpiritShardUIConfirmationOverlay_c__Class** type_info = (::app::SpiritShardUIConfirmationOverlay_c__Class**)(modloader::win::memory::resolve_rva(0x04798068)); }
    namespace StatisticsManager { IL2CPP_MODLOADER_DLLEXPORT ::app::StatisticsManager__Class** type_info = (::app::StatisticsManager__Class**)(modloader::win::memory::resolve_rva(0x0478B3C0)); }
    namespace StatSetting_StatDisplayCategory__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::StatSetting_StatDisplayCategory__Enum__Class** type_info = (::app::StatSetting_StatDisplayCategory__Enum__Class**)(modloader::win::memory::resolve_rva(0x047554F0)); }
    namespace StatSetting { IL2CPP_MODLOADER_DLLEXPORT ::app::StatSetting__Class** type_info = (::app::StatSetting__Class**)(modloader::win::memory::resolve_rva(0x047186D8)); }
    namespace StatisticsManager_RuntimeStatEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::StatisticsManager_RuntimeStatEntry__Class** type_info = (::app::StatisticsManager_RuntimeStatEntry__Class**)(modloader::win::memory::resolve_rva(0x04794D48)); }
    namespace LeaderboardsB { IL2CPP_MODLOADER_DLLEXPORT ::app::LeaderboardsB__Class** type_info = (::app::LeaderboardsB__Class**)(modloader::win::memory::resolve_rva(0x04737420)); }
    namespace LeaderboardsB_c_DisplayClass72_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::LeaderboardsB_c_DisplayClass72_0__Class** type_info = (::app::LeaderboardsB_c_DisplayClass72_0__Class**)(modloader::win::memory::resolve_rva(0x0470B650)); }
    namespace LeaderboardTableUI_c { IL2CPP_MODLOADER_DLLEXPORT ::app::LeaderboardTableUI_c__Class** type_info = (::app::LeaderboardTableUI_c__Class**)(modloader::win::memory::resolve_rva(0x04740CF8)); }
    namespace SteamTelemetry { IL2CPP_MODLOADER_DLLEXPORT ::app::SteamTelemetry__Class** type_info = (::app::SteamTelemetry__Class**)(modloader::win::memory::resolve_rva(0x0471E288)); }
    namespace TelemetryEvent__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::TelemetryEvent__Enum__Class** type_info = (::app::TelemetryEvent__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478C300)); }
    namespace SteamTelemetry_Data { IL2CPP_MODLOADER_DLLEXPORT ::app::SteamTelemetry_Data__Class** type_info = (::app::SteamTelemetry_Data__Class**)(modloader::win::memory::resolve_rva(0x0471B240)); }
    namespace SteamTelemetry_StringData { IL2CPP_MODLOADER_DLLEXPORT ::app::SteamTelemetry_StringData__Class** type_info = (::app::SteamTelemetry_StringData__Class**)(modloader::win::memory::resolve_rva(0x04720658)); }
    namespace SteamTelemetry_SendRoutine_d_10 { IL2CPP_MODLOADER_DLLEXPORT ::app::SteamTelemetry_SendRoutine_d_10__Class** type_info = (::app::SteamTelemetry_SendRoutine_d_10__Class**)(modloader::win::memory::resolve_rva(0x04758C30)); }
    namespace SteamManager { IL2CPP_MODLOADER_DLLEXPORT ::app::SteamManager__Class** type_info = (::app::SteamManager__Class**)(modloader::win::memory::resolve_rva(0x04798D28)); }
    namespace GarbageCollectionDetector { IL2CPP_MODLOADER_DLLEXPORT ::app::GarbageCollectionDetector__Class** type_info = (::app::GarbageCollectionDetector__Class**)(modloader::win::memory::resolve_rva(0x047828B0)); }
    namespace FramePerformanceMonitor { IL2CPP_MODLOADER_DLLEXPORT ::app::FramePerformanceMonitor__Class** type_info = (::app::FramePerformanceMonitor__Class**)(modloader::win::memory::resolve_rva(0x04758AC8)); }
    namespace FramePerformanceMonitor_PerformanceEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::FramePerformanceMonitor_PerformanceEntry__Class** type_info = (::app::FramePerformanceMonitor_PerformanceEntry__Class**)(modloader::win::memory::resolve_rva(0x04749050)); }
    namespace FramePerformanceMonitor_PerformanceFrameData { IL2CPP_MODLOADER_DLLEXPORT ::app::FramePerformanceMonitor_PerformanceFrameData__Class** type_info = (::app::FramePerformanceMonitor_PerformanceFrameData__Class**)(modloader::win::memory::resolve_rva(0x04710F10)); }
    namespace FramePerformanceMonitor_PerformanceFrameData_c { IL2CPP_MODLOADER_DLLEXPORT ::app::FramePerformanceMonitor_PerformanceFrameData_c__Class** type_info = (::app::FramePerformanceMonitor_PerformanceFrameData_c__Class**)(modloader::win::memory::resolve_rva(0x04704060)); }
    namespace FramePerformanceMonitor_PerformanceEntry_c { IL2CPP_MODLOADER_DLLEXPORT ::app::FramePerformanceMonitor_PerformanceEntry_c__Class** type_info = (::app::FramePerformanceMonitor_PerformanceEntry_c__Class**)(modloader::win::memory::resolve_rva(0x04781690)); }
    namespace GameDVRPerformanceMonitor { IL2CPP_MODLOADER_DLLEXPORT ::app::GameDVRPerformanceMonitor__Class** type_info = (::app::GameDVRPerformanceMonitor__Class**)(modloader::win::memory::resolve_rva(0x0475CA98)); }
    namespace OutputWriter { IL2CPP_MODLOADER_DLLEXPORT ::app::OutputWriter__Class** type_info = (::app::OutputWriter__Class**)(modloader::win::memory::resolve_rva(0x04774560)); }
    namespace PerformanceMonitor { IL2CPP_MODLOADER_DLLEXPORT ::app::PerformanceMonitor__Class** type_info = (::app::PerformanceMonitor__Class**)(modloader::win::memory::resolve_rva(0x04729E08)); }
    namespace FPSMonitor { IL2CPP_MODLOADER_DLLEXPORT ::app::FPSMonitor__Class** type_info = (::app::FPSMonitor__Class**)(modloader::win::memory::resolve_rva(0x04798D30)); }
    namespace DroppedFrameMonitor { IL2CPP_MODLOADER_DLLEXPORT ::app::DroppedFrameMonitor__Class** type_info = (::app::DroppedFrameMonitor__Class**)(modloader::win::memory::resolve_rva(0x0472F308)); }
    namespace DroppedFrameMonitor_FrameState__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::DroppedFrameMonitor_FrameState__Enum__Class** type_info = (::app::DroppedFrameMonitor_FrameState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04796978)); }
    namespace DroppedFrameMonitor_TempData { IL2CPP_MODLOADER_DLLEXPORT ::app::DroppedFrameMonitor_TempData__Class** type_info = (::app::DroppedFrameMonitor_TempData__Class**)(modloader::win::memory::resolve_rva(0x04723708)); }
    namespace FPSMonitor_FrameType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::FPSMonitor_FrameType__Enum__Class** type_info = (::app::FPSMonitor_FrameType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472E630)); }
    namespace FPSMonitor_FrameTimingData { IL2CPP_MODLOADER_DLLEXPORT ::app::FPSMonitor_FrameTimingData__Class** type_info = (::app::FPSMonitor_FrameTimingData__Class**)(modloader::win::memory::resolve_rva(0x0474BF50)); }
    namespace FPSMonitor_FrameTimingData__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::FPSMonitor_FrameTimingData__Array__Class** type_info = (::app::FPSMonitor_FrameTimingData__Array__Class**)(modloader::win::memory::resolve_rva(0x047843B8)); }
    namespace FPSTestResult { IL2CPP_MODLOADER_DLLEXPORT ::app::FPSTestResult__Class** type_info = (::app::FPSTestResult__Class**)(modloader::win::memory::resolve_rva(0x0472B4F8)); }
    namespace FPSSampleData { IL2CPP_MODLOADER_DLLEXPORT ::app::FPSSampleData__Class** type_info = (::app::FPSSampleData__Class**)(modloader::win::memory::resolve_rva(0x04754298)); }
    namespace PerformanceMonitor_c { IL2CPP_MODLOADER_DLLEXPORT ::app::PerformanceMonitor_c__Class** type_info = (::app::PerformanceMonitor_c__Class**)(modloader::win::memory::resolve_rva(0x0471FA70)); }
    namespace PerformanceTestManager_State__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::PerformanceTestManager_State__Enum__Class** type_info = (::app::PerformanceTestManager_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475E5A8)); }
    namespace PerformanceTestManager { IL2CPP_MODLOADER_DLLEXPORT ::app::PerformanceTestManager__Class** type_info = (::app::PerformanceTestManager__Class**)(modloader::win::memory::resolve_rva(0x0474FBF8)); }
    namespace FPSTestOutput { IL2CPP_MODLOADER_DLLEXPORT ::app::FPSTestOutput__Class** type_info = (::app::FPSTestOutput__Class**)(modloader::win::memory::resolve_rva(0x0472BFF0)); }
    namespace FPSTestFields_Scope__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::FPSTestFields_Scope__Enum__Class** type_info = (::app::FPSTestFields_Scope__Enum__Class**)(modloader::win::memory::resolve_rva(0x04751800)); }
    namespace SceneFrameworkPerformanceMonitor { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneFrameworkPerformanceMonitor__Class** type_info = (::app::SceneFrameworkPerformanceMonitor__Class**)(modloader::win::memory::resolve_rva(0x04719800)); }
    namespace Test { IL2CPP_MODLOADER_DLLEXPORT ::app::Test__Class** type_info = (::app::Test__Class**)(modloader::win::memory::resolve_rva(0x04778550)); }
    namespace TestReporter { IL2CPP_MODLOADER_DLLEXPORT ::app::TestReporter__Class** type_info = (::app::TestReporter__Class**)(modloader::win::memory::resolve_rva(0x0472CCF8)); }
    namespace TestSet { IL2CPP_MODLOADER_DLLEXPORT ::app::TestSet__Class** type_info = (::app::TestSet__Class**)(modloader::win::memory::resolve_rva(0x0476BCD0)); }
    namespace TestSetConfiguration { IL2CPP_MODLOADER_DLLEXPORT ::app::TestSetConfiguration__Class** type_info = (::app::TestSetConfiguration__Class**)(modloader::win::memory::resolve_rva(0x04790568)); }
    namespace TestSet_c { IL2CPP_MODLOADER_DLLEXPORT ::app::TestSet_c__Class** type_info = (::app::TestSet_c__Class**)(modloader::win::memory::resolve_rva(0x0470CCA0)); }
    namespace TestSet_c_DisplayClass17_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::TestSet_c_DisplayClass17_0__Class** type_info = (::app::TestSet_c_DisplayClass17_0__Class**)(modloader::win::memory::resolve_rva(0x0472BBB8)); }
    namespace TestSetManager { IL2CPP_MODLOADER_DLLEXPORT ::app::TestSetManager__Class** type_info = (::app::TestSetManager__Class**)(modloader::win::memory::resolve_rva(0x047646C8)); }
    namespace JUnitReporter_TestSuite { IL2CPP_MODLOADER_DLLEXPORT ::app::JUnitReporter_TestSuite__Class** type_info = (::app::JUnitReporter_TestSuite__Class**)(modloader::win::memory::resolve_rva(0x0475E0C0)); }
    namespace JUnitReporter_TestCase { IL2CPP_MODLOADER_DLLEXPORT ::app::JUnitReporter_TestCase__Class** type_info = (::app::JUnitReporter_TestCase__Class**)(modloader::win::memory::resolve_rva(0x04757D58)); }
    namespace JUnitReporter_Failure { IL2CPP_MODLOADER_DLLEXPORT ::app::JUnitReporter_Failure__Class** type_info = (::app::JUnitReporter_Failure__Class**)(modloader::win::memory::resolve_rva(0x04745C90)); }
    namespace UnloadPreviousTestComplete { IL2CPP_MODLOADER_DLLEXPORT ::app::UnloadPreviousTestComplete__Class** type_info = (::app::UnloadPreviousTestComplete__Class**)(modloader::win::memory::resolve_rva(0x047369C0)); }
    namespace TitleScreenManager_Screen__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::TitleScreenManager_Screen__Enum__Class** type_info = (::app::TitleScreenManager_Screen__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478A2A8)); }
    namespace TitleScreenManager { IL2CPP_MODLOADER_DLLEXPORT ::app::TitleScreenManager__Class** type_info = (::app::TitleScreenManager__Class**)(modloader::win::memory::resolve_rva(0x0475E990)); }
    namespace TitleScreenManager_WaitToShowFirstTimeQualitySettings_d_48 { IL2CPP_MODLOADER_DLLEXPORT ::app::TitleScreenManager_WaitToShowFirstTimeQualitySettings_d_48__Class** type_info = (::app::TitleScreenManager_WaitToShowFirstTimeQualitySettings_d_48__Class**)(modloader::win::memory::resolve_rva(0x047681B0)); }
    namespace UberShaderPrewarmer { IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderPrewarmer__Class** type_info = (::app::UberShaderPrewarmer__Class**)(modloader::win::memory::resolve_rva(0x04723C58)); }
    namespace UberShaderPrewarmer_PrewarmedShader { IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderPrewarmer_PrewarmedShader__Class** type_info = (::app::UberShaderPrewarmer_PrewarmedShader__Class**)(modloader::win::memory::resolve_rva(0x0476F1F0)); }
    namespace PlayerAbilityStatePair { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerAbilityStatePair__Class** type_info = (::app::PlayerAbilityStatePair__Class**)(modloader::win::memory::resolve_rva(0x0478CC90)); }
    namespace SceneUberStateCondition { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneUberStateCondition__Class** type_info = (::app::SceneUberStateCondition__Class**)(modloader::win::memory::resolve_rva(0x047928A0)); }
    namespace WeightController { IL2CPP_MODLOADER_DLLEXPORT ::app::WeightController__Class** type_info = (::app::WeightController__Class**)(modloader::win::memory::resolve_rva(0x0473F400)); }
    namespace IBrigthnessContributionAgent { IL2CPP_MODLOADER_DLLEXPORT ::app::IBrigthnessContributionAgent__Class** type_info = (::app::IBrigthnessContributionAgent__Class**)(modloader::win::memory::resolve_rva(0x04707FD8)); }
    namespace GlobalBrightnessController { IL2CPP_MODLOADER_DLLEXPORT ::app::GlobalBrightnessController__Class** type_info = (::app::GlobalBrightnessController__Class**)(modloader::win::memory::resolve_rva(0x047193A8)); }
    namespace TempBrigthnessContributionAgent { IL2CPP_MODLOADER_DLLEXPORT ::app::TempBrigthnessContributionAgent__Class** type_info = (::app::TempBrigthnessContributionAgent__Class**)(modloader::win::memory::resolve_rva(0x04772068)); }
    namespace CageStructureTool_c_DisplayClass62_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::CageStructureTool_c_DisplayClass62_0__Class** type_info = (::app::CageStructureTool_c_DisplayClass62_0__Class**)(modloader::win::memory::resolve_rva(0x04716900)); }
    namespace CageStructureTool_c_DisplayClass64_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::CageStructureTool_c_DisplayClass64_0__Class** type_info = (::app::CageStructureTool_c_DisplayClass64_0__Class**)(modloader::win::memory::resolve_rva(0x04795F40)); }
    namespace CageStructureTool_c_DisplayClass65_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::CageStructureTool_c_DisplayClass65_0__Class** type_info = (::app::CageStructureTool_c_DisplayClass65_0__Class**)(modloader::win::memory::resolve_rva(0x04786848)); }
    namespace CageStructureTool_c_DisplayClass71_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::CageStructureTool_c_DisplayClass71_0__Class** type_info = (::app::CageStructureTool_c_DisplayClass71_0__Class**)(modloader::win::memory::resolve_rva(0x04789450)); }
    namespace CageStructureTool_c_DisplayClass74_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::CageStructureTool_c_DisplayClass74_0__Class** type_info = (::app::CageStructureTool_c_DisplayClass74_0__Class**)(modloader::win::memory::resolve_rva(0x0478BF80)); }
    namespace CageStructureTool_c_DisplayClass75_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::CageStructureTool_c_DisplayClass75_0__Class** type_info = (::app::CageStructureTool_c_DisplayClass75_0__Class**)(modloader::win::memory::resolve_rva(0x04799848)); }
    namespace CageStructureTool_c_DisplayClass93_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::CageStructureTool_c_DisplayClass93_0__Class** type_info = (::app::CageStructureTool_c_DisplayClass93_0__Class**)(modloader::win::memory::resolve_rva(0x0477A9B8)); }
    namespace CageStructureTool_c_DisplayClass108_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::CageStructureTool_c_DisplayClass108_0__Class** type_info = (::app::CageStructureTool_c_DisplayClass108_0__Class**)(modloader::win::memory::resolve_rva(0x047738F8)); }
    namespace CageStructureTool_c { IL2CPP_MODLOADER_DLLEXPORT ::app::CageStructureTool_c__Class** type_info = (::app::CageStructureTool_c__Class**)(modloader::win::memory::resolve_rva(0x0470F608)); }
    namespace SmoothLinesPlugin_NodeMetaData { IL2CPP_MODLOADER_DLLEXPORT ::app::SmoothLinesPlugin_NodeMetaData__Class** type_info = (::app::SmoothLinesPlugin_NodeMetaData__Class**)(modloader::win::memory::resolve_rva(0x0472E290)); }
    namespace DistortModifier_GetKeywordsForShader_d_4 { IL2CPP_MODLOADER_DLLEXPORT ::app::DistortModifier_GetKeywordsForShader_d_4__Class** type_info = (::app::DistortModifier_GetKeywordsForShader_d_4__Class**)(modloader::win::memory::resolve_rva(0x047127A0)); }
    namespace UberShaderCurve { IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderCurve__Class** type_info = (::app::UberShaderCurve__Class**)(modloader::win::memory::resolve_rva(0x04723990)); }
    namespace TurbulenceDistortionModifier { IL2CPP_MODLOADER_DLLEXPORT ::app::TurbulenceDistortionModifier__Class** type_info = (::app::TurbulenceDistortionModifier__Class**)(modloader::win::memory::resolve_rva(0x0474CD78)); }
    namespace TurbulenceRotationModifier { IL2CPP_MODLOADER_DLLEXPORT ::app::TurbulenceRotationModifier__Class** type_info = (::app::TurbulenceRotationModifier__Class**)(modloader::win::memory::resolve_rva(0x04770D70)); }
    namespace UberShaderFloat { IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderFloat__Class** type_info = (::app::UberShaderFloat__Class**)(modloader::win::memory::resolve_rva(0x04771DE0)); }
    namespace TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11 { IL2CPP_MODLOADER_DLLEXPORT ::app::TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11__Class** type_info = (::app::TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11__Class**)(modloader::win::memory::resolve_rva(0x0472DC90)); }
    namespace TurbulenceRotationModifier_GetKeywordsForShader_d_13 { IL2CPP_MODLOADER_DLLEXPORT ::app::TurbulenceRotationModifier_GetKeywordsForShader_d_13__Class** type_info = (::app::TurbulenceRotationModifier_GetKeywordsForShader_d_13__Class**)(modloader::win::memory::resolve_rva(0x0478B880)); }
    namespace TurbulenceScaleModifier { IL2CPP_MODLOADER_DLLEXPORT ::app::TurbulenceScaleModifier__Class** type_info = (::app::TurbulenceScaleModifier__Class**)(modloader::win::memory::resolve_rva(0x04762458)); }
}
