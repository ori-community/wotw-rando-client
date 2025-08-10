#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AirEntityLocomotion.h>
#include <Modloader/app/structs/BaseNPC.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/BehaviourTree.h>
#include <Modloader/app/structs/CameraTargetData.h>
#include <Modloader/app/structs/CameraTargetType__Enum.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageDealer__Array.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/DropSlugLocomotion.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityBehaviourNode.h>
#include <Modloader/app/structs/EntityEvent.h>
#include <Modloader/app/structs/EntityPlaceholder.h>
#include <Modloader/app/structs/EntityReactions.h>
#include <Modloader/app/structs/EntityTask.h>
#include <Modloader/app/structs/EntityTask__Array.h>
#include <Modloader/app/structs/Entity_EntityState__Enum.h>
#include <Modloader/app/structs/FrogGroundLocomotion.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/GroundPatrolBehaviourNew.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IEntityLocomotion.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/INavigationAgent.h>
#include <Modloader/app/structs/ITask.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_ITask_.h>
#include <Modloader/app/structs/List_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/NavigationType__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RecordableParsingGroup__Enum.h>
#include <Modloader/app/structs/SandWormLocomotion.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/Sensor.h>
#include <Modloader/app/structs/SkeetoLocomotion.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SpiderlingLocomotion.h>
#include <Modloader/app/structs/SpikeSlugLocomotion.h>
#include <Modloader/app/structs/StaticEntityLocomotion.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/SwimmingLocomotion.h>
#include <Modloader/app/structs/TrackingExclusions.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/TurningBehaviour.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/UpdateType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/VirtualClipsBuilder.h>
#include <Modloader/app/structs/Vitals.h>
#include <Modloader/app/structs/VolumeEntityLocomotion.h>

