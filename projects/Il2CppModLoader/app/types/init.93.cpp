#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/PhysicsDebugRecorder_c_DisplayClass18_0.h>
#include <Il2CppModLoader/app/types/AOTDummy.h>
#include <Il2CppModLoader/app/types/MeleeComboMoveChainsword.h>
#include <Il2CppModLoader/app/types/MeleeComboMoveSwordCharge.h>
#include <Il2CppModLoader/app/types/GroundAreaPatrolBehaviourNew_c.h>
#include <Il2CppModLoader/app/types/CancelableAnimator__Array.h>
#include <Il2CppModLoader/app/types/TimelineEventTrigger__Array.h>
#include <Il2CppModLoader/app/types/MeleeAttackBehaviourNew_c_DisplayClass60_0.h>
#include <Il2CppModLoader/app/types/MeleeAttackBehaviourNew_c.h>
#include <Il2CppModLoader/app/types/MeleeAttackTimelineBehaviourNew_c_DisplayClass46_0.h>
#include <Il2CppModLoader/app/types/MeleeAttackTimelineBehaviourNew_c.h>
#include <Il2CppModLoader/app/types/MirroredTurningBehaviour_State__Enum.h>
#include <Il2CppModLoader/app/types/FlutteringProjectileDropBehaviour_c.h>
#include <Il2CppModLoader/app/types/FlutteringShotDownBehaviour_States.h>
#include <Il2CppModLoader/app/types/FlutteringShotDownBehaviour_HitState.h>
#include <Il2CppModLoader/app/types/FlutteringShotDownBehaviour_FallState.h>
#include <Il2CppModLoader/app/types/FlutteringShotDownBehaviour_LandState.h>
#include <Il2CppModLoader/app/types/FlutteringShotDownBehaviour_c.h>
#include <Il2CppModLoader/app/types/FlutteringSlamBehaviour_StartState.h>
#include <Il2CppModLoader/app/types/FlutteringSlamBehaviour_LoopState.h>
#include <Il2CppModLoader/app/types/FlutteringSlamBehaviour_EndState.h>
#include <Il2CppModLoader/app/types/FlutteringSlamBehaviour_c.h>
#include <Il2CppModLoader/app/types/FlutteringTakeOffBehaviour_States.h>
#include <Il2CppModLoader/app/types/FlutteringTakeOffBehaviour_TurnStartState.h>
#include <Il2CppModLoader/app/types/FlutteringTakeOffBehaviour_StartState.h>
#include <Il2CppModLoader/app/types/FlutteringTakeOffBehaviour_LoopState.h>
#include <Il2CppModLoader/app/types/FlutteringTakeOffBehaviour_EndState.h>
#include <Il2CppModLoader/app/types/FlutteringTakeOffBehaviour_c.h>
#include <Il2CppModLoader/app/types/RammingBehaviour_TurnChargeSlamState.h>
#include <Il2CppModLoader/app/types/RammingBehaviour_ChargeSlamState.h>
#include <Il2CppModLoader/app/types/RammingBehaviour_ChaseState.h>
#include <Il2CppModLoader/app/types/RammingBehaviour_ExhaustState.h>
#include <Il2CppModLoader/app/types/RammingBehaviour_KnockbackState.h>
#include <Il2CppModLoader/app/types/RammingBehaviour_c.h>
#include <Il2CppModLoader/app/types/SkeetoLocomotion_c.h>
#include <Il2CppModLoader/app/types/TentacleStabBehaviour_TentacleAttack.h>
#include <Il2CppModLoader/app/types/TentaclePhysicsPostprocess.h>
#include <Il2CppModLoader/app/types/TentacleSpawnBehaviour.h>
#include <Il2CppModLoader/app/types/TentacleStabBehaviour.h>
#include <Il2CppModLoader/app/types/LizardMeleeAttackBehaviour_c.h>
#include <Il2CppModLoader/app/types/TurtleShellRollAttackBehaviourNew_States.h>
#include <Il2CppModLoader/app/types/TurtleShellRollAttackBehaviourNew_StartRollState.h>
#include <Il2CppModLoader/app/types/TurtleShellRollAttackBehaviourNew_RollLoopState.h>
#include <Il2CppModLoader/app/types/TurtleShellRollAttackBehaviourNew_EndRollState.h>
#include <Il2CppModLoader/app/types/WandererHandRewardBehaviour_c.h>
#include <Il2CppModLoader/app/types/HDRUtils.h>
#include <Il2CppModLoader/app/types/IAnimationMontageEventHandler.h>
#include <Il2CppModLoader/app/types/DamageReceiver_c.h>
#include <Il2CppModLoader/app/types/IHitStopReceiver.h>
#include <Il2CppModLoader/app/types/HitStop.h>
#include <Il2CppModLoader/app/types/HitStop_Entry.h>
#include <Il2CppModLoader/app/types/Brain_c.h>
#include <Il2CppModLoader/app/types/CustomGizmo.h>
#include <Il2CppModLoader/app/types/MoonGizmos.h>
#include <Il2CppModLoader/app/types/IGizmo.h>
#include <Il2CppModLoader/app/types/PetrifiedOwlDoubleClawBehaviour.h>
#include <Il2CppModLoader/app/types/PetrifiedOwlSingleClawBehaviour.h>
#include <Il2CppModLoader/app/types/Entity_c.h>
#include <Il2CppModLoader/app/types/EntityDeathEvent.h>
#include <Il2CppModLoader/app/types/EntityKickbackEvent.h>
#include <Il2CppModLoader/app/types/LocomotionGoal_c.h>
#include <Il2CppModLoader/app/types/Locomotion_StateTransitionEntry__Array.h>
#include <Il2CppModLoader/app/types/Locomotion_c_DisplayClass85_0.h>
#include <Il2CppModLoader/app/types/Vitals_DamageProcessHelper_c.h>
#include <Il2CppModLoader/app/types/Vitals_c.h>
#include <Il2CppModLoader/app/types/ExecutionOrderMap.h>
#include <Il2CppModLoader/app/types/FlameSpark.h>
#include <Il2CppModLoader/app/types/Flammable_c.h>
#include <Il2CppModLoader/app/types/CrossSceneDependencyDatabase.h>
#include <Il2CppModLoader/app/types/CageTextureMaker.h>
#include <Il2CppModLoader/app/types/WaterFall_WaterLine.h>
#include <Il2CppModLoader/app/types/WaterFall_WaterLine_Point.h>
#include <Il2CppModLoader/app/types/WaterFallMask_WaterLineGroup.h>
#include <Il2CppModLoader/app/types/WaterFallMask_WaterLineInterruption.h>
#include <Il2CppModLoader/app/types/IWaterfallInteractionAgent.h>
#include <Il2CppModLoader/app/types/WaterFallMasksSystem.h>
#include <Il2CppModLoader/app/types/WaterFallMask__Array.h>
#include <Il2CppModLoader/app/types/WaterFallMasksSystem_TimeslicedInit_d_27.h>
#include <Il2CppModLoader/app/types/NanoProfilerDataProvider.h>
#include <Il2CppModLoader/app/types/SceneLoadingTest_Context.h>
#include <Il2CppModLoader/app/types/SceneLoadingTest_Stats.h>
#include <Il2CppModLoader/app/types/SceneLoadingTest_GatherStatsScope.h>
#include <Il2CppModLoader/app/types/SceneLoadingTest_LoadEmptySceneCoroutine_d_18.h>
#include <Il2CppModLoader/app/types/SceneLoadingTest_c_DisplayClass19_0.h>
#include <Il2CppModLoader/app/types/SceneLoadingTest_c_DisplayClass22_0.h>
#include <Il2CppModLoader/app/types/CrashContext_Callback.h>
#include <Il2CppModLoader/app/types/TimeSlicedActivationTask_TimeSlicedActivation_d_25.h>
#include <Il2CppModLoader/app/types/TimeSlicedHeirarchyEnablingTask.h>
#include <Il2CppModLoader/app/types/TimeSlicedHeirarchyEnablingTask_TimeSlicedEnable_d_6.h>
#include <Il2CppModLoader/app/types/TimeSlicedHierarchyDisablingTask_TimeSlicedDisable_d_2.h>
#include <Il2CppModLoader/app/types/TimesliceResourceDestroyTask.h>
#include <Il2CppModLoader/app/types/TimesliceResourceDestroyTask_TimeslicedDestroy_d_10.h>
#include <Il2CppModLoader/app/types/TimesliceResourceUnloadTask.h>
#include <Il2CppModLoader/app/types/TimesliceResourceUnloadTask_TimeslicedUnload_d_10.h>
#include <Il2CppModLoader/app/types/TimesliceSceneUnloadTask_TimeslicedUnload_d_14.h>
#include <Il2CppModLoader/app/types/TimeSliceSystem.h>
#include <Il2CppModLoader/app/types/NanoProfiler.h>
#include <Il2CppModLoader/app/types/NanoProfiler_c.h>
#include <Il2CppModLoader/app/types/DataPointType__Enum.h>
#include <Il2CppModLoader/app/types/DataPoint.h>

