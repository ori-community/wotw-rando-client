#include <Il2CppModLoader/app/types/AkAuxSendArray.h>
#include <Il2CppModLoader/app/types/AnimatorDriver.h>
#include <Il2CppModLoader/app/types/BaseAnimator.h>
#include <Il2CppModLoader/app/types/BitmapFontChar.h>
#include <Il2CppModLoader/app/types/CallbackState_c.h>
#include <Il2CppModLoader/app/types/CameraShake.h>
#include <Il2CppModLoader/app/types/CharMetaData__Array.h>
#include <Il2CppModLoader/app/types/CompoundState_c.h>
#include <Il2CppModLoader/app/types/ControllerInput.h>
#include <Il2CppModLoader/app/types/DefaultMoonDriverExecutionOrderMap.h>
#include <Il2CppModLoader/app/types/Event_1.h>
#include <Il2CppModLoader/app/types/ExceptionEntry.h>
#include <Il2CppModLoader/app/types/ExceptionProcessor.h>
#include <Il2CppModLoader/app/types/ExceptionProcessor_c.h>
#include <Il2CppModLoader/app/types/FixedUpdateSyncTracker.h>
#include <Il2CppModLoader/app/types/FuncCondition.h>
#include <Il2CppModLoader/app/types/ImGuiManager.h>
#include <Il2CppModLoader/app/types/InteractionBinding.h>
#include <Il2CppModLoader/app/types/InteractionGraph_InteractionGraphContext.h>
#include <Il2CppModLoader/app/types/InteractionGraph_NodeFinishedCondition.h>
#include <Il2CppModLoader/app/types/InteractionNodeContext.h>
#include <Il2CppModLoader/app/types/InteractionSettings.h>
#include <Il2CppModLoader/app/types/Language__Enum.h>
#include <Il2CppModLoader/app/types/LineDescent.h>
#include <Il2CppModLoader/app/types/ListView.h>
#include <Il2CppModLoader/app/types/ListViewItem.h>
#include <Il2CppModLoader/app/types/ListView_c.h>
#include <Il2CppModLoader/app/types/LogCallbackHandler.h>
#include <Il2CppModLoader/app/types/LogCallbackHandler_LogEntry.h>
#include <Il2CppModLoader/app/types/LowPassFilterSettings.h>
#include <Il2CppModLoader/app/types/MessageDescriptor.h>
#include <Il2CppModLoader/app/types/MessageProvider.h>
#include <Il2CppModLoader/app/types/MoonEffectComponentCache.h>
#include <Il2CppModLoader/app/types/MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool.h>
#include <Il2CppModLoader/app/types/MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData.h>
#include <Il2CppModLoader/app/types/MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool.h>
#include <Il2CppModLoader/app/types/MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData.h>
#include <Il2CppModLoader/app/types/MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool.h>
#include <Il2CppModLoader/app/types/MoonEffectsResolver.h>
#include <Il2CppModLoader/app/types/NPCMessageBoxWrapper.h>
#include <Il2CppModLoader/app/types/NonSerializedBooleanUberStateWrapper.h>
#include <Il2CppModLoader/app/types/NonSerializedByteUberStateWrapper.h>
#include <Il2CppModLoader/app/types/NonSerializedFloatUberStateWrapper.h>
#include <Il2CppModLoader/app/types/NonSerializedIntUberStateWrapper.h>
#include <Il2CppModLoader/app/types/ObjectUberStateWrapper.h>
#include <Il2CppModLoader/app/types/PerfTestTimer.h>
#include <Il2CppModLoader/app/types/PerfTestTimer_TestData.h>
#include <Il2CppModLoader/app/types/PrewarmParticles_PrewarmParticleSystemParticle.h>
#include <Il2CppModLoader/app/types/PrewarmParticles_PrewarmParticleSystemParticle__Array.h>
#include <Il2CppModLoader/app/types/QuadTree.h>
#include <Il2CppModLoader/app/types/QuadTree_Node.h>
#include <Il2CppModLoader/app/types/RecorderSettings.h>
#include <Il2CppModLoader/app/types/SerializedBoolUberStateWrapper.h>
#include <Il2CppModLoader/app/types/SerializedByteUberStateWrapper.h>
#include <Il2CppModLoader/app/types/SerializedFloatUberStateWrapper.h>
#include <Il2CppModLoader/app/types/SerializedIntUberStateWrapper.h>
#include <Il2CppModLoader/app/types/SoundDescriptor.h>
#include <Il2CppModLoader/app/types/SoundHost.h>
#include <Il2CppModLoader/app/types/SoundProvider.h>
#include <Il2CppModLoader/app/types/SoundProvider_CallbackFunction.h>
#include <Il2CppModLoader/app/types/SoundSize.h>
#include <Il2CppModLoader/app/types/SpaceMongerWidget.h>
#include <Il2CppModLoader/app/types/SpaceMongerWidget_UberStateGroupDataSizeComparer.h>
#include <Il2CppModLoader/app/types/SpaceMongerWidget_c.h>
#include <Il2CppModLoader/app/types/StateConfigurator.h>
#include <Il2CppModLoader/app/types/StateMachine_1.h>
#include <Il2CppModLoader/app/types/StateMachine_c.h>
#include <Il2CppModLoader/app/types/StateMachine_c_DisplayClass31_0.h>
#include <Il2CppModLoader/app/types/State_c.h>
#include <Il2CppModLoader/app/types/Switch_1.h>
#include <Il2CppModLoader/app/types/TestRunner.h>
#include <Il2CppModLoader/app/types/TestRunner_RunScenesThroughTests_d_14.h>
#include <Il2CppModLoader/app/types/TestRunner_TestCoroutine_d_13.h>
#include <Il2CppModLoader/app/types/TestRunner_c.h>
#include <Il2CppModLoader/app/types/Tests_CompoentRunnerID__Enum.h>
#include <Il2CppModLoader/app/types/Tests_DoBasicFrameTimeTests_d_12.h>
#include <Il2CppModLoader/app/types/Tests_DoComponentUpdateTests_d_13.h>
#include <Il2CppModLoader/app/types/Tests_DoEnableDisableTest_d_14.h>
#include <Il2CppModLoader/app/types/Tests_DoLevelLoadUnloadTestTests_d_11.h>
#include <Il2CppModLoader/app/types/Tests_DoMovementTests_d_15.h>
#include <Il2CppModLoader/app/types/Tests_DoReparentAndTransformTest_d_18.h>
#include <Il2CppModLoader/app/types/Tests_DoReparentTest_d_17.h>
#include <Il2CppModLoader/app/types/Tests_RunTests_d_5.h>
#include <Il2CppModLoader/app/types/Tests_SetupPosition_d_16.h>
#include <Il2CppModLoader/app/types/Tests_WaitForNSeconds_d_19.h>
#include <Il2CppModLoader/app/types/Tests_c.h>
#include <Il2CppModLoader/app/types/TextBoxLine.h>
#include <Il2CppModLoader/app/types/TextRenderer__Array.h>
#include <Il2CppModLoader/app/types/Transition.h>
#include <Il2CppModLoader/app/types/TransitionManager.h>
#include <Il2CppModLoader/app/types/Trigger.h>
#include <Il2CppModLoader/app/types/UberDelegate.h>
#include <Il2CppModLoader/app/types/UberStateData.h>
#include <Il2CppModLoader/app/types/UberStateDataView.h>
#include <Il2CppModLoader/app/types/UberStateGroupData.h>
#include <Il2CppModLoader/app/types/UberStateGroupDataItemView.h>
#include <Il2CppModLoader/app/types/UberStateValueGroupSortById.h>
#include <Il2CppModLoader/app/types/UberStateVisualizationView.h>
#include <Il2CppModLoader/app/types/UberStateVisualizationView_c.h>
#include <Il2CppModLoader/app/types/WwiseObjectType__Enum.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Class** type_info = (::app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Class**)(modloader::win::memory::resolve_rva(0x04720170));
    }
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Class** type_info = (::app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Class**)(modloader::win::memory::resolve_rva(0x0472DB80));
    }
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool__Class** type_info = (::app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool__Class**)(modloader::win::memory::resolve_rva(0x0472FEA8));
    }
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool__Class** type_info = (::app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool__Class**)(modloader::win::memory::resolve_rva(0x04794790));
    }
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool__Class** type_info = (::app::MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool__Class**)(modloader::win::memory::resolve_rva(0x04703940));
    }
    namespace FixedUpdateSyncTracker {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FixedUpdateSyncTracker__Class** type_info = (::app::FixedUpdateSyncTracker__Class**)(modloader::win::memory::resolve_rva(0x04760790));
    }
    namespace PerfTestTimer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PerfTestTimer__Class** type_info = (::app::PerfTestTimer__Class**)(modloader::win::memory::resolve_rva(0x04792630));
    }
    namespace PerfTestTimer_TestData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PerfTestTimer_TestData__Class** type_info = (::app::PerfTestTimer_TestData__Class**)(modloader::win::memory::resolve_rva(0x04717CE0));
    }
    namespace TestRunner {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TestRunner__Class** type_info = (::app::TestRunner__Class**)(modloader::win::memory::resolve_rva(0x0477A378));
    }
    namespace TestRunner_TestCoroutine_d_13 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TestRunner_TestCoroutine_d_13__Class** type_info = (::app::TestRunner_TestCoroutine_d_13__Class**)(modloader::win::memory::resolve_rva(0x047603E0));
    }
    namespace TestRunner_RunScenesThroughTests_d_14 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TestRunner_RunScenesThroughTests_d_14__Class** type_info = (::app::TestRunner_RunScenesThroughTests_d_14__Class**)(modloader::win::memory::resolve_rva(0x04740E30));
    }
    namespace TestRunner_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TestRunner_c__Class** type_info = (::app::TestRunner_c__Class**)(modloader::win::memory::resolve_rva(0x047536A0));
    }
    namespace Tests_CompoentRunnerID__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Tests_CompoentRunnerID__Enum__Class** type_info = (::app::Tests_CompoentRunnerID__Enum__Class**)(modloader::win::memory::resolve_rva(0x04715158));
    }
    namespace Tests_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Tests_c__Class** type_info = (::app::Tests_c__Class**)(modloader::win::memory::resolve_rva(0x04713228));
    }
    namespace Tests_RunTests_d_5 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Tests_RunTests_d_5__Class** type_info = (::app::Tests_RunTests_d_5__Class**)(modloader::win::memory::resolve_rva(0x04765D00));
    }
    namespace Tests_DoLevelLoadUnloadTestTests_d_11 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Tests_DoLevelLoadUnloadTestTests_d_11__Class** type_info = (::app::Tests_DoLevelLoadUnloadTestTests_d_11__Class**)(modloader::win::memory::resolve_rva(0x0478B5E0));
    }
    namespace Tests_DoBasicFrameTimeTests_d_12 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Tests_DoBasicFrameTimeTests_d_12__Class** type_info = (::app::Tests_DoBasicFrameTimeTests_d_12__Class**)(modloader::win::memory::resolve_rva(0x04765080));
    }
    namespace Tests_DoComponentUpdateTests_d_13 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Tests_DoComponentUpdateTests_d_13__Class** type_info = (::app::Tests_DoComponentUpdateTests_d_13__Class**)(modloader::win::memory::resolve_rva(0x047127F0));
    }
    namespace Tests_DoEnableDisableTest_d_14 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Tests_DoEnableDisableTest_d_14__Class** type_info = (::app::Tests_DoEnableDisableTest_d_14__Class**)(modloader::win::memory::resolve_rva(0x0477A508));
    }
    namespace Tests_DoMovementTests_d_15 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Tests_DoMovementTests_d_15__Class** type_info = (::app::Tests_DoMovementTests_d_15__Class**)(modloader::win::memory::resolve_rva(0x047943B8));
    }
    namespace Tests_SetupPosition_d_16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Tests_SetupPosition_d_16__Class** type_info = (::app::Tests_SetupPosition_d_16__Class**)(modloader::win::memory::resolve_rva(0x04730F50));
    }
    namespace Tests_DoReparentTest_d_17 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Tests_DoReparentTest_d_17__Class** type_info = (::app::Tests_DoReparentTest_d_17__Class**)(modloader::win::memory::resolve_rva(0x04703538));
    }
    namespace Tests_DoReparentAndTransformTest_d_18 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Tests_DoReparentAndTransformTest_d_18__Class** type_info = (::app::Tests_DoReparentAndTransformTest_d_18__Class**)(modloader::win::memory::resolve_rva(0x047266D8));
    }
    namespace Tests_WaitForNSeconds_d_19 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Tests_WaitForNSeconds_d_19__Class** type_info = (::app::Tests_WaitForNSeconds_d_19__Class**)(modloader::win::memory::resolve_rva(0x04710438));
    }
    namespace QuadTree {
        IL2CPP_MODLOADER_DLLEXPORT ::app::QuadTree__Class** type_info = (::app::QuadTree__Class**)(modloader::win::memory::resolve_rva(0x0478E210));
    }
    namespace QuadTree_Node {
        IL2CPP_MODLOADER_DLLEXPORT ::app::QuadTree_Node__Class** type_info = (::app::QuadTree_Node__Class**)(modloader::win::memory::resolve_rva(0x04787548));
    }
    namespace DefaultMoonDriverExecutionOrderMap {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DefaultMoonDriverExecutionOrderMap__Class** type_info = (::app::DefaultMoonDriverExecutionOrderMap__Class**)(modloader::win::memory::resolve_rva(0x0474D230));
    }
    namespace ImGuiManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ImGuiManager__Class** type_info = (::app::ImGuiManager__Class**)(modloader::win::memory::resolve_rva(0x047914D0));
    }
    namespace ListView {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ListView__Class** type_info = (::app::ListView__Class**)(modloader::win::memory::resolve_rva(0x04785948));
    }
    namespace ListViewItem {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ListViewItem__Class** type_info = (::app::ListViewItem__Class**)(modloader::win::memory::resolve_rva(0x04702868));
    }
    namespace ControllerInput {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ControllerInput__Class** type_info = (::app::ControllerInput__Class**)(modloader::win::memory::resolve_rva(0x0470FA58));
    }
    namespace ListView_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ListView_c__Class** type_info = (::app::ListView_c__Class**)(modloader::win::memory::resolve_rva(0x04700EE0));
    }
    namespace UberStateData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateData__Class** type_info = (::app::UberStateData__Class**)(modloader::win::memory::resolve_rva(0x04774738));
    }
    namespace SpaceMongerWidget {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SpaceMongerWidget__Class** type_info = (::app::SpaceMongerWidget__Class**)(modloader::win::memory::resolve_rva(0x047989A0));
    }
    namespace UberStateGroupData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateGroupData__Class** type_info = (::app::UberStateGroupData__Class**)(modloader::win::memory::resolve_rva(0x0477B010));
    }
    namespace SpaceMongerWidget_UberStateGroupDataSizeComparer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SpaceMongerWidget_UberStateGroupDataSizeComparer__Class** type_info = (::app::SpaceMongerWidget_UberStateGroupDataSizeComparer__Class**)(modloader::win::memory::resolve_rva(0x047897B8));
    }
    namespace SpaceMongerWidget_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SpaceMongerWidget_c__Class** type_info = (::app::SpaceMongerWidget_c__Class**)(modloader::win::memory::resolve_rva(0x0474C9D8));
    }
    namespace UberStateDataView {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateDataView__Class** type_info = (::app::UberStateDataView__Class**)(modloader::win::memory::resolve_rva(0x04781948));
    }
    namespace UberStateGroupDataItemView {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateGroupDataItemView__Class** type_info = (::app::UberStateGroupDataItemView__Class**)(modloader::win::memory::resolve_rva(0x04751588));
    }
    namespace UberStateValueGroupSortById {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateValueGroupSortById__Class** type_info = (::app::UberStateValueGroupSortById__Class**)(modloader::win::memory::resolve_rva(0x04775960));
    }
    namespace UberStateVisualizationView {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateVisualizationView__Class** type_info = (::app::UberStateVisualizationView__Class**)(modloader::win::memory::resolve_rva(0x0471C9A8));
    }
    namespace UberStateVisualizationView_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateVisualizationView_c__Class** type_info = (::app::UberStateVisualizationView_c__Class**)(modloader::win::memory::resolve_rva(0x0474A820));
    }
    namespace NonSerializedBooleanUberStateWrapper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NonSerializedBooleanUberStateWrapper__Class** type_info = (::app::NonSerializedBooleanUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x047750E8));
    }
    namespace NonSerializedByteUberStateWrapper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NonSerializedByteUberStateWrapper__Class** type_info = (::app::NonSerializedByteUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x0475B368));
    }
    namespace NonSerializedFloatUberStateWrapper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NonSerializedFloatUberStateWrapper__Class** type_info = (::app::NonSerializedFloatUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x0478D300));
    }
    namespace NonSerializedIntUberStateWrapper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NonSerializedIntUberStateWrapper__Class** type_info = (::app::NonSerializedIntUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x04720AF8));
    }
    namespace ObjectUberStateWrapper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectUberStateWrapper__Class** type_info = (::app::ObjectUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x047166E8));
    }
    namespace SerializedBoolUberStateWrapper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SerializedBoolUberStateWrapper__Class** type_info = (::app::SerializedBoolUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x0472C4B0));
    }
    namespace SerializedByteUberStateWrapper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SerializedByteUberStateWrapper__Class** type_info = (::app::SerializedByteUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x04708518));
    }
    namespace SerializedFloatUberStateWrapper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SerializedFloatUberStateWrapper__Class** type_info = (::app::SerializedFloatUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x0472EE48));
    }
    namespace SerializedIntUberStateWrapper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SerializedIntUberStateWrapper__Class** type_info = (::app::SerializedIntUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x0478B260));
    }
    namespace MoonEffectComponentCache {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonEffectComponentCache__Class** type_info = (::app::MoonEffectComponentCache__Class**)(modloader::win::memory::resolve_rva(0x04784F08));
    }
    namespace MoonEffectsResolver {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonEffectsResolver__Class** type_info = (::app::MoonEffectsResolver__Class**)(modloader::win::memory::resolve_rva(0x047066F0));
    }
    namespace InteractionBinding {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InteractionBinding__Class** type_info = (::app::InteractionBinding__Class**)(modloader::win::memory::resolve_rva(0x04733B98));
    }
    namespace InteractionSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InteractionSettings__Class** type_info = (::app::InteractionSettings__Class**)(modloader::win::memory::resolve_rva(0x04796C58));
    }
    namespace StateMachine_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StateMachine_1__Class** type_info = (::app::StateMachine_1__Class**)(modloader::win::memory::resolve_rva(0x04711BC0));
    }
    namespace TransitionManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TransitionManager__Class** type_info = (::app::TransitionManager__Class**)(modloader::win::memory::resolve_rva(0x04748DC8));
    }
    namespace Transition {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Transition__Class** type_info = (::app::Transition__Class**)(modloader::win::memory::resolve_rva(0x0477CC58));
    }
    namespace InteractionGraph_InteractionGraphContext {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InteractionGraph_InteractionGraphContext__Class** type_info = (::app::InteractionGraph_InteractionGraphContext__Class**)(modloader::win::memory::resolve_rva(0x04772250));
    }
    namespace InteractionGraph_NodeFinishedCondition {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InteractionGraph_NodeFinishedCondition__Class** type_info = (::app::InteractionGraph_NodeFinishedCondition__Class**)(modloader::win::memory::resolve_rva(0x04757D30));
    }
    namespace InteractionNodeContext {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InteractionNodeContext__Class** type_info = (::app::InteractionNodeContext__Class**)(modloader::win::memory::resolve_rva(0x047172F0));
    }
    namespace NPCMessageBoxWrapper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NPCMessageBoxWrapper__Class** type_info = (::app::NPCMessageBoxWrapper__Class**)(modloader::win::memory::resolve_rva(0x0474AB98));
    }
    namespace Language__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Language__Enum__Class** type_info = (::app::Language__Enum__Class**)(modloader::win::memory::resolve_rva(0x04729A60));
    }
    namespace MessageDescriptor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MessageDescriptor__Class** type_info = (::app::MessageDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04708F20));
    }
    namespace BitmapFontChar {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BitmapFontChar__Class** type_info = (::app::BitmapFontChar__Class**)(modloader::win::memory::resolve_rva(0x0473F820));
    }
    namespace BaseAnimator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BaseAnimator__Class** type_info = (::app::BaseAnimator__Class**)(modloader::win::memory::resolve_rva(0x04757058));
    }
    namespace AnimatorDriver {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AnimatorDriver__Class** type_info = (::app::AnimatorDriver__Class**)(modloader::win::memory::resolve_rva(0x04705478));
    }
    namespace CameraShake {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraShake__Class** type_info = (::app::CameraShake__Class**)(modloader::win::memory::resolve_rva(0x047914B0));
    }
    namespace UberDelegate {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberDelegate__Class** type_info = (::app::UberDelegate__Class**)(modloader::win::memory::resolve_rva(0x0474B478));
    }
    namespace LineDescent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LineDescent__Class** type_info = (::app::LineDescent__Class**)(modloader::win::memory::resolve_rva(0x04760C68));
    }
    namespace TextBoxLine {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TextBoxLine__Class** type_info = (::app::TextBoxLine__Class**)(modloader::win::memory::resolve_rva(0x0472EAD0));
    }
    namespace CharMetaData__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CharMetaData__Array__Class** type_info = (::app::CharMetaData__Array__Class**)(modloader::win::memory::resolve_rva(0x0472B5B0));
    }
    namespace TextRenderer__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TextRenderer__Array__Class** type_info = (::app::TextRenderer__Array__Class**)(modloader::win::memory::resolve_rva(0x04733490));
    }
    namespace MessageProvider {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MessageProvider__Class** type_info = (::app::MessageProvider__Class**)(modloader::win::memory::resolve_rva(0x04777068));
    }
    namespace SoundProvider {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SoundProvider__Class** type_info = (::app::SoundProvider__Class**)(modloader::win::memory::resolve_rva(0x04712020));
    }
    namespace SoundProvider_CallbackFunction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SoundProvider_CallbackFunction__Class** type_info = (::app::SoundProvider_CallbackFunction__Class**)(modloader::win::memory::resolve_rva(0x0470E280));
    }
    namespace SoundDescriptor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SoundDescriptor__Class** type_info = (::app::SoundDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0477A0A8));
    }
    namespace Event_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Event_1__Class** type_info = (::app::Event_1__Class**)(modloader::win::memory::resolve_rva(0x04724568));
    }
    namespace WwiseObjectType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WwiseObjectType__Enum__Class** type_info = (::app::WwiseObjectType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04739B80));
    }
    namespace Switch_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Switch_1__Class** type_info = (::app::Switch_1__Class**)(modloader::win::memory::resolve_rva(0x0476E9F0));
    }
    namespace Trigger {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Trigger__Class** type_info = (::app::Trigger__Class**)(modloader::win::memory::resolve_rva(0x047267B8));
    }
    namespace SoundSize {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SoundSize__Class** type_info = (::app::SoundSize__Class**)(modloader::win::memory::resolve_rva(0x04794EB8));
    }
    namespace LowPassFilterSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LowPassFilterSettings__Class** type_info = (::app::LowPassFilterSettings__Class**)(modloader::win::memory::resolve_rva(0x0477C418));
    }
    namespace SoundHost {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SoundHost__Class** type_info = (::app::SoundHost__Class**)(modloader::win::memory::resolve_rva(0x04745270));
    }
    namespace AkAuxSendArray {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AkAuxSendArray__Class** type_info = (::app::AkAuxSendArray__Class**)(modloader::win::memory::resolve_rva(0x04733A20));
    }
    namespace StateConfigurator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StateConfigurator__Class** type_info = (::app::StateConfigurator__Class**)(modloader::win::memory::resolve_rva(0x04726060));
    }
    namespace StateMachine_c_DisplayClass31_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StateMachine_c_DisplayClass31_0__Class** type_info = (::app::StateMachine_c_DisplayClass31_0__Class**)(modloader::win::memory::resolve_rva(0x0477E960));
    }
    namespace StateMachine_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StateMachine_c__Class** type_info = (::app::StateMachine_c__Class**)(modloader::win::memory::resolve_rva(0x0471FC78));
    }
    namespace State_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::State_c__Class** type_info = (::app::State_c__Class**)(modloader::win::memory::resolve_rva(0x0472D8D8));
    }
    namespace CallbackState_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CallbackState_c__Class** type_info = (::app::CallbackState_c__Class**)(modloader::win::memory::resolve_rva(0x0471EA20));
    }
    namespace CompoundState_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CompoundState_c__Class** type_info = (::app::CompoundState_c__Class**)(modloader::win::memory::resolve_rva(0x0473EAF8));
    }
    namespace FuncCondition {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FuncCondition__Class** type_info = (::app::FuncCondition__Class**)(modloader::win::memory::resolve_rva(0x0476E630));
    }
    namespace ExceptionEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExceptionEntry__Class** type_info = (::app::ExceptionEntry__Class**)(modloader::win::memory::resolve_rva(0x04751890));
    }
    namespace ExceptionProcessor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExceptionProcessor__Class** type_info = (::app::ExceptionProcessor__Class**)(modloader::win::memory::resolve_rva(0x04780C48));
    }
    namespace ExceptionProcessor_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExceptionProcessor_c__Class** type_info = (::app::ExceptionProcessor_c__Class**)(modloader::win::memory::resolve_rva(0x04795668));
    }
    namespace LogCallbackHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LogCallbackHandler__Class** type_info = (::app::LogCallbackHandler__Class**)(modloader::win::memory::resolve_rva(0x04769C08));
    }
    namespace LogCallbackHandler_LogEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LogCallbackHandler_LogEntry__Class** type_info = (::app::LogCallbackHandler_LogEntry__Class**)(modloader::win::memory::resolve_rva(0x047831B8));
    }
    namespace PrewarmParticles_PrewarmParticleSystemParticle {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PrewarmParticles_PrewarmParticleSystemParticle__Class** type_info = (::app::PrewarmParticles_PrewarmParticleSystemParticle__Class**)(modloader::win::memory::resolve_rva(0x04782330));
    }
    namespace PrewarmParticles_PrewarmParticleSystemParticle__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PrewarmParticles_PrewarmParticleSystemParticle__Array__Class** type_info = (::app::PrewarmParticles_PrewarmParticleSystemParticle__Array__Class**)(modloader::win::memory::resolve_rva(0x04745938));
    }
    namespace RecorderSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RecorderSettings__Class** type_info = (::app::RecorderSettings__Class**)(modloader::win::memory::resolve_rva(0x0475FDB8));
    }
} // namespace app::classes::types