namespace app::classes::Moon::Entity {
    IL2CPP_REGISTER_METHOD(0x006FB810, int64_t, get_PlaceholderID, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FB820, void, set_PlaceholderID, app::Entity* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x006FB810, int64_t, get_ExternalID, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C0CBA0, bool, get_IsSuspended, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01211590, void, set_IsSuspended, app::Entity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00949D10, app::SuspendableMask__Enum, get_Mask, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012115A0, void, set_Mask, app::Entity* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00A79450, bool, get_HasStarted, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A79460, void, set_HasStarted, app::Entity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanOptimizeBehaviourTreeEvaluation, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A64220, app::EntityTask__Array*, get_Tasks, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A64240, app::List_1_Moon_BehaviourSystem_ITask_*, get_ExecutingTasks, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01211660, app::Entity_EntityState__Enum, get_CurrentEntityState, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A63A0, app::INavigationAgent*, get_NavigationAgent, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01211670, app::NavigationType__Enum, get_CurrentAreaType, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012117F0, app::Vector3, get_NavigationAgentPosition, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012118F0, float, get_NavigationAgentFeetOffsetY, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01211A00, void, set_PlaySpawnTask, app::Entity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00A79470, app::SoundHost*, get_SoundHost, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01211A10, bool, get_HasVitals, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01211A20, void, set_HasVitals, app::Entity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01211A30, app::Vitals*, get_Vitals, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01211B50, bool, get_HasSensor, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01211B60, void, set_HasSensor, app::Entity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01211B70, app::Sensor*, get_Sensor, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::ITask*, get_LastTask, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01211C90, bool, IsPositionInsideAllowedAreaOrNoBounds, app::Entity* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x01211D10, bool, IsPositionInsidePatrolAreaOrNoBounds, app::Entity* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x005E0530, app::MoonAnimator*, get_Animator, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::BehaviourTree*, get_BehaviourTree, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006253D0, app::IEntityLocomotion*, get_Locomotion, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01211DC0, void, set_Locomotion, app::Entity* this_ptr, app::IEntityLocomotion* value)
    IL2CPP_REGISTER_METHOD(0x006C8770, app::BaseNPC*, get_NPC, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01211DD0, void, set_NPC, app::Entity* this_ptr, app::BaseNPC* value)
    IL2CPP_REGISTER_METHOD(0x002FBD40, app::DamageDealer__Array*, get_DamageDealers, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071F210, app::EntityReactions*, get_Reactions, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01211DE0, bool, get_IsLimitedByArea, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01211E80, bool, get_IsFacingTarget, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01211FB0, bool, get_TargetCharacterInsideAllowedZone, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01212060, bool, get_TargetCharacterInsidePatrolZone, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01212100, bool, get_InsideAllowedZone, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012121C0, bool, get_InsidePatrolZone, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012122E0, app::Vector3, get_GroundProjectedPatrolAreaPoint, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01212590, app::Vector3, get_GroundProjectedAllowedAreaPoint, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01212720, app::Vector3, get_SpawnPosition, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, get_EntityGameObject, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_EntityRootPosition, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01212740, bool, get_IsOwnershipFreed, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01212750, void, set_IsOwnershipFreed, app::Entity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00755530, bool, get_IsEntityOnScreen, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01212760, bool, get_IsEntityOnScreenPadded, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IgnoreAllowedZonesIfFreed, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01212770, bool, get_InWater, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01212850, void, TakeDrownDamage, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5BA50, app::String*, get_EntityPlaceholderPath, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01212CE0, void, set_EntityPlaceholderPath, app::Entity* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01212CF0, float, get_ScreenPadding, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01212D00, app::EntityTask*, GetTask_1, app::Entity* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01212DE0, void, ExecuteTask, app::Entity* this_ptr, app::ITask* task, app::Object* executing_object, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01212F00, void, InterruptTask, app::Entity* this_ptr, app::ITask* task, app::Object* executing_object, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01213010, void, InterruptRunningTasks, app::Entity* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01213220, void, InterruptNonReactionTasks, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01213450, void, StopBehaviourTree, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01213550, void, StartBehaviourTree, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01213630, bool, IsBehaviourTreePaused, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01213740, bool, IsReactionPlaying, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01213880, bool, IsLocomotionPaused, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012138C0, void, CacheBehaviourTree, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012139D0, void, InitializeBehaviourTree, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01213B10, app::Locomotion*, GetLocomotion_1, app::Entity* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01213BF0, void, OnValidate, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01213CC0, void, OnEnable, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01213EC0, void, OnDisable, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01214000, void, Prewarm, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01214010, void, OnAwake, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01214810, void, Awake, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01214920, app::BehaviourTree*, GetBehaviourTree, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnCacheSerializedComponents, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012149B0, void, CacheSerializedComponents, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01214FD0, void, InitializeUnserialized, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01215000, void, UnserializedInitialization, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01215210, void, SortOwnedComponents, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01215430, void, Start, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01215450, void, OnDestroy, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01215870, void, Finalize, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012158F0, void, MoonCleanup, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01215B60, void, OnSceneRootPostEnable, app::Entity* this_ptr, app::SceneRoot* scene_root)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdate_1, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnFixedUpdate, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeBehaviourTreeFixedUpdate, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSuspendedStay, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01215B80, void, Update, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01215C90, void, ChangeState, app::Entity* this_ptr, app::Entity_EntityState__Enum new_state)
    IL2CPP_REGISTER_METHOD(0x01215DB0, void, OnUpdate_2, app::Entity* this_ptr, float time_delta)
    IL2CPP_REGISTER_METHOD(0x012162A0, void, EnterSpawningState, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012163A0, void, UpdateSpawningState, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ExitSpawningState, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EnterDecisionMakingState, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01216500, void, UpdateDecisionMakingState, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01216770, void, ExitDecisionMakingState, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EnterReactionState, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01216810, void, UpdateReactionState, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ExitReactionState, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012168F0, void, EnterCinematicState, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01216950, bool, get_InCinematic, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01216960, void, UpdateCinematicState, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01216990, void, ExitCinematicState, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012169E0, void, PlayCinematicAnimation, app::Entity* this_ptr, app::MoonAnimation* animation)
    IL2CPP_REGISTER_METHOD(0x01216A10, void, InterruptCinematicMode, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01216BC0, app::Locomotion*, GetActiveLocomotion, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01216C10, void, LocomotionFixedUpdate, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01216D20, void, UpdateAllLocomotionBehaviours, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01216E00, void, UpdateAllRunningBehaviours, app::Entity* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01216F80, void, CheckIfOutOfBounds, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnContactDamageDealt, app::Entity* this_ptr, app::DamageDealer* dealer, app::DamageResult damage)
    IL2CPP_REGISTER_METHOD(0x01217150, void, PropagateEventToListeners, app::Entity* this_ptr, app::EntityEvent* event_info)
    IL2CPP_REGISTER_METHOD(0x01217240, void, SubmitReaction, app::Entity* this_ptr, app::EntityEvent* reaction_event)
    IL2CPP_REGISTER_METHOD(0x012162A0, void, ExecuteSpawnBehaviour, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012168F0, void, ExecuteCinematicBehaviour, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnHandleFireDamage, app::Entity* this_ptr, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnHandleIceDamage, app::Entity* this_ptr, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDamageReceived, app::Entity* this_ptr, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDamageBlocked, app::Entity* this_ptr, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(0x012173A0, void, DeactivateDamage, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012173D0, void, ActivateDamage, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012173F0, void, ResetDamage, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01217560, void, ResetDamageDealers, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012176D0, void, ActivateDamageDealers, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01217830, void, DeactivateDamageDealers, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01217990, void, ActivateDamageReceivers, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01217B90, void, DeactivateDamageReceivers, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01217D90, void, InstantKill, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01217E50, void, OnDied, app::Entity* this_ptr, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(0x01218270, void, SpawnOrbs, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01218420, void, OnDiedOutOfBounds, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01218750, void, OnEndDeathBehaviour, app::Entity* this_ptr, app::EntityTask* behaviour, app::BehaviourStatus__Enum reason)
    IL2CPP_REGISTER_METHOD(0x01218A40, void, ExecuteDiedDelegate, app::Entity* this_ptr, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(0x01218B50, void, ForgetAreas, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01218B90, void, RememberAreas, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01215B60, void, OnPostRestoreCheckpoint, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01218BD0, void, ResetEntity, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01219040, void, InterruptReactions, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01219110, void, OnSceneUnloaded, app::Entity* this_ptr, app::SceneRoot* scene_root)
    IL2CPP_REGISTER_METHOD(0x012192D0, void, ReclaimOwernship, app::Entity* this_ptr, app::EntityPlaceholder* placeholder)
    IL2CPP_REGISTER_METHOD(0x012195C0, void, FreeOwnership, app::Entity* this_ptr, app::EntityPlaceholder* placeholder)
    IL2CPP_REGISTER_METHOD(0x012197E0, bool, IsOnScreen, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01219A20, bool, IsOnScreenPadded, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD20, app::List_1_Moon_ISuspendable_*, GetHitStopAutoSuspendables, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01219C80, void, InitializeHitStopSuspendables, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnHitStopStart, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnHitStopEnd, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolSpawned, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01219E10, bool, WasBehaviourExecuting, app::Entity* this_ptr, app::EntityTask* behaviour)
    IL2CPP_REGISTER_METHOD(0x01219EB0, void, MoveToPoint, app::Entity* this_ptr, app::Vector3 point, app::EntityBehaviourNode* source)
    IL2CPP_REGISTER_METHOD(0x01219F70, bool, IsFacingPoint, app::Entity* this_ptr, app::Vector2 point)
    IL2CPP_REGISTER_METHOD(0x0121A080, void, ResolveDamage, app::Entity* this_ptr, app::DamageResult* damage_result)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldKillBubble, app::Entity* this_ptr, app::Transform* bubble_transform)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_TrackTranformChangesForRecording, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, app::RecordableParsingGroup__Enum, get_ParsingGroup, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121A260, bool, get_InvalidateParentTimelineCache, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121A270, void, set_InvalidateParentTimelineCache, app::Entity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AddChildren, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121A280, app::TrackingExclusions, get_TrackingExclusions, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CreateTimelineParentEntity, app::Entity* this_ptr, app::VirtualClipsBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x0121A290, bool, get_CameraTargetActive, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121A2E0, app::Vector3, get_CameraTargetPosition, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121A610, app::Vector2, get_CameraTargetPadding, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121A730, float, get_CameraInfluenceMinDist, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121A850, float, get_CameraInfluenceMaxDist, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121A970, app::Vector3, get_CameraInfluencePosition, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121A9B0, app::Vector2, get_CameraZoomFactor, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::CameraTargetType__Enum, get_TargetType, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121A9D0, void, GetTargetData, app::Entity* this_ptr, app::CameraTargetData** data)
    IL2CPP_REGISTER_METHOD(
        0x0121AAD0,
        void,
        AdjustCameraTargetWeight,
        app::Entity* this_ptr,
        float* weight,
        app::CameraTargetData* data,
        app::Vector3 primary_target_position
    )
    IL2CPP_REGISTER_METHOD(0x0121AE50, bool, get_IsAggroed, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121AF70, app::CharacterPlatformMovement*, get_PlatformMovement, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, IPortalVisitor_get_Position, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00736690, void, IPortalVisitor_set_Position, app::Entity* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x0121B050, app::Vector3, IPortalVisitor_get_Speed, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121B150, void, IPortalVisitor_set_Speed, app::Entity* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x00756110, void, OnGoThroughPortal, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPortalOverlapEnter, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPortalOverlapExit, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121B240, void, OnExecutingTasksChanged, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121B260, void, OnTreeNodesChanged, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121B270, bool, get_IsLocomotionPausedByTask, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121B480, bool, get_IsLocomotionPausedByNode, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121B690, void, RefreshReactionBehaviours, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121B860, void, RefreshTasksPausingLocomotion, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121BAB0, void, RefreshNodesPausingLocomotion, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121BE60, void, ctor, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IHitStopReceiver_get_gameObject, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_1, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F15D0, app::Object*, GetTask_2, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F1700, app::Object*, GetTreeBehaviour_1, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F1360, app::Object*, GetLocomotion_2, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F1530, app::Object*, GetNavigation, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F1360, app::AirEntityLocomotion*, GetLocomotion_3, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F1360, app::GroundEntityLocomotion*, GetLocomotion_4, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F1360, app::SpikeSlugLocomotion*, GetLocomotion_5, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F1360, app::DropSlugLocomotion*, GetLocomotion_6, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F1360, app::Locomotion*, GetLocomotion_7, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F1360, app::FrogGroundLocomotion*, GetLocomotion_8, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F1360, app::StaticEntityLocomotion*, GetLocomotion_9, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F15D0, app::TurningBehaviour*, GetTask_3, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F1360, app::SandWormLocomotion*, GetLocomotion_10, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F1360, app::VolumeEntityLocomotion*, GetLocomotion_11, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F1360, app::SwimmingLocomotion*, GetLocomotion_12, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F1360, app::SkeetoLocomotion*, GetLocomotion_13, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F1700, app::GroundPatrolBehaviourNew*, GetTreeBehaviour_2, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F1360, app::SpiderlingLocomotion*, GetLocomotion_14, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_2, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_3, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_4, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_5, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_6, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_7, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_8, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_9, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_10, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_11, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_12, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_13, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_14, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_15, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_16, app::Entity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_17, app::Entity* this_ptr)
} // namespace app::classes::Moon::Entity
