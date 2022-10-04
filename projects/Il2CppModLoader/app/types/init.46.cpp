#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/MeshTrail.h>
#include <Il2CppModLoader/app/types/MeshTrail_MeshTrailTurbulence__Array.h>
#include <Il2CppModLoader/app/types/MeshTrail_MeshTrailEmitter.h>
#include <Il2CppModLoader/app/types/MoonEffectPools.h>
#include <Il2CppModLoader/app/types/MoonEffectRevertHandlePool.h>
#include <Il2CppModLoader/app/types/MoonEffectRevertHandle.h>
#include <Il2CppModLoader/app/types/IRevertMoonEffectLogic.h>
#include <Il2CppModLoader/app/types/MoonEffectGenericRevertibleData_MoonEffectRevertibleData.h>
#include <Il2CppModLoader/app/types/MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData.h>
#include <Il2CppModLoader/app/types/MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData.h>
#include <Il2CppModLoader/app/types/MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool.h>
#include <Il2CppModLoader/app/types/MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool.h>
#include <Il2CppModLoader/app/types/MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool.h>
#include <Il2CppModLoader/app/types/FixedUpdateSyncTracker.h>
#include <Il2CppModLoader/app/types/PerfTestTimer.h>
#include <Il2CppModLoader/app/types/PerfTestTimer_TestData.h>
#include <Il2CppModLoader/app/types/TestRunner.h>
#include <Il2CppModLoader/app/types/TestRunner_TestCoroutine_d_13.h>
#include <Il2CppModLoader/app/types/TestRunner_RunScenesThroughTests_d_14.h>
#include <Il2CppModLoader/app/types/TestRunner_c.h>
#include <Il2CppModLoader/app/types/Tests_CompoentRunnerID__Enum.h>
#include <Il2CppModLoader/app/types/Tests_c.h>
#include <Il2CppModLoader/app/types/Tests_RunTests_d_5.h>
#include <Il2CppModLoader/app/types/Tests_DoLevelLoadUnloadTestTests_d_11.h>
#include <Il2CppModLoader/app/types/Tests_DoBasicFrameTimeTests_d_12.h>
#include <Il2CppModLoader/app/types/Tests_DoComponentUpdateTests_d_13.h>
#include <Il2CppModLoader/app/types/Tests_DoEnableDisableTest_d_14.h>
#include <Il2CppModLoader/app/types/Tests_DoMovementTests_d_15.h>
#include <Il2CppModLoader/app/types/Tests_SetupPosition_d_16.h>
#include <Il2CppModLoader/app/types/Tests_DoReparentTest_d_17.h>
#include <Il2CppModLoader/app/types/Tests_DoReparentAndTransformTest_d_18.h>
#include <Il2CppModLoader/app/types/Tests_WaitForNSeconds_d_19.h>
#include <Il2CppModLoader/app/types/QuadTree.h>
#include <Il2CppModLoader/app/types/QuadTree_Node.h>
#include <Il2CppModLoader/app/types/IRectProvider.h>
#include <Il2CppModLoader/app/types/DefaultMoonDriverExecutionOrderMap.h>
#include <Il2CppModLoader/app/types/ImGuiManager.h>
#include <Il2CppModLoader/app/types/ListView.h>
#include <Il2CppModLoader/app/types/ListViewItem.h>
#include <Il2CppModLoader/app/types/ControllerInput.h>
#include <Il2CppModLoader/app/types/ListView_c.h>
#include <Il2CppModLoader/app/types/UberStateData.h>
#include <Il2CppModLoader/app/types/SpaceMongerWidget.h>
#include <Il2CppModLoader/app/types/IUberStateUIWrapper.h>
#include <Il2CppModLoader/app/types/UberStateGroupData.h>
#include <Il2CppModLoader/app/types/SpaceMongerWidget_UberStateGroupDataSizeComparer.h>
#include <Il2CppModLoader/app/types/SpaceMongerWidget_c.h>
#include <Il2CppModLoader/app/types/UberStateDataView.h>
#include <Il2CppModLoader/app/types/UberStateGroupDataItemView.h>
#include <Il2CppModLoader/app/types/UberStateValueGroupSortById.h>
#include <Il2CppModLoader/app/types/UberStateVisualizationView.h>
#include <Il2CppModLoader/app/types/UberStateVisualizationView_c.h>
#include <Il2CppModLoader/app/types/NonSerializedBooleanUberStateWrapper.h>
#include <Il2CppModLoader/app/types/NonSerializedByteUberStateWrapper.h>
#include <Il2CppModLoader/app/types/NonSerializedFloatUberStateWrapper.h>
#include <Il2CppModLoader/app/types/NonSerializedIntUberStateWrapper.h>
#include <Il2CppModLoader/app/types/ObjectUberStateWrapper.h>
#include <Il2CppModLoader/app/types/IUberStateVisualizable.h>
#include <Il2CppModLoader/app/types/SerializedBoolUberStateWrapper.h>
#include <Il2CppModLoader/app/types/SerializedByteUberStateWrapper.h>
#include <Il2CppModLoader/app/types/SerializedFloatUberStateWrapper.h>
#include <Il2CppModLoader/app/types/SerializedIntUberStateWrapper.h>
#include <Il2CppModLoader/app/types/MoonEffectComponentCache.h>
#include <Il2CppModLoader/app/types/IInstantiationHandler.h>
#include <Il2CppModLoader/app/types/IMoonEffectComposition.h>
#include <Il2CppModLoader/app/types/MoonEffectsResolver.h>
#include <Il2CppModLoader/app/types/IInteractionNode.h>
#include <Il2CppModLoader/app/types/IMessageProvider.h>
#include <Il2CppModLoader/app/types/InteractionBinding.h>
#include <Il2CppModLoader/app/types/ICondition.h>
#include <Il2CppModLoader/app/types/IInteractionTransition.h>
#include <Il2CppModLoader/app/types/IInteractionNodeDecorator.h>
#include <Il2CppModLoader/app/types/InteractionSettings.h>
#include <Il2CppModLoader/app/types/IInputTransition.h>
#include <Il2CppModLoader/app/types/StateMachine_1.h>
#include <Il2CppModLoader/app/types/IState_1.h>
#include <Il2CppModLoader/app/types/TransitionManager.h>
#include <Il2CppModLoader/app/types/Transition.h>
#include <Il2CppModLoader/app/types/InteractionGraph_InteractionGraphContext.h>
#include <Il2CppModLoader/app/types/InteractionGraph_NodeFinishedCondition.h>
#include <Il2CppModLoader/app/types/InteractionNodeContext.h>
#include <Il2CppModLoader/app/types/NPCMessageBoxWrapper.h>
#include <Il2CppModLoader/app/types/Language__Enum.h>
#include <Il2CppModLoader/app/types/MessageDescriptor.h>
#include <Il2CppModLoader/app/types/BitmapFontChar.h>
#include <Il2CppModLoader/app/types/BaseAnimator.h>
#include <Il2CppModLoader/app/types/IAnimatorDriver.h>
#include <Il2CppModLoader/app/types/AnimatorDriver.h>
#include <Il2CppModLoader/app/types/CameraShake.h>
#include <Il2CppModLoader/app/types/UberDelegate.h>
#include <Il2CppModLoader/app/types/LineDescent.h>
#include <Il2CppModLoader/app/types/TextBoxLine.h>
#include <Il2CppModLoader/app/types/CharMetaData__Array.h>
#include <Il2CppModLoader/app/types/TextRenderer__Array.h>
#include <Il2CppModLoader/app/types/MessageProvider.h>
#include <Il2CppModLoader/app/types/SoundProvider.h>
#include <Il2CppModLoader/app/types/SoundProvider_CallbackFunction.h>
#include <Il2CppModLoader/app/types/SoundDescriptor.h>
#include <Il2CppModLoader/app/types/Event_1.h>
#include <Il2CppModLoader/app/types/WwiseObjectType__Enum.h>

