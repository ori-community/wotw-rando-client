#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/SeinWallJump_c.h>
#include <Il2CppModLoader/app/types/SeinWallSlidePuppet.h>
#include <Il2CppModLoader/app/types/DetachOnKill.h>
#include <Il2CppModLoader/app/types/SpawnOnKill.h>
#include <Il2CppModLoader/app/types/CharacterFactory.h>
#include <Il2CppModLoader/app/types/SeinCharacter_c.h>
#include <Il2CppModLoader/app/types/SeinLogicCycle_c.h>
#include <Il2CppModLoader/app/types/SeinSoulFlame_c.h>
#include <Il2CppModLoader/app/types/PlayerInput.h>
#include <Il2CppModLoader/app/types/CompoundAxisInput.h>
#include <Il2CppModLoader/app/types/InputCacheManager.h>
#include <Il2CppModLoader/app/types/InputCacheManager_SetupTempData.h>
#include <Il2CppModLoader/app/types/ICachableInput.h>
#include <Il2CppModLoader/app/types/InputCacheManager_SetupTempData_Node.h>
#include <Il2CppModLoader/app/types/XboxOneController_AxisInput.h>
#include <Il2CppModLoader/app/types/IAxisInput.h>
#include <Il2CppModLoader/app/types/IAxisInput__Array.h>
#include <Il2CppModLoader/app/types/CompoundButtonInput.h>
#include <Il2CppModLoader/app/types/IButtonInput__Array.h>
#include <Il2CppModLoader/app/types/Input_InputButtonProcessor__Array.h>
#include <Il2CppModLoader/app/types/KeyCodeButtonInput.h>
#include <Il2CppModLoader/app/types/XboxControllerInput_Button__Enum.h>
#include <Il2CppModLoader/app/types/PlayerInputRebinding.h>
#include <Il2CppModLoader/app/types/XboxControllerInput_Button__Enum__Array.h>
#include <Il2CppModLoader/app/types/PlayerInputRebinding_PlayerInputKey.h>
#include <Il2CppModLoader/app/types/PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74.h>
#include <Il2CppModLoader/app/types/RestrictAbilityController.h>
#include <Il2CppModLoader/app/types/SeinController_c.h>
#include <Il2CppModLoader/app/types/CleverMenuItem_c.h>
#include <Il2CppModLoader/app/types/CleverMenuItemSelectionManager_c_DisplayClass92_0.h>
#include <Il2CppModLoader/app/types/CleverMenuItemSelectionManager_c.h>
#include <Il2CppModLoader/app/types/HasComponentGameObjectFilter_c_DisplayClass3_0.h>
#include <Il2CppModLoader/app/types/GameObjectReference.h>
#include <Il2CppModLoader/app/types/ListOfCollidedObjects_c.h>
#include <Il2CppModLoader/app/types/MoonPhysics_AscendingDistanceComparer.h>
#include <Il2CppModLoader/app/types/BuilderInfo_c.h>
#include <Il2CppModLoader/app/types/OverridableShaderProperty.h>
#include <Il2CppModLoader/app/types/OverridableTextureProperty.h>
#include <Il2CppModLoader/app/types/OverridableFloatProperty.h>
#include <Il2CppModLoader/app/types/OverridableColorProperty.h>
#include <Il2CppModLoader/app/types/MaterialProperties_c.h>
#include <Il2CppModLoader/app/types/DebugOutput.h>
#include <Il2CppModLoader/app/types/FrameCounter.h>
#include <Il2CppModLoader/app/types/Frapser.h>
#include <Il2CppModLoader/app/types/Frapser_c.h>
#include <Il2CppModLoader/app/types/LeakDetector.h>
#include <Il2CppModLoader/app/types/LoadTimeMeasurer.h>
#include <Il2CppModLoader/app/types/ActionDebugMenuItem.h>
#include <Il2CppModLoader/app/types/BoolDebugMenuItem.h>
#include <Il2CppModLoader/app/types/HierarchyDebugMenu.h>
#include <Il2CppModLoader/app/types/InstantiateUtility_InstantiationInfo.h>
#include <Il2CppModLoader/app/types/HierarchyDebugMenu_CompareType__Enum.h>
#include <Il2CppModLoader/app/types/HierarchyDebugMenu_GameObjectItem.h>
#include <Il2CppModLoader/app/types/HierarchySuspensionTest_PerfTestResult.h>
#include <Il2CppModLoader/app/types/DebugMenu.h>
#include <Il2CppModLoader/app/types/IDebugMenuPage.h>
#include <Il2CppModLoader/app/types/IDebugMenuPageHandler.h>
#include <Il2CppModLoader/app/types/DebugMenu_ExternalItem.h>
#include <Il2CppModLoader/app/types/IDebugMenuExternalItem.h>
#include <Il2CppModLoader/app/types/IUberStateVisualizationView.h>
#include <Il2CppModLoader/app/types/VolatileDebugMenuLog.h>
#include <Il2CppModLoader/app/types/HierarchySuspensionTest.h>
#include <Il2CppModLoader/app/types/DebugMenuPage.h>
#include <Il2CppModLoader/app/types/DebugMenuTogglerItem.h>
#include <Il2CppModLoader/app/types/IDebugMenuToggleable.h>
#include <Il2CppModLoader/app/types/DebugPlayerTeleporter_LocomotionRequestMode__Enum.h>
#include <Il2CppModLoader/app/types/DebugPlayerTeleporter.h>
#include <Il2CppModLoader/app/types/HierarchyDebugMenu_GameObjectItem_c.h>
#include <Il2CppModLoader/app/types/HierarchyDebugMenu_c.h>
#include <Il2CppModLoader/app/types/HierarchyDebugMenu_WaitForStepEnd_d_64.h>
#include <Il2CppModLoader/app/types/IntDebugMenuItem.h>
#include <Il2CppModLoader/app/types/FloatDebugMenuItem.h>
#include <Il2CppModLoader/app/types/DoubleDebugMenuItem.h>
#include <Il2CppModLoader/app/types/PostProcessingDebugFloatDebugMenuItem.h>
#include <Il2CppModLoader/app/types/PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0.h>
#include <Il2CppModLoader/app/types/SceneTeleportDebugMenuItem.h>
#include <Il2CppModLoader/app/types/StartRaceDebugMenuItem.h>
#include <Il2CppModLoader/app/types/TextDebugMenuItem.h>
#include <Il2CppModLoader/app/types/MainThreadLoadingDebugger.h>
#include <Il2CppModLoader/app/types/MainThreadLoadingDebugger_NotifyEntry.h>
#include <Il2CppModLoader/app/types/MainThreadLoadingDebugger_c.h>
#include <Il2CppModLoader/app/types/BinaryProfilerLogMaker.h>
#include <Il2CppModLoader/app/types/CameraOffsetMenuItem.h>
#include <Il2CppModLoader/app/types/CleanupDebugger.h>
#include <Il2CppModLoader/app/types/CleanupDebugger_c.h>
#include <Il2CppModLoader/app/types/DebugMenuWorldEventActionMenuItem.h>
#include <Il2CppModLoader/app/types/DemoTimeoutTimeMenuItem.h>
#include <Il2CppModLoader/app/types/EnergyDebugMenuItem.h>
#include <Il2CppModLoader/app/types/MaxEnergyDebugMenuItem.h>
#include <Il2CppModLoader/app/types/ExtraZoomDebugMenuItem.h>
#include <Il2CppModLoader/app/types/GarbageRunner.h>
#include <Il2CppModLoader/app/types/GlobalAlphaCutoffMenuItem.h>
#include <Il2CppModLoader/app/types/GlobalDebugQuadScaleMenuItem.h>
#include <Il2CppModLoader/app/types/HealthDebugMenuItem.h>
#include <Il2CppModLoader/app/types/BaseMaxHealthDebugMenuItem.h>
#include <Il2CppModLoader/app/types/InstantiationHistory.h>
#include <Il2CppModLoader/app/types/InstantiationHistory_PrefabData.h>
#include <Il2CppModLoader/app/types/InstantiationHistory_c.h>
#include <Il2CppModLoader/app/types/LeafsDebugMenuItem.h>
#include <Il2CppModLoader/app/types/MapStonesDebugMenuItem.h>