namespace app::classes::types {
    namespace PhysicsDebugRecorder_c_DisplayClass18_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicsDebugRecorder_c_DisplayClass18_0__Class** type_info = (::app::PhysicsDebugRecorder_c_DisplayClass18_0__Class**)(modloader::win::memory::resolve_rva(0x04722878)); }
    namespace AOTDummy { IL2CPP_MODLOADER_DLLEXPORT ::app::AOTDummy__Class** type_info = (::app::AOTDummy__Class**)(modloader::win::memory::resolve_rva(0x0475BF30)); }
    namespace MeleeComboMoveChainsword { IL2CPP_MODLOADER_DLLEXPORT ::app::MeleeComboMoveChainsword__Class** type_info = (::app::MeleeComboMoveChainsword__Class**)(modloader::win::memory::resolve_rva(0x04783330)); }
    namespace MeleeComboMoveSwordCharge { IL2CPP_MODLOADER_DLLEXPORT ::app::MeleeComboMoveSwordCharge__Class** type_info = (::app::MeleeComboMoveSwordCharge__Class**)(modloader::win::memory::resolve_rva(0x04703F28)); }
    namespace GroundAreaPatrolBehaviourNew_c { IL2CPP_MODLOADER_DLLEXPORT ::app::GroundAreaPatrolBehaviourNew_c__Class** type_info = (::app::GroundAreaPatrolBehaviourNew_c__Class**)(modloader::win::memory::resolve_rva(0x04769580)); }
    namespace CancelableAnimator__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::CancelableAnimator__Array__Class** type_info = (::app::CancelableAnimator__Array__Class**)(modloader::win::memory::resolve_rva(0x0472FFD0)); }
    namespace TimelineEventTrigger__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineEventTrigger__Array__Class** type_info = (::app::TimelineEventTrigger__Array__Class**)(modloader::win::memory::resolve_rva(0x0478CD80)); }
    namespace MeleeAttackBehaviourNew_c_DisplayClass60_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::MeleeAttackBehaviourNew_c_DisplayClass60_0__Class** type_info = (::app::MeleeAttackBehaviourNew_c_DisplayClass60_0__Class**)(modloader::win::memory::resolve_rva(0x04761CA8)); }
    namespace MeleeAttackBehaviourNew_c { IL2CPP_MODLOADER_DLLEXPORT ::app::MeleeAttackBehaviourNew_c__Class** type_info = (::app::MeleeAttackBehaviourNew_c__Class**)(modloader::win::memory::resolve_rva(0x047684A8)); }
    namespace MeleeAttackTimelineBehaviourNew_c_DisplayClass46_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::MeleeAttackTimelineBehaviourNew_c_DisplayClass46_0__Class** type_info = (::app::MeleeAttackTimelineBehaviourNew_c_DisplayClass46_0__Class**)(modloader::win::memory::resolve_rva(0x04792E20)); }
    namespace MeleeAttackTimelineBehaviourNew_c { IL2CPP_MODLOADER_DLLEXPORT ::app::MeleeAttackTimelineBehaviourNew_c__Class** type_info = (::app::MeleeAttackTimelineBehaviourNew_c__Class**)(modloader::win::memory::resolve_rva(0x0474E8E8)); }
    namespace MirroredTurningBehaviour_State__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::MirroredTurningBehaviour_State__Enum__Class** type_info = (::app::MirroredTurningBehaviour_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474E1A8)); }
    namespace FlutteringProjectileDropBehaviour_c { IL2CPP_MODLOADER_DLLEXPORT ::app::FlutteringProjectileDropBehaviour_c__Class** type_info = (::app::FlutteringProjectileDropBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x0472DB10)); }
    namespace FlutteringShotDownBehaviour_States { IL2CPP_MODLOADER_DLLEXPORT ::app::FlutteringShotDownBehaviour_States__Class** type_info = (::app::FlutteringShotDownBehaviour_States__Class**)(modloader::win::memory::resolve_rva(0x04786858)); }
    namespace FlutteringShotDownBehaviour_HitState { IL2CPP_MODLOADER_DLLEXPORT ::app::FlutteringShotDownBehaviour_HitState__Class** type_info = (::app::FlutteringShotDownBehaviour_HitState__Class**)(modloader::win::memory::resolve_rva(0x0475DAD8)); }
    namespace FlutteringShotDownBehaviour_FallState { IL2CPP_MODLOADER_DLLEXPORT ::app::FlutteringShotDownBehaviour_FallState__Class** type_info = (::app::FlutteringShotDownBehaviour_FallState__Class**)(modloader::win::memory::resolve_rva(0x04768C60)); }
    namespace FlutteringShotDownBehaviour_LandState { IL2CPP_MODLOADER_DLLEXPORT ::app::FlutteringShotDownBehaviour_LandState__Class** type_info = (::app::FlutteringShotDownBehaviour_LandState__Class**)(modloader::win::memory::resolve_rva(0x0470E8E8)); }
    namespace FlutteringShotDownBehaviour_c { IL2CPP_MODLOADER_DLLEXPORT ::app::FlutteringShotDownBehaviour_c__Class** type_info = (::app::FlutteringShotDownBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x0477C318)); }
    namespace FlutteringSlamBehaviour_StartState { IL2CPP_MODLOADER_DLLEXPORT ::app::FlutteringSlamBehaviour_StartState__Class** type_info = (::app::FlutteringSlamBehaviour_StartState__Class**)(modloader::win::memory::resolve_rva(0x0471C3A0)); }
    namespace FlutteringSlamBehaviour_LoopState { IL2CPP_MODLOADER_DLLEXPORT ::app::FlutteringSlamBehaviour_LoopState__Class** type_info = (::app::FlutteringSlamBehaviour_LoopState__Class**)(modloader::win::memory::resolve_rva(0x047355D0)); }
    namespace FlutteringSlamBehaviour_EndState { IL2CPP_MODLOADER_DLLEXPORT ::app::FlutteringSlamBehaviour_EndState__Class** type_info = (::app::FlutteringSlamBehaviour_EndState__Class**)(modloader::win::memory::resolve_rva(0x04703238)); }
    namespace FlutteringSlamBehaviour_c { IL2CPP_MODLOADER_DLLEXPORT ::app::FlutteringSlamBehaviour_c__Class** type_info = (::app::FlutteringSlamBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04733F38)); }
    namespace FlutteringTakeOffBehaviour_States { IL2CPP_MODLOADER_DLLEXPORT ::app::FlutteringTakeOffBehaviour_States__Class** type_info = (::app::FlutteringTakeOffBehaviour_States__Class**)(modloader::win::memory::resolve_rva(0x04787760)); }
    namespace FlutteringTakeOffBehaviour_TurnStartState { IL2CPP_MODLOADER_DLLEXPORT ::app::FlutteringTakeOffBehaviour_TurnStartState__Class** type_info = (::app::FlutteringTakeOffBehaviour_TurnStartState__Class**)(modloader::win::memory::resolve_rva(0x04761318)); }
    namespace FlutteringTakeOffBehaviour_StartState { IL2CPP_MODLOADER_DLLEXPORT ::app::FlutteringTakeOffBehaviour_StartState__Class** type_info = (::app::FlutteringTakeOffBehaviour_StartState__Class**)(modloader::win::memory::resolve_rva(0x0471B238)); }
    namespace FlutteringTakeOffBehaviour_LoopState { IL2CPP_MODLOADER_DLLEXPORT ::app::FlutteringTakeOffBehaviour_LoopState__Class** type_info = (::app::FlutteringTakeOffBehaviour_LoopState__Class**)(modloader::win::memory::resolve_rva(0x0475B9F0)); }
    namespace FlutteringTakeOffBehaviour_EndState { IL2CPP_MODLOADER_DLLEXPORT ::app::FlutteringTakeOffBehaviour_EndState__Class** type_info = (::app::FlutteringTakeOffBehaviour_EndState__Class**)(modloader::win::memory::resolve_rva(0x04757A60)); }
    namespace FlutteringTakeOffBehaviour_c { IL2CPP_MODLOADER_DLLEXPORT ::app::FlutteringTakeOffBehaviour_c__Class** type_info = (::app::FlutteringTakeOffBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04705BD8)); }
    namespace RammingBehaviour_TurnChargeSlamState { IL2CPP_MODLOADER_DLLEXPORT ::app::RammingBehaviour_TurnChargeSlamState__Class** type_info = (::app::RammingBehaviour_TurnChargeSlamState__Class**)(modloader::win::memory::resolve_rva(0x0473A910)); }
    namespace RammingBehaviour_ChargeSlamState { IL2CPP_MODLOADER_DLLEXPORT ::app::RammingBehaviour_ChargeSlamState__Class** type_info = (::app::RammingBehaviour_ChargeSlamState__Class**)(modloader::win::memory::resolve_rva(0x0474D660)); }
    namespace RammingBehaviour_ChaseState { IL2CPP_MODLOADER_DLLEXPORT ::app::RammingBehaviour_ChaseState__Class** type_info = (::app::RammingBehaviour_ChaseState__Class**)(modloader::win::memory::resolve_rva(0x0473A7C0)); }
    namespace RammingBehaviour_ExhaustState { IL2CPP_MODLOADER_DLLEXPORT ::app::RammingBehaviour_ExhaustState__Class** type_info = (::app::RammingBehaviour_ExhaustState__Class**)(modloader::win::memory::resolve_rva(0x04791B98)); }
    namespace RammingBehaviour_KnockbackState { IL2CPP_MODLOADER_DLLEXPORT ::app::RammingBehaviour_KnockbackState__Class** type_info = (::app::RammingBehaviour_KnockbackState__Class**)(modloader::win::memory::resolve_rva(0x0471E660)); }
    namespace RammingBehaviour_c { IL2CPP_MODLOADER_DLLEXPORT ::app::RammingBehaviour_c__Class** type_info = (::app::RammingBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x047623E8)); }
    namespace SkeetoLocomotion_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SkeetoLocomotion_c__Class** type_info = (::app::SkeetoLocomotion_c__Class**)(modloader::win::memory::resolve_rva(0x04718680)); }
    namespace TentacleStabBehaviour_TentacleAttack { IL2CPP_MODLOADER_DLLEXPORT ::app::TentacleStabBehaviour_TentacleAttack__Class** type_info = (::app::TentacleStabBehaviour_TentacleAttack__Class**)(modloader::win::memory::resolve_rva(0x047628B0)); }
    namespace TentaclePhysicsPostprocess { IL2CPP_MODLOADER_DLLEXPORT ::app::TentaclePhysicsPostprocess__Class** type_info = (::app::TentaclePhysicsPostprocess__Class**)(modloader::win::memory::resolve_rva(0x04709D00)); }
    namespace TentacleSpawnBehaviour { IL2CPP_MODLOADER_DLLEXPORT ::app::TentacleSpawnBehaviour__Class** type_info = (::app::TentacleSpawnBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0471C6F0)); }
    namespace TentacleStabBehaviour { IL2CPP_MODLOADER_DLLEXPORT ::app::TentacleStabBehaviour__Class** type_info = (::app::TentacleStabBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0472BF68)); }
    namespace LizardMeleeAttackBehaviour_c { IL2CPP_MODLOADER_DLLEXPORT ::app::LizardMeleeAttackBehaviour_c__Class** type_info = (::app::LizardMeleeAttackBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x0475FAF8)); }
    namespace TurtleShellRollAttackBehaviourNew_States { IL2CPP_MODLOADER_DLLEXPORT ::app::TurtleShellRollAttackBehaviourNew_States__Class** type_info = (::app::TurtleShellRollAttackBehaviourNew_States__Class**)(modloader::win::memory::resolve_rva(0x04715C20)); }
    namespace TurtleShellRollAttackBehaviourNew_StartRollState { IL2CPP_MODLOADER_DLLEXPORT ::app::TurtleShellRollAttackBehaviourNew_StartRollState__Class** type_info = (::app::TurtleShellRollAttackBehaviourNew_StartRollState__Class**)(modloader::win::memory::resolve_rva(0x04760A88)); }
    namespace TurtleShellRollAttackBehaviourNew_RollLoopState { IL2CPP_MODLOADER_DLLEXPORT ::app::TurtleShellRollAttackBehaviourNew_RollLoopState__Class** type_info = (::app::TurtleShellRollAttackBehaviourNew_RollLoopState__Class**)(modloader::win::memory::resolve_rva(0x0478CA58)); }
    namespace TurtleShellRollAttackBehaviourNew_EndRollState { IL2CPP_MODLOADER_DLLEXPORT ::app::TurtleShellRollAttackBehaviourNew_EndRollState__Class** type_info = (::app::TurtleShellRollAttackBehaviourNew_EndRollState__Class**)(modloader::win::memory::resolve_rva(0x04733910)); }
    namespace WandererHandRewardBehaviour_c { IL2CPP_MODLOADER_DLLEXPORT ::app::WandererHandRewardBehaviour_c__Class** type_info = (::app::WandererHandRewardBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x0474C7F0)); }
    namespace HDRUtils { IL2CPP_MODLOADER_DLLEXPORT ::app::HDRUtils__Class** type_info = (::app::HDRUtils__Class**)(modloader::win::memory::resolve_rva(0x04774BD8)); }
    namespace IAnimationMontageEventHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::IAnimationMontageEventHandler__Class** type_info = (::app::IAnimationMontageEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04746570)); }
    namespace DamageReceiver_c { IL2CPP_MODLOADER_DLLEXPORT ::app::DamageReceiver_c__Class** type_info = (::app::DamageReceiver_c__Class**)(modloader::win::memory::resolve_rva(0x04736F30)); }
    namespace IHitStopReceiver { IL2CPP_MODLOADER_DLLEXPORT ::app::IHitStopReceiver__Class** type_info = (::app::IHitStopReceiver__Class**)(modloader::win::memory::resolve_rva(0x0477EBF8)); }
    namespace HitStop { IL2CPP_MODLOADER_DLLEXPORT ::app::HitStop__Class** type_info = (::app::HitStop__Class**)(modloader::win::memory::resolve_rva(0x04719EC8)); }
    namespace HitStop_Entry { IL2CPP_MODLOADER_DLLEXPORT ::app::HitStop_Entry__Class** type_info = (::app::HitStop_Entry__Class**)(modloader::win::memory::resolve_rva(0x0478CA60)); }
    namespace Brain_c { IL2CPP_MODLOADER_DLLEXPORT ::app::Brain_c__Class** type_info = (::app::Brain_c__Class**)(modloader::win::memory::resolve_rva(0x047550E0)); }
    namespace CustomGizmo { IL2CPP_MODLOADER_DLLEXPORT ::app::CustomGizmo__Class** type_info = (::app::CustomGizmo__Class**)(modloader::win::memory::resolve_rva(0x0477DE58)); }
    namespace MoonGizmos { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonGizmos__Class** type_info = (::app::MoonGizmos__Class**)(modloader::win::memory::resolve_rva(0x0478C538)); }
    namespace IGizmo { IL2CPP_MODLOADER_DLLEXPORT ::app::IGizmo__Class** type_info = (::app::IGizmo__Class**)(modloader::win::memory::resolve_rva(0x04772D08)); }
    namespace PetrifiedOwlDoubleClawBehaviour { IL2CPP_MODLOADER_DLLEXPORT ::app::PetrifiedOwlDoubleClawBehaviour__Class** type_info = (::app::PetrifiedOwlDoubleClawBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0472D988)); }
    namespace PetrifiedOwlSingleClawBehaviour { IL2CPP_MODLOADER_DLLEXPORT ::app::PetrifiedOwlSingleClawBehaviour__Class** type_info = (::app::PetrifiedOwlSingleClawBehaviour__Class**)(modloader::win::memory::resolve_rva(0x047816F8)); }
    namespace Entity_c { IL2CPP_MODLOADER_DLLEXPORT ::app::Entity_c__Class** type_info = (::app::Entity_c__Class**)(modloader::win::memory::resolve_rva(0x04789F30)); }
    namespace EntityDeathEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::EntityDeathEvent__Class** type_info = (::app::EntityDeathEvent__Class**)(modloader::win::memory::resolve_rva(0x04727390)); }
    namespace EntityKickbackEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::EntityKickbackEvent__Class** type_info = (::app::EntityKickbackEvent__Class**)(modloader::win::memory::resolve_rva(0x047369B8)); }
    namespace LocomotionGoal_c { IL2CPP_MODLOADER_DLLEXPORT ::app::LocomotionGoal_c__Class** type_info = (::app::LocomotionGoal_c__Class**)(modloader::win::memory::resolve_rva(0x0475D3E0)); }
    namespace Locomotion_StateTransitionEntry__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Locomotion_StateTransitionEntry__Array__Class** type_info = (::app::Locomotion_StateTransitionEntry__Array__Class**)(modloader::win::memory::resolve_rva(0x04787098)); }
    namespace Locomotion_c_DisplayClass85_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::Locomotion_c_DisplayClass85_0__Class** type_info = (::app::Locomotion_c_DisplayClass85_0__Class**)(modloader::win::memory::resolve_rva(0x0475EC80)); }
    namespace Vitals_DamageProcessHelper_c { IL2CPP_MODLOADER_DLLEXPORT ::app::Vitals_DamageProcessHelper_c__Class** type_info = (::app::Vitals_DamageProcessHelper_c__Class**)(modloader::win::memory::resolve_rva(0x04708740)); }
    namespace Vitals_c { IL2CPP_MODLOADER_DLLEXPORT ::app::Vitals_c__Class** type_info = (::app::Vitals_c__Class**)(modloader::win::memory::resolve_rva(0x0477BE20)); }
    namespace ExecutionOrderMap { IL2CPP_MODLOADER_DLLEXPORT ::app::ExecutionOrderMap__Class** type_info = (::app::ExecutionOrderMap__Class**)(modloader::win::memory::resolve_rva(0x04774530)); }
    namespace FlameSpark { IL2CPP_MODLOADER_DLLEXPORT ::app::FlameSpark__Class** type_info = (::app::FlameSpark__Class**)(modloader::win::memory::resolve_rva(0x0475CA90)); }
    namespace Flammable_c { IL2CPP_MODLOADER_DLLEXPORT ::app::Flammable_c__Class** type_info = (::app::Flammable_c__Class**)(modloader::win::memory::resolve_rva(0x0475A148)); }
    namespace CrossSceneDependencyDatabase { IL2CPP_MODLOADER_DLLEXPORT ::app::CrossSceneDependencyDatabase__Class** type_info = (::app::CrossSceneDependencyDatabase__Class**)(modloader::win::memory::resolve_rva(0x04774098)); }
    namespace CageTextureMaker { IL2CPP_MODLOADER_DLLEXPORT ::app::CageTextureMaker__Class** type_info = (::app::CageTextureMaker__Class**)(modloader::win::memory::resolve_rva(0x0471C9D8)); }
    namespace WaterFall_WaterLine { IL2CPP_MODLOADER_DLLEXPORT ::app::WaterFall_WaterLine__Class** type_info = (::app::WaterFall_WaterLine__Class**)(modloader::win::memory::resolve_rva(0x04793888)); }
    namespace WaterFall_WaterLine_Point { IL2CPP_MODLOADER_DLLEXPORT ::app::WaterFall_WaterLine_Point__Class** type_info = (::app::WaterFall_WaterLine_Point__Class**)(modloader::win::memory::resolve_rva(0x0470D6B0)); }
    namespace WaterFallMask_WaterLineGroup { IL2CPP_MODLOADER_DLLEXPORT ::app::WaterFallMask_WaterLineGroup__Class** type_info = (::app::WaterFallMask_WaterLineGroup__Class**)(modloader::win::memory::resolve_rva(0x04720610)); }
    namespace WaterFallMask_WaterLineInterruption { IL2CPP_MODLOADER_DLLEXPORT ::app::WaterFallMask_WaterLineInterruption__Class** type_info = (::app::WaterFallMask_WaterLineInterruption__Class**)(modloader::win::memory::resolve_rva(0x04755CB0)); }
    namespace IWaterfallInteractionAgent { IL2CPP_MODLOADER_DLLEXPORT ::app::IWaterfallInteractionAgent__Class** type_info = (::app::IWaterfallInteractionAgent__Class**)(modloader::win::memory::resolve_rva(0x047028E0)); }
    namespace WaterFallMasksSystem { IL2CPP_MODLOADER_DLLEXPORT ::app::WaterFallMasksSystem__Class** type_info = (::app::WaterFallMasksSystem__Class**)(modloader::win::memory::resolve_rva(0x0473BCC0)); }
    namespace WaterFallMask__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::WaterFallMask__Array__Class** type_info = (::app::WaterFallMask__Array__Class**)(modloader::win::memory::resolve_rva(0x0475D3D8)); }
    namespace WaterFallMasksSystem_TimeslicedInit_d_27 { IL2CPP_MODLOADER_DLLEXPORT ::app::WaterFallMasksSystem_TimeslicedInit_d_27__Class** type_info = (::app::WaterFallMasksSystem_TimeslicedInit_d_27__Class**)(modloader::win::memory::resolve_rva(0x04738390)); }
    namespace NanoProfilerDataProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::NanoProfilerDataProvider__Class** type_info = (::app::NanoProfilerDataProvider__Class**)(modloader::win::memory::resolve_rva(0x04750040)); }
    namespace SceneLoadingTest_Context { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneLoadingTest_Context__Class** type_info = (::app::SceneLoadingTest_Context__Class**)(modloader::win::memory::resolve_rva(0x04738E68)); }
    namespace SceneLoadingTest_Stats { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneLoadingTest_Stats__Class** type_info = (::app::SceneLoadingTest_Stats__Class**)(modloader::win::memory::resolve_rva(0x04757240)); }
    namespace SceneLoadingTest_GatherStatsScope { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneLoadingTest_GatherStatsScope__Class** type_info = (::app::SceneLoadingTest_GatherStatsScope__Class**)(modloader::win::memory::resolve_rva(0x0470ED30)); }
    namespace SceneLoadingTest_LoadEmptySceneCoroutine_d_18 { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneLoadingTest_LoadEmptySceneCoroutine_d_18__Class** type_info = (::app::SceneLoadingTest_LoadEmptySceneCoroutine_d_18__Class**)(modloader::win::memory::resolve_rva(0x0476CA48)); }
    namespace SceneLoadingTest_c_DisplayClass19_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneLoadingTest_c_DisplayClass19_0__Class** type_info = (::app::SceneLoadingTest_c_DisplayClass19_0__Class**)(modloader::win::memory::resolve_rva(0x04727C80)); }
    namespace SceneLoadingTest_c_DisplayClass22_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneLoadingTest_c_DisplayClass22_0__Class** type_info = (::app::SceneLoadingTest_c_DisplayClass22_0__Class**)(modloader::win::memory::resolve_rva(0x047772F0)); }
    namespace CrashContext_Callback { IL2CPP_MODLOADER_DLLEXPORT ::app::CrashContext_Callback__Class** type_info = (::app::CrashContext_Callback__Class**)(modloader::win::memory::resolve_rva(0x04723E40)); }
    namespace TimeSlicedActivationTask_TimeSlicedActivation_d_25 { IL2CPP_MODLOADER_DLLEXPORT ::app::TimeSlicedActivationTask_TimeSlicedActivation_d_25__Class** type_info = (::app::TimeSlicedActivationTask_TimeSlicedActivation_d_25__Class**)(modloader::win::memory::resolve_rva(0x0474B460)); }
    namespace TimeSlicedHeirarchyEnablingTask { IL2CPP_MODLOADER_DLLEXPORT ::app::TimeSlicedHeirarchyEnablingTask__Class** type_info = (::app::TimeSlicedHeirarchyEnablingTask__Class**)(modloader::win::memory::resolve_rva(0x04713BF0)); }
    namespace TimeSlicedHeirarchyEnablingTask_TimeSlicedEnable_d_6 { IL2CPP_MODLOADER_DLLEXPORT ::app::TimeSlicedHeirarchyEnablingTask_TimeSlicedEnable_d_6__Class** type_info = (::app::TimeSlicedHeirarchyEnablingTask_TimeSlicedEnable_d_6__Class**)(modloader::win::memory::resolve_rva(0x0472C678)); }
    namespace TimeSlicedHierarchyDisablingTask_TimeSlicedDisable_d_2 { IL2CPP_MODLOADER_DLLEXPORT ::app::TimeSlicedHierarchyDisablingTask_TimeSlicedDisable_d_2__Class** type_info = (::app::TimeSlicedHierarchyDisablingTask_TimeSlicedDisable_d_2__Class**)(modloader::win::memory::resolve_rva(0x0476FD90)); }
    namespace TimesliceResourceDestroyTask { IL2CPP_MODLOADER_DLLEXPORT ::app::TimesliceResourceDestroyTask__Class** type_info = (::app::TimesliceResourceDestroyTask__Class**)(modloader::win::memory::resolve_rva(0x04755208)); }
    namespace TimesliceResourceDestroyTask_TimeslicedDestroy_d_10 { IL2CPP_MODLOADER_DLLEXPORT ::app::TimesliceResourceDestroyTask_TimeslicedDestroy_d_10__Class** type_info = (::app::TimesliceResourceDestroyTask_TimeslicedDestroy_d_10__Class**)(modloader::win::memory::resolve_rva(0x04775550)); }
    namespace TimesliceResourceUnloadTask { IL2CPP_MODLOADER_DLLEXPORT ::app::TimesliceResourceUnloadTask__Class** type_info = (::app::TimesliceResourceUnloadTask__Class**)(modloader::win::memory::resolve_rva(0x0470E3D8)); }
    namespace TimesliceResourceUnloadTask_TimeslicedUnload_d_10 { IL2CPP_MODLOADER_DLLEXPORT ::app::TimesliceResourceUnloadTask_TimeslicedUnload_d_10__Class** type_info = (::app::TimesliceResourceUnloadTask_TimeslicedUnload_d_10__Class**)(modloader::win::memory::resolve_rva(0x0474A060)); }
    namespace TimesliceSceneUnloadTask_TimeslicedUnload_d_14 { IL2CPP_MODLOADER_DLLEXPORT ::app::TimesliceSceneUnloadTask_TimeslicedUnload_d_14__Class** type_info = (::app::TimesliceSceneUnloadTask_TimeslicedUnload_d_14__Class**)(modloader::win::memory::resolve_rva(0x04774090)); }
    namespace TimeSliceSystem { IL2CPP_MODLOADER_DLLEXPORT ::app::TimeSliceSystem__Class** type_info = (::app::TimeSliceSystem__Class**)(modloader::win::memory::resolve_rva(0x0475CD80)); }
    namespace NanoProfiler { IL2CPP_MODLOADER_DLLEXPORT ::app::NanoProfiler__Class** type_info = (::app::NanoProfiler__Class**)(modloader::win::memory::resolve_rva(0x04700EC8)); }
    namespace NanoProfiler_c { IL2CPP_MODLOADER_DLLEXPORT ::app::NanoProfiler_c__Class** type_info = (::app::NanoProfiler_c__Class**)(modloader::win::memory::resolve_rva(0x0474A7B8)); }
    namespace DataPointType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::DataPointType__Enum__Class** type_info = (::app::DataPointType__Enum__Class**)(modloader::win::memory::resolve_rva(0x047482B8)); }
    namespace DataPoint { IL2CPP_MODLOADER_DLLEXPORT ::app::DataPoint__Class** type_info = (::app::DataPoint__Class**)(modloader::win::memory::resolve_rva(0x0473FBC8)); }
}