namespace app::classes::types {
    namespace MeshTrail { IL2CPP_MODLOADER_DLLEXPORT ::app::MeshTrail__Class** type_info = (::app::MeshTrail__Class**)(modloader::win::memory::resolve_rva(0x047010D0)); }
    namespace MeshTrail_MeshTrailTurbulence__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::MeshTrail_MeshTrailTurbulence__Array__Class** type_info = (::app::MeshTrail_MeshTrailTurbulence__Array__Class**)(modloader::win::memory::resolve_rva(0x0477A580)); }
    namespace MeshTrail_MeshTrailEmitter { IL2CPP_MODLOADER_DLLEXPORT ::app::MeshTrail_MeshTrailEmitter__Class** type_info = (::app::MeshTrail_MeshTrailEmitter__Class**)(modloader::win::memory::resolve_rva(0x04717780)); }
    namespace MoonEffectPools { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonEffectPools__Class** type_info = (::app::MoonEffectPools__Class**)(modloader::win::memory::resolve_rva(0x0478BAB0)); }
    namespace MoonEffectRevertHandlePool { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonEffectRevertHandlePool__Class** type_info = (::app::MoonEffectRevertHandlePool__Class**)(modloader::win::memory::resolve_rva(0x04781260)); }
    namespace MoonEffectRevertHandle { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonEffectRevertHandle__Class** type_info = (::app::MoonEffectRevertHandle__Class**)(modloader::win::memory::resolve_rva(0x04786BB0)); }
    namespace IRevertMoonEffectLogic { IL2CPP_MODLOADER_DLLEXPORT ::app::IRevertMoonEffectLogic__Class** type_info = (::app::IRevertMoonEffectLogic__Class**)(modloader::win::memory::resolve_rva(0x04753390)); }
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleData { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Class** type_info = (::app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Class**)(modloader::win::memory::resolve_rva(0x047218B8)); }
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Class** type_info = (::app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Class**)(modloader::win::memory::resolve_rva(0x04720170)); }
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Class** type_info = (::app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Class**)(modloader::win::memory::resolve_rva(0x0472DB80)); }
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool__Class** type_info = (::app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool__Class**)(modloader::win::memory::resolve_rva(0x0472FEA8)); }
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool__Class** type_info = (::app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool__Class**)(modloader::win::memory::resolve_rva(0x04794790)); }
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool__Class** type_info = (::app::MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool__Class**)(modloader::win::memory::resolve_rva(0x04703940)); }
    namespace FixedUpdateSyncTracker { IL2CPP_MODLOADER_DLLEXPORT ::app::FixedUpdateSyncTracker__Class** type_info = (::app::FixedUpdateSyncTracker__Class**)(modloader::win::memory::resolve_rva(0x04760790)); }
    namespace PerfTestTimer { IL2CPP_MODLOADER_DLLEXPORT ::app::PerfTestTimer__Class** type_info = (::app::PerfTestTimer__Class**)(modloader::win::memory::resolve_rva(0x04792630)); }
    namespace PerfTestTimer_TestData { IL2CPP_MODLOADER_DLLEXPORT ::app::PerfTestTimer_TestData__Class** type_info = (::app::PerfTestTimer_TestData__Class**)(modloader::win::memory::resolve_rva(0x04717CE0)); }
    namespace TestRunner { IL2CPP_MODLOADER_DLLEXPORT ::app::TestRunner__Class** type_info = (::app::TestRunner__Class**)(modloader::win::memory::resolve_rva(0x0477A378)); }
    namespace TestRunner_TestCoroutine_d_13 { IL2CPP_MODLOADER_DLLEXPORT ::app::TestRunner_TestCoroutine_d_13__Class** type_info = (::app::TestRunner_TestCoroutine_d_13__Class**)(modloader::win::memory::resolve_rva(0x047603E0)); }
    namespace TestRunner_RunScenesThroughTests_d_14 { IL2CPP_MODLOADER_DLLEXPORT ::app::TestRunner_RunScenesThroughTests_d_14__Class** type_info = (::app::TestRunner_RunScenesThroughTests_d_14__Class**)(modloader::win::memory::resolve_rva(0x04740E30)); }
    namespace TestRunner_c { IL2CPP_MODLOADER_DLLEXPORT ::app::TestRunner_c__Class** type_info = (::app::TestRunner_c__Class**)(modloader::win::memory::resolve_rva(0x047536A0)); }
    namespace Tests_CompoentRunnerID__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::Tests_CompoentRunnerID__Enum__Class** type_info = (::app::Tests_CompoentRunnerID__Enum__Class**)(modloader::win::memory::resolve_rva(0x04715158)); }
    namespace Tests_c { IL2CPP_MODLOADER_DLLEXPORT ::app::Tests_c__Class** type_info = (::app::Tests_c__Class**)(modloader::win::memory::resolve_rva(0x04713228)); }
    namespace Tests_RunTests_d_5 { IL2CPP_MODLOADER_DLLEXPORT ::app::Tests_RunTests_d_5__Class** type_info = (::app::Tests_RunTests_d_5__Class**)(modloader::win::memory::resolve_rva(0x04765D00)); }
    namespace Tests_DoLevelLoadUnloadTestTests_d_11 { IL2CPP_MODLOADER_DLLEXPORT ::app::Tests_DoLevelLoadUnloadTestTests_d_11__Class** type_info = (::app::Tests_DoLevelLoadUnloadTestTests_d_11__Class**)(modloader::win::memory::resolve_rva(0x0478B5E0)); }
    namespace Tests_DoBasicFrameTimeTests_d_12 { IL2CPP_MODLOADER_DLLEXPORT ::app::Tests_DoBasicFrameTimeTests_d_12__Class** type_info = (::app::Tests_DoBasicFrameTimeTests_d_12__Class**)(modloader::win::memory::resolve_rva(0x04765080)); }
    namespace Tests_DoComponentUpdateTests_d_13 { IL2CPP_MODLOADER_DLLEXPORT ::app::Tests_DoComponentUpdateTests_d_13__Class** type_info = (::app::Tests_DoComponentUpdateTests_d_13__Class**)(modloader::win::memory::resolve_rva(0x047127F0)); }
    namespace Tests_DoEnableDisableTest_d_14 { IL2CPP_MODLOADER_DLLEXPORT ::app::Tests_DoEnableDisableTest_d_14__Class** type_info = (::app::Tests_DoEnableDisableTest_d_14__Class**)(modloader::win::memory::resolve_rva(0x0477A508)); }
    namespace Tests_DoMovementTests_d_15 { IL2CPP_MODLOADER_DLLEXPORT ::app::Tests_DoMovementTests_d_15__Class** type_info = (::app::Tests_DoMovementTests_d_15__Class**)(modloader::win::memory::resolve_rva(0x047943B8)); }
    namespace Tests_SetupPosition_d_16 { IL2CPP_MODLOADER_DLLEXPORT ::app::Tests_SetupPosition_d_16__Class** type_info = (::app::Tests_SetupPosition_d_16__Class**)(modloader::win::memory::resolve_rva(0x04730F50)); }
    namespace Tests_DoReparentTest_d_17 { IL2CPP_MODLOADER_DLLEXPORT ::app::Tests_DoReparentTest_d_17__Class** type_info = (::app::Tests_DoReparentTest_d_17__Class**)(modloader::win::memory::resolve_rva(0x04703538)); }
    namespace Tests_DoReparentAndTransformTest_d_18 { IL2CPP_MODLOADER_DLLEXPORT ::app::Tests_DoReparentAndTransformTest_d_18__Class** type_info = (::app::Tests_DoReparentAndTransformTest_d_18__Class**)(modloader::win::memory::resolve_rva(0x047266D8)); }
    namespace Tests_WaitForNSeconds_d_19 { IL2CPP_MODLOADER_DLLEXPORT ::app::Tests_WaitForNSeconds_d_19__Class** type_info = (::app::Tests_WaitForNSeconds_d_19__Class**)(modloader::win::memory::resolve_rva(0x04710438)); }
    namespace QuadTree { IL2CPP_MODLOADER_DLLEXPORT ::app::QuadTree__Class** type_info = (::app::QuadTree__Class**)(modloader::win::memory::resolve_rva(0x0478E210)); }
    namespace QuadTree_Node { IL2CPP_MODLOADER_DLLEXPORT ::app::QuadTree_Node__Class** type_info = (::app::QuadTree_Node__Class**)(modloader::win::memory::resolve_rva(0x04787548)); }
    namespace IRectProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::IRectProvider__Class** type_info = (::app::IRectProvider__Class**)(modloader::win::memory::resolve_rva(0x04740648)); }
    namespace DefaultMoonDriverExecutionOrderMap { IL2CPP_MODLOADER_DLLEXPORT ::app::DefaultMoonDriverExecutionOrderMap__Class** type_info = (::app::DefaultMoonDriverExecutionOrderMap__Class**)(modloader::win::memory::resolve_rva(0x0474D230)); }
    namespace ImGuiManager { IL2CPP_MODLOADER_DLLEXPORT ::app::ImGuiManager__Class** type_info = (::app::ImGuiManager__Class**)(modloader::win::memory::resolve_rva(0x047914D0)); }
    namespace ListView { IL2CPP_MODLOADER_DLLEXPORT ::app::ListView__Class** type_info = (::app::ListView__Class**)(modloader::win::memory::resolve_rva(0x04785948)); }
    namespace ListViewItem { IL2CPP_MODLOADER_DLLEXPORT ::app::ListViewItem__Class** type_info = (::app::ListViewItem__Class**)(modloader::win::memory::resolve_rva(0x04702868)); }
    namespace ControllerInput { IL2CPP_MODLOADER_DLLEXPORT ::app::ControllerInput__Class** type_info = (::app::ControllerInput__Class**)(modloader::win::memory::resolve_rva(0x0470FA58)); }
    namespace ListView_c { IL2CPP_MODLOADER_DLLEXPORT ::app::ListView_c__Class** type_info = (::app::ListView_c__Class**)(modloader::win::memory::resolve_rva(0x04700EE0)); }
    namespace UberStateData { IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateData__Class** type_info = (::app::UberStateData__Class**)(modloader::win::memory::resolve_rva(0x04774738)); }
    namespace SpaceMongerWidget { IL2CPP_MODLOADER_DLLEXPORT ::app::SpaceMongerWidget__Class** type_info = (::app::SpaceMongerWidget__Class**)(modloader::win::memory::resolve_rva(0x047989A0)); }
    namespace IUberStateUIWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::IUberStateUIWrapper__Class** type_info = (::app::IUberStateUIWrapper__Class**)(modloader::win::memory::resolve_rva(0x0475D200)); }
    namespace UberStateGroupData { IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateGroupData__Class** type_info = (::app::UberStateGroupData__Class**)(modloader::win::memory::resolve_rva(0x0477B010)); }
    namespace SpaceMongerWidget_UberStateGroupDataSizeComparer { IL2CPP_MODLOADER_DLLEXPORT ::app::SpaceMongerWidget_UberStateGroupDataSizeComparer__Class** type_info = (::app::SpaceMongerWidget_UberStateGroupDataSizeComparer__Class**)(modloader::win::memory::resolve_rva(0x047897B8)); }
    namespace SpaceMongerWidget_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SpaceMongerWidget_c__Class** type_info = (::app::SpaceMongerWidget_c__Class**)(modloader::win::memory::resolve_rva(0x0474C9D8)); }
    namespace UberStateDataView { IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateDataView__Class** type_info = (::app::UberStateDataView__Class**)(modloader::win::memory::resolve_rva(0x04781948)); }
    namespace UberStateGroupDataItemView { IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateGroupDataItemView__Class** type_info = (::app::UberStateGroupDataItemView__Class**)(modloader::win::memory::resolve_rva(0x04751588)); }
    namespace UberStateValueGroupSortById { IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateValueGroupSortById__Class** type_info = (::app::UberStateValueGroupSortById__Class**)(modloader::win::memory::resolve_rva(0x04775960)); }
    namespace UberStateVisualizationView { IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateVisualizationView__Class** type_info = (::app::UberStateVisualizationView__Class**)(modloader::win::memory::resolve_rva(0x0471C9A8)); }
    namespace UberStateVisualizationView_c { IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateVisualizationView_c__Class** type_info = (::app::UberStateVisualizationView_c__Class**)(modloader::win::memory::resolve_rva(0x0474A820)); }
    namespace NonSerializedBooleanUberStateWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::NonSerializedBooleanUberStateWrapper__Class** type_info = (::app::NonSerializedBooleanUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x047750E8)); }
    namespace NonSerializedByteUberStateWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::NonSerializedByteUberStateWrapper__Class** type_info = (::app::NonSerializedByteUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x0475B368)); }
    namespace NonSerializedFloatUberStateWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::NonSerializedFloatUberStateWrapper__Class** type_info = (::app::NonSerializedFloatUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x0478D300)); }
    namespace NonSerializedIntUberStateWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::NonSerializedIntUberStateWrapper__Class** type_info = (::app::NonSerializedIntUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x04720AF8)); }
    namespace ObjectUberStateWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectUberStateWrapper__Class** type_info = (::app::ObjectUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x047166E8)); }
    namespace IUberStateVisualizable { IL2CPP_MODLOADER_DLLEXPORT ::app::IUberStateVisualizable__Class** type_info = (::app::IUberStateVisualizable__Class**)(modloader::win::memory::resolve_rva(0x0476EB88)); }
    namespace SerializedBoolUberStateWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::SerializedBoolUberStateWrapper__Class** type_info = (::app::SerializedBoolUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x0472C4B0)); }
    namespace SerializedByteUberStateWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::SerializedByteUberStateWrapper__Class** type_info = (::app::SerializedByteUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x04708518)); }
    namespace SerializedFloatUberStateWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::SerializedFloatUberStateWrapper__Class** type_info = (::app::SerializedFloatUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x0472EE48)); }
    namespace SerializedIntUberStateWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::SerializedIntUberStateWrapper__Class** type_info = (::app::SerializedIntUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x0478B260)); }
    namespace MoonEffectComponentCache { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonEffectComponentCache__Class** type_info = (::app::MoonEffectComponentCache__Class**)(modloader::win::memory::resolve_rva(0x04784F08)); }
    namespace IInstantiationHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::IInstantiationHandler__Class** type_info = (::app::IInstantiationHandler__Class**)(modloader::win::memory::resolve_rva(0x047037D8)); }
    namespace IMoonEffectComposition { IL2CPP_MODLOADER_DLLEXPORT ::app::IMoonEffectComposition__Class** type_info = (::app::IMoonEffectComposition__Class**)(modloader::win::memory::resolve_rva(0x04772F58)); }
    namespace MoonEffectsResolver { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonEffectsResolver__Class** type_info = (::app::MoonEffectsResolver__Class**)(modloader::win::memory::resolve_rva(0x047066F0)); }
    namespace IInteractionNode { IL2CPP_MODLOADER_DLLEXPORT ::app::IInteractionNode__Class** type_info = (::app::IInteractionNode__Class**)(modloader::win::memory::resolve_rva(0x04714390)); }
    namespace IMessageProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::IMessageProvider__Class** type_info = (::app::IMessageProvider__Class**)(modloader::win::memory::resolve_rva(0x047075F8)); }
    namespace InteractionBinding { IL2CPP_MODLOADER_DLLEXPORT ::app::InteractionBinding__Class** type_info = (::app::InteractionBinding__Class**)(modloader::win::memory::resolve_rva(0x04733B98)); }
    namespace ICondition { IL2CPP_MODLOADER_DLLEXPORT ::app::ICondition__Class** type_info = (::app::ICondition__Class**)(modloader::win::memory::resolve_rva(0x04794720)); }
    namespace IInteractionTransition { IL2CPP_MODLOADER_DLLEXPORT ::app::IInteractionTransition__Class** type_info = (::app::IInteractionTransition__Class**)(modloader::win::memory::resolve_rva(0x0478DEF8)); }
    namespace IInteractionNodeDecorator { IL2CPP_MODLOADER_DLLEXPORT ::app::IInteractionNodeDecorator__Class** type_info = (::app::IInteractionNodeDecorator__Class**)(modloader::win::memory::resolve_rva(0x047665F8)); }
    namespace InteractionSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::InteractionSettings__Class** type_info = (::app::InteractionSettings__Class**)(modloader::win::memory::resolve_rva(0x04796C58)); }
    namespace IInputTransition { IL2CPP_MODLOADER_DLLEXPORT ::app::IInputTransition__Class** type_info = (::app::IInputTransition__Class**)(modloader::win::memory::resolve_rva(0x04791A98)); }
    namespace StateMachine_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::StateMachine_1__Class** type_info = (::app::StateMachine_1__Class**)(modloader::win::memory::resolve_rva(0x04711BC0)); }
    namespace IState_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::IState_1__Class** type_info = (::app::IState_1__Class**)(modloader::win::memory::resolve_rva(0x04720778)); }
    namespace TransitionManager { IL2CPP_MODLOADER_DLLEXPORT ::app::TransitionManager__Class** type_info = (::app::TransitionManager__Class**)(modloader::win::memory::resolve_rva(0x04748DC8)); }
    namespace Transition { IL2CPP_MODLOADER_DLLEXPORT ::app::Transition__Class** type_info = (::app::Transition__Class**)(modloader::win::memory::resolve_rva(0x0477CC58)); }
    namespace InteractionGraph_InteractionGraphContext { IL2CPP_MODLOADER_DLLEXPORT ::app::InteractionGraph_InteractionGraphContext__Class** type_info = (::app::InteractionGraph_InteractionGraphContext__Class**)(modloader::win::memory::resolve_rva(0x04772250)); }
    namespace InteractionGraph_NodeFinishedCondition { IL2CPP_MODLOADER_DLLEXPORT ::app::InteractionGraph_NodeFinishedCondition__Class** type_info = (::app::InteractionGraph_NodeFinishedCondition__Class**)(modloader::win::memory::resolve_rva(0x04757D30)); }
    namespace InteractionNodeContext { IL2CPP_MODLOADER_DLLEXPORT ::app::InteractionNodeContext__Class** type_info = (::app::InteractionNodeContext__Class**)(modloader::win::memory::resolve_rva(0x047172F0)); }
    namespace NPCMessageBoxWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::NPCMessageBoxWrapper__Class** type_info = (::app::NPCMessageBoxWrapper__Class**)(modloader::win::memory::resolve_rva(0x0474AB98)); }
    namespace Language__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::Language__Enum__Class** type_info = (::app::Language__Enum__Class**)(modloader::win::memory::resolve_rva(0x04729A60)); }
    namespace MessageDescriptor { IL2CPP_MODLOADER_DLLEXPORT ::app::MessageDescriptor__Class** type_info = (::app::MessageDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04708F20)); }
    namespace BitmapFontChar { IL2CPP_MODLOADER_DLLEXPORT ::app::BitmapFontChar__Class** type_info = (::app::BitmapFontChar__Class**)(modloader::win::memory::resolve_rva(0x0473F820)); }
    namespace BaseAnimator { IL2CPP_MODLOADER_DLLEXPORT ::app::BaseAnimator__Class** type_info = (::app::BaseAnimator__Class**)(modloader::win::memory::resolve_rva(0x04757058)); }
    namespace IAnimatorDriver { IL2CPP_MODLOADER_DLLEXPORT ::app::IAnimatorDriver__Class** type_info = (::app::IAnimatorDriver__Class**)(modloader::win::memory::resolve_rva(0x04767DA0)); }
    namespace AnimatorDriver { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimatorDriver__Class** type_info = (::app::AnimatorDriver__Class**)(modloader::win::memory::resolve_rva(0x04705478)); }
    namespace CameraShake { IL2CPP_MODLOADER_DLLEXPORT ::app::CameraShake__Class** type_info = (::app::CameraShake__Class**)(modloader::win::memory::resolve_rva(0x047914B0)); }
    namespace UberDelegate { IL2CPP_MODLOADER_DLLEXPORT ::app::UberDelegate__Class** type_info = (::app::UberDelegate__Class**)(modloader::win::memory::resolve_rva(0x0474B478)); }
    namespace LineDescent { IL2CPP_MODLOADER_DLLEXPORT ::app::LineDescent__Class** type_info = (::app::LineDescent__Class**)(modloader::win::memory::resolve_rva(0x04760C68)); }
    namespace TextBoxLine { IL2CPP_MODLOADER_DLLEXPORT ::app::TextBoxLine__Class** type_info = (::app::TextBoxLine__Class**)(modloader::win::memory::resolve_rva(0x0472EAD0)); }
    namespace CharMetaData__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::CharMetaData__Array__Class** type_info = (::app::CharMetaData__Array__Class**)(modloader::win::memory::resolve_rva(0x0472B5B0)); }
    namespace TextRenderer__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::TextRenderer__Array__Class** type_info = (::app::TextRenderer__Array__Class**)(modloader::win::memory::resolve_rva(0x04733490)); }
    namespace MessageProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::MessageProvider__Class** type_info = (::app::MessageProvider__Class**)(modloader::win::memory::resolve_rva(0x04777068)); }
    namespace SoundProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::SoundProvider__Class** type_info = (::app::SoundProvider__Class**)(modloader::win::memory::resolve_rva(0x04712020)); }
    namespace SoundProvider_CallbackFunction { IL2CPP_MODLOADER_DLLEXPORT ::app::SoundProvider_CallbackFunction__Class** type_info = (::app::SoundProvider_CallbackFunction__Class**)(modloader::win::memory::resolve_rva(0x0470E280)); }
    namespace SoundDescriptor { IL2CPP_MODLOADER_DLLEXPORT ::app::SoundDescriptor__Class** type_info = (::app::SoundDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0477A0A8)); }
    namespace Event_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::Event_1__Class** type_info = (::app::Event_1__Class**)(modloader::win::memory::resolve_rva(0x04724568)); }
    namespace WwiseObjectType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::WwiseObjectType__Enum__Class** type_info = (::app::WwiseObjectType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04739B80)); }
}