namespace app::classes::types {
    namespace SeinWallJump_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SeinWallJump_c__Class** type_info = (::app::SeinWallJump_c__Class**)(modloader::win::memory::resolve_rva(0x04759A70)); }
    namespace SeinWallSlidePuppet { IL2CPP_MODLOADER_DLLEXPORT ::app::SeinWallSlidePuppet__Class** type_info = (::app::SeinWallSlidePuppet__Class**)(modloader::win::memory::resolve_rva(0x0473EFE8)); }
    namespace DetachOnKill { IL2CPP_MODLOADER_DLLEXPORT ::app::DetachOnKill__Class** type_info = (::app::DetachOnKill__Class**)(modloader::win::memory::resolve_rva(0x04757E98)); }
    namespace SpawnOnKill { IL2CPP_MODLOADER_DLLEXPORT ::app::SpawnOnKill__Class** type_info = (::app::SpawnOnKill__Class**)(modloader::win::memory::resolve_rva(0x0476BC48)); }
    namespace CharacterFactory { IL2CPP_MODLOADER_DLLEXPORT ::app::CharacterFactory__Class** type_info = (::app::CharacterFactory__Class**)(modloader::win::memory::resolve_rva(0x047180F0)); }
    namespace SeinCharacter_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SeinCharacter_c__Class** type_info = (::app::SeinCharacter_c__Class**)(modloader::win::memory::resolve_rva(0x047698E8)); }
    namespace SeinLogicCycle_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SeinLogicCycle_c__Class** type_info = (::app::SeinLogicCycle_c__Class**)(modloader::win::memory::resolve_rva(0x04727C88)); }
    namespace SeinSoulFlame_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SeinSoulFlame_c__Class** type_info = (::app::SeinSoulFlame_c__Class**)(modloader::win::memory::resolve_rva(0x04736118)); }
    namespace PlayerInput { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerInput__Class** type_info = (::app::PlayerInput__Class**)(modloader::win::memory::resolve_rva(0x04750E20)); }
    namespace CompoundAxisInput { IL2CPP_MODLOADER_DLLEXPORT ::app::CompoundAxisInput__Class** type_info = (::app::CompoundAxisInput__Class**)(modloader::win::memory::resolve_rva(0x047580F0)); }
    namespace InputCacheManager { IL2CPP_MODLOADER_DLLEXPORT ::app::InputCacheManager__Class** type_info = (::app::InputCacheManager__Class**)(modloader::win::memory::resolve_rva(0x04703A50)); }
    namespace InputCacheManager_SetupTempData { IL2CPP_MODLOADER_DLLEXPORT ::app::InputCacheManager_SetupTempData__Class** type_info = (::app::InputCacheManager_SetupTempData__Class**)(modloader::win::memory::resolve_rva(0x047237C8)); }
    namespace ICachableInput { IL2CPP_MODLOADER_DLLEXPORT ::app::ICachableInput__Class** type_info = (::app::ICachableInput__Class**)(modloader::win::memory::resolve_rva(0x047042A0)); }
    namespace InputCacheManager_SetupTempData_Node { IL2CPP_MODLOADER_DLLEXPORT ::app::InputCacheManager_SetupTempData_Node__Class** type_info = (::app::InputCacheManager_SetupTempData_Node__Class**)(modloader::win::memory::resolve_rva(0x04784B30)); }
    namespace XboxOneController_AxisInput { IL2CPP_MODLOADER_DLLEXPORT ::app::XboxOneController_AxisInput__Class** type_info = (::app::XboxOneController_AxisInput__Class**)(modloader::win::memory::resolve_rva(0x0471B7C8)); }
    namespace IAxisInput { IL2CPP_MODLOADER_DLLEXPORT ::app::IAxisInput__Class** type_info = (::app::IAxisInput__Class**)(modloader::win::memory::resolve_rva(0x04732708)); }
    namespace IAxisInput__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::IAxisInput__Array__Class** type_info = (::app::IAxisInput__Array__Class**)(modloader::win::memory::resolve_rva(0x047160B8)); }
    namespace CompoundButtonInput { IL2CPP_MODLOADER_DLLEXPORT ::app::CompoundButtonInput__Class** type_info = (::app::CompoundButtonInput__Class**)(modloader::win::memory::resolve_rva(0x0470CFA8)); }
    namespace IButtonInput__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::IButtonInput__Array__Class** type_info = (::app::IButtonInput__Array__Class**)(modloader::win::memory::resolve_rva(0x0475C138)); }
    namespace Input_InputButtonProcessor__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Input_InputButtonProcessor__Array__Class** type_info = (::app::Input_InputButtonProcessor__Array__Class**)(modloader::win::memory::resolve_rva(0x04747A58)); }
    namespace KeyCodeButtonInput { IL2CPP_MODLOADER_DLLEXPORT ::app::KeyCodeButtonInput__Class** type_info = (::app::KeyCodeButtonInput__Class**)(modloader::win::memory::resolve_rva(0x04780B68)); }
    namespace XboxControllerInput_Button__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::XboxControllerInput_Button__Enum__Class** type_info = (::app::XboxControllerInput_Button__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475F6D0)); }
    namespace PlayerInputRebinding { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerInputRebinding__Class** type_info = (::app::PlayerInputRebinding__Class**)(modloader::win::memory::resolve_rva(0x04710308)); }
    namespace XboxControllerInput_Button__Enum__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::XboxControllerInput_Button__Enum__Array__Class** type_info = (::app::XboxControllerInput_Button__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04726DD0)); }
    namespace PlayerInputRebinding_PlayerInputKey { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerInputRebinding_PlayerInputKey__Class** type_info = (::app::PlayerInputRebinding_PlayerInputKey__Class**)(modloader::win::memory::resolve_rva(0x04718818)); }
    namespace PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74 { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74__Class** type_info = (::app::PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74__Class**)(modloader::win::memory::resolve_rva(0x047780A8)); }
    namespace RestrictAbilityController { IL2CPP_MODLOADER_DLLEXPORT ::app::RestrictAbilityController__Class** type_info = (::app::RestrictAbilityController__Class**)(modloader::win::memory::resolve_rva(0x04795708)); }
    namespace SeinController_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SeinController_c__Class** type_info = (::app::SeinController_c__Class**)(modloader::win::memory::resolve_rva(0x04795C98)); }
    namespace CleverMenuItem_c { IL2CPP_MODLOADER_DLLEXPORT ::app::CleverMenuItem_c__Class** type_info = (::app::CleverMenuItem_c__Class**)(modloader::win::memory::resolve_rva(0x0471A690)); }
    namespace CleverMenuItemSelectionManager_c_DisplayClass92_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::CleverMenuItemSelectionManager_c_DisplayClass92_0__Class** type_info = (::app::CleverMenuItemSelectionManager_c_DisplayClass92_0__Class**)(modloader::win::memory::resolve_rva(0x0470B168)); }
    namespace CleverMenuItemSelectionManager_c { IL2CPP_MODLOADER_DLLEXPORT ::app::CleverMenuItemSelectionManager_c__Class** type_info = (::app::CleverMenuItemSelectionManager_c__Class**)(modloader::win::memory::resolve_rva(0x0472F640)); }
    namespace HasComponentGameObjectFilter_c_DisplayClass3_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::HasComponentGameObjectFilter_c_DisplayClass3_0__Class** type_info = (::app::HasComponentGameObjectFilter_c_DisplayClass3_0__Class**)(modloader::win::memory::resolve_rva(0x0471F2C8)); }
    namespace GameObjectReference { IL2CPP_MODLOADER_DLLEXPORT ::app::GameObjectReference__Class** type_info = (::app::GameObjectReference__Class**)(modloader::win::memory::resolve_rva(0x047526C8)); }
    namespace ListOfCollidedObjects_c { IL2CPP_MODLOADER_DLLEXPORT ::app::ListOfCollidedObjects_c__Class** type_info = (::app::ListOfCollidedObjects_c__Class**)(modloader::win::memory::resolve_rva(0x04725108)); }
    namespace MoonPhysics_AscendingDistanceComparer { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonPhysics_AscendingDistanceComparer__Class** type_info = (::app::MoonPhysics_AscendingDistanceComparer__Class**)(modloader::win::memory::resolve_rva(0x04795768)); }
    namespace BuilderInfo_c { IL2CPP_MODLOADER_DLLEXPORT ::app::BuilderInfo_c__Class** type_info = (::app::BuilderInfo_c__Class**)(modloader::win::memory::resolve_rva(0x0475B990)); }
    namespace OverridableShaderProperty { IL2CPP_MODLOADER_DLLEXPORT ::app::OverridableShaderProperty__Class** type_info = (::app::OverridableShaderProperty__Class**)(modloader::win::memory::resolve_rva(0x04787080)); }
    namespace OverridableTextureProperty { IL2CPP_MODLOADER_DLLEXPORT ::app::OverridableTextureProperty__Class** type_info = (::app::OverridableTextureProperty__Class**)(modloader::win::memory::resolve_rva(0x0472B750)); }
    namespace OverridableFloatProperty { IL2CPP_MODLOADER_DLLEXPORT ::app::OverridableFloatProperty__Class** type_info = (::app::OverridableFloatProperty__Class**)(modloader::win::memory::resolve_rva(0x04758E58)); }
    namespace OverridableColorProperty { IL2CPP_MODLOADER_DLLEXPORT ::app::OverridableColorProperty__Class** type_info = (::app::OverridableColorProperty__Class**)(modloader::win::memory::resolve_rva(0x0478DB40)); }
    namespace MaterialProperties_c { IL2CPP_MODLOADER_DLLEXPORT ::app::MaterialProperties_c__Class** type_info = (::app::MaterialProperties_c__Class**)(modloader::win::memory::resolve_rva(0x0476FDA0)); }
    namespace DebugOutput { IL2CPP_MODLOADER_DLLEXPORT ::app::DebugOutput__Class** type_info = (::app::DebugOutput__Class**)(modloader::win::memory::resolve_rva(0x0474FF20)); }
    namespace FrameCounter { IL2CPP_MODLOADER_DLLEXPORT ::app::FrameCounter__Class** type_info = (::app::FrameCounter__Class**)(modloader::win::memory::resolve_rva(0x04785D20)); }
    namespace Frapser { IL2CPP_MODLOADER_DLLEXPORT ::app::Frapser__Class** type_info = (::app::Frapser__Class**)(modloader::win::memory::resolve_rva(0x04759968)); }
    namespace Frapser_c { IL2CPP_MODLOADER_DLLEXPORT ::app::Frapser_c__Class** type_info = (::app::Frapser_c__Class**)(modloader::win::memory::resolve_rva(0x04764FA8)); }
    namespace LeakDetector { IL2CPP_MODLOADER_DLLEXPORT ::app::LeakDetector__Class** type_info = (::app::LeakDetector__Class**)(modloader::win::memory::resolve_rva(0x04743250)); }
    namespace LoadTimeMeasurer { IL2CPP_MODLOADER_DLLEXPORT ::app::LoadTimeMeasurer__Class** type_info = (::app::LoadTimeMeasurer__Class**)(modloader::win::memory::resolve_rva(0x0474CE70)); }
    namespace ActionDebugMenuItem { IL2CPP_MODLOADER_DLLEXPORT ::app::ActionDebugMenuItem__Class** type_info = (::app::ActionDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04708330)); }
    namespace BoolDebugMenuItem { IL2CPP_MODLOADER_DLLEXPORT ::app::BoolDebugMenuItem__Class** type_info = (::app::BoolDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04795B10)); }
    namespace HierarchyDebugMenu { IL2CPP_MODLOADER_DLLEXPORT ::app::HierarchyDebugMenu__Class** type_info = (::app::HierarchyDebugMenu__Class**)(modloader::win::memory::resolve_rva(0x047762C8)); }
    namespace InstantiateUtility_InstantiationInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::InstantiateUtility_InstantiationInfo__Class** type_info = (::app::InstantiateUtility_InstantiationInfo__Class**)(modloader::win::memory::resolve_rva(0x0470DD80)); }
    namespace HierarchyDebugMenu_CompareType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::HierarchyDebugMenu_CompareType__Enum__Class** type_info = (::app::HierarchyDebugMenu_CompareType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04724D68)); }
    namespace HierarchyDebugMenu_GameObjectItem { IL2CPP_MODLOADER_DLLEXPORT ::app::HierarchyDebugMenu_GameObjectItem__Class** type_info = (::app::HierarchyDebugMenu_GameObjectItem__Class**)(modloader::win::memory::resolve_rva(0x047897A8)); }
    namespace HierarchySuspensionTest_PerfTestResult { IL2CPP_MODLOADER_DLLEXPORT ::app::HierarchySuspensionTest_PerfTestResult__Class** type_info = (::app::HierarchySuspensionTest_PerfTestResult__Class**)(modloader::win::memory::resolve_rva(0x04752428)); }
    namespace DebugMenu { IL2CPP_MODLOADER_DLLEXPORT ::app::DebugMenu__Class** type_info = (::app::DebugMenu__Class**)(modloader::win::memory::resolve_rva(0x04712308)); }
    namespace IDebugMenuPage { IL2CPP_MODLOADER_DLLEXPORT ::app::IDebugMenuPage__Class** type_info = (::app::IDebugMenuPage__Class**)(modloader::win::memory::resolve_rva(0x0474ADC8)); }
    namespace IDebugMenuPageHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::IDebugMenuPageHandler__Class** type_info = (::app::IDebugMenuPageHandler__Class**)(modloader::win::memory::resolve_rva(0x04790A88)); }
    namespace DebugMenu_ExternalItem { IL2CPP_MODLOADER_DLLEXPORT ::app::DebugMenu_ExternalItem__Class** type_info = (::app::DebugMenu_ExternalItem__Class**)(modloader::win::memory::resolve_rva(0x04744F78)); }
    namespace IDebugMenuExternalItem { IL2CPP_MODLOADER_DLLEXPORT ::app::IDebugMenuExternalItem__Class** type_info = (::app::IDebugMenuExternalItem__Class**)(modloader::win::memory::resolve_rva(0x0473EC20)); }
    namespace IUberStateVisualizationView { IL2CPP_MODLOADER_DLLEXPORT ::app::IUberStateVisualizationView__Class** type_info = (::app::IUberStateVisualizationView__Class**)(modloader::win::memory::resolve_rva(0x04761530)); }
    namespace VolatileDebugMenuLog { IL2CPP_MODLOADER_DLLEXPORT ::app::VolatileDebugMenuLog__Class** type_info = (::app::VolatileDebugMenuLog__Class**)(modloader::win::memory::resolve_rva(0x04724190)); }
    namespace HierarchySuspensionTest { IL2CPP_MODLOADER_DLLEXPORT ::app::HierarchySuspensionTest__Class** type_info = (::app::HierarchySuspensionTest__Class**)(modloader::win::memory::resolve_rva(0x0478C3B0)); }
    namespace DebugMenuPage { IL2CPP_MODLOADER_DLLEXPORT ::app::DebugMenuPage__Class** type_info = (::app::DebugMenuPage__Class**)(modloader::win::memory::resolve_rva(0x0471DDF0)); }
    namespace DebugMenuTogglerItem { IL2CPP_MODLOADER_DLLEXPORT ::app::DebugMenuTogglerItem__Class** type_info = (::app::DebugMenuTogglerItem__Class**)(modloader::win::memory::resolve_rva(0x047547D0)); }
    namespace IDebugMenuToggleable { IL2CPP_MODLOADER_DLLEXPORT ::app::IDebugMenuToggleable__Class** type_info = (::app::IDebugMenuToggleable__Class**)(modloader::win::memory::resolve_rva(0x04740288)); }
    namespace DebugPlayerTeleporter_LocomotionRequestMode__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::DebugPlayerTeleporter_LocomotionRequestMode__Enum__Class** type_info = (::app::DebugPlayerTeleporter_LocomotionRequestMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04786840)); }
    namespace DebugPlayerTeleporter { IL2CPP_MODLOADER_DLLEXPORT ::app::DebugPlayerTeleporter__Class** type_info = (::app::DebugPlayerTeleporter__Class**)(modloader::win::memory::resolve_rva(0x0474A4A0)); }
    namespace HierarchyDebugMenu_GameObjectItem_c { IL2CPP_MODLOADER_DLLEXPORT ::app::HierarchyDebugMenu_GameObjectItem_c__Class** type_info = (::app::HierarchyDebugMenu_GameObjectItem_c__Class**)(modloader::win::memory::resolve_rva(0x0472F058)); }
    namespace HierarchyDebugMenu_c { IL2CPP_MODLOADER_DLLEXPORT ::app::HierarchyDebugMenu_c__Class** type_info = (::app::HierarchyDebugMenu_c__Class**)(modloader::win::memory::resolve_rva(0x04762588)); }
    namespace HierarchyDebugMenu_WaitForStepEnd_d_64 { IL2CPP_MODLOADER_DLLEXPORT ::app::HierarchyDebugMenu_WaitForStepEnd_d_64__Class** type_info = (::app::HierarchyDebugMenu_WaitForStepEnd_d_64__Class**)(modloader::win::memory::resolve_rva(0x047245C0)); }
    namespace IntDebugMenuItem { IL2CPP_MODLOADER_DLLEXPORT ::app::IntDebugMenuItem__Class** type_info = (::app::IntDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04790CA0)); }
    namespace FloatDebugMenuItem { IL2CPP_MODLOADER_DLLEXPORT ::app::FloatDebugMenuItem__Class** type_info = (::app::FloatDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x047564D0)); }
    namespace DoubleDebugMenuItem { IL2CPP_MODLOADER_DLLEXPORT ::app::DoubleDebugMenuItem__Class** type_info = (::app::DoubleDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04764590)); }
    namespace PostProcessingDebugFloatDebugMenuItem { IL2CPP_MODLOADER_DLLEXPORT ::app::PostProcessingDebugFloatDebugMenuItem__Class** type_info = (::app::PostProcessingDebugFloatDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04719490)); }
    namespace PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0__Class** type_info = (::app::PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0__Class**)(modloader::win::memory::resolve_rva(0x04797D00)); }
    namespace SceneTeleportDebugMenuItem { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneTeleportDebugMenuItem__Class** type_info = (::app::SceneTeleportDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x047561A0)); }
    namespace StartRaceDebugMenuItem { IL2CPP_MODLOADER_DLLEXPORT ::app::StartRaceDebugMenuItem__Class** type_info = (::app::StartRaceDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04784138)); }
    namespace TextDebugMenuItem { IL2CPP_MODLOADER_DLLEXPORT ::app::TextDebugMenuItem__Class** type_info = (::app::TextDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04788750)); }
    namespace MainThreadLoadingDebugger { IL2CPP_MODLOADER_DLLEXPORT ::app::MainThreadLoadingDebugger__Class** type_info = (::app::MainThreadLoadingDebugger__Class**)(modloader::win::memory::resolve_rva(0x04712BC8)); }
    namespace MainThreadLoadingDebugger_NotifyEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::MainThreadLoadingDebugger_NotifyEntry__Class** type_info = (::app::MainThreadLoadingDebugger_NotifyEntry__Class**)(modloader::win::memory::resolve_rva(0x04799088)); }
    namespace MainThreadLoadingDebugger_c { IL2CPP_MODLOADER_DLLEXPORT ::app::MainThreadLoadingDebugger_c__Class** type_info = (::app::MainThreadLoadingDebugger_c__Class**)(modloader::win::memory::resolve_rva(0x0470A0A8)); }
    namespace BinaryProfilerLogMaker { IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryProfilerLogMaker__Class** type_info = (::app::BinaryProfilerLogMaker__Class**)(modloader::win::memory::resolve_rva(0x0477D548)); }
    namespace CameraOffsetMenuItem { IL2CPP_MODLOADER_DLLEXPORT ::app::CameraOffsetMenuItem__Class** type_info = (::app::CameraOffsetMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04701640)); }
    namespace CleanupDebugger { IL2CPP_MODLOADER_DLLEXPORT ::app::CleanupDebugger__Class** type_info = (::app::CleanupDebugger__Class**)(modloader::win::memory::resolve_rva(0x0471BDA8)); }
    namespace CleanupDebugger_c { IL2CPP_MODLOADER_DLLEXPORT ::app::CleanupDebugger_c__Class** type_info = (::app::CleanupDebugger_c__Class**)(modloader::win::memory::resolve_rva(0x04733F80)); }
    namespace DebugMenuWorldEventActionMenuItem { IL2CPP_MODLOADER_DLLEXPORT ::app::DebugMenuWorldEventActionMenuItem__Class** type_info = (::app::DebugMenuWorldEventActionMenuItem__Class**)(modloader::win::memory::resolve_rva(0x0470C620)); }
    namespace DemoTimeoutTimeMenuItem { IL2CPP_MODLOADER_DLLEXPORT ::app::DemoTimeoutTimeMenuItem__Class** type_info = (::app::DemoTimeoutTimeMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04772FE8)); }
    namespace EnergyDebugMenuItem { IL2CPP_MODLOADER_DLLEXPORT ::app::EnergyDebugMenuItem__Class** type_info = (::app::EnergyDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04747F20)); }
    namespace MaxEnergyDebugMenuItem { IL2CPP_MODLOADER_DLLEXPORT ::app::MaxEnergyDebugMenuItem__Class** type_info = (::app::MaxEnergyDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x0474F1E8)); }
    namespace ExtraZoomDebugMenuItem { IL2CPP_MODLOADER_DLLEXPORT ::app::ExtraZoomDebugMenuItem__Class** type_info = (::app::ExtraZoomDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04788AA8)); }
    namespace GarbageRunner { IL2CPP_MODLOADER_DLLEXPORT ::app::GarbageRunner__Class** type_info = (::app::GarbageRunner__Class**)(modloader::win::memory::resolve_rva(0x047124F0)); }
    namespace GlobalAlphaCutoffMenuItem { IL2CPP_MODLOADER_DLLEXPORT ::app::GlobalAlphaCutoffMenuItem__Class** type_info = (::app::GlobalAlphaCutoffMenuItem__Class**)(modloader::win::memory::resolve_rva(0x0471D330)); }
    namespace GlobalDebugQuadScaleMenuItem { IL2CPP_MODLOADER_DLLEXPORT ::app::GlobalDebugQuadScaleMenuItem__Class** type_info = (::app::GlobalDebugQuadScaleMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04734480)); }
    namespace HealthDebugMenuItem { IL2CPP_MODLOADER_DLLEXPORT ::app::HealthDebugMenuItem__Class** type_info = (::app::HealthDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x0473C380)); }
    namespace BaseMaxHealthDebugMenuItem { IL2CPP_MODLOADER_DLLEXPORT ::app::BaseMaxHealthDebugMenuItem__Class** type_info = (::app::BaseMaxHealthDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x0477CB00)); }
    namespace InstantiationHistory { IL2CPP_MODLOADER_DLLEXPORT ::app::InstantiationHistory__Class** type_info = (::app::InstantiationHistory__Class**)(modloader::win::memory::resolve_rva(0x04796918)); }
    namespace InstantiationHistory_PrefabData { IL2CPP_MODLOADER_DLLEXPORT ::app::InstantiationHistory_PrefabData__Class** type_info = (::app::InstantiationHistory_PrefabData__Class**)(modloader::win::memory::resolve_rva(0x04710C50)); }
    namespace InstantiationHistory_c { IL2CPP_MODLOADER_DLLEXPORT ::app::InstantiationHistory_c__Class** type_info = (::app::InstantiationHistory_c__Class**)(modloader::win::memory::resolve_rva(0x047894E8)); }
    namespace LeafsDebugMenuItem { IL2CPP_MODLOADER_DLLEXPORT ::app::LeafsDebugMenuItem__Class** type_info = (::app::LeafsDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04735170)); }
    namespace MapStonesDebugMenuItem { IL2CPP_MODLOADER_DLLEXPORT ::app::MapStonesDebugMenuItem__Class** type_info = (::app::MapStonesDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04774540)); }
}
