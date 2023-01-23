#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SpiderBossEntity_SpiderFightState__Enum.h>
#include <Modloader/app/structs/SpiderBossEntity.h>
#include <Modloader/app/structs/List_1_SpiderBossBaseBehaviour_.h>
#include <Modloader/app/structs/SpiderBossBaseBehaviour.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/SpiderBossLocomotion.h>
#include <Modloader/app/structs/SpiderBossLocationZone__Enum.h>
#include <Modloader/app/structs/SpiderBossBehaviourZone__Enum.h>
#include <Modloader/app/structs/List_1_SpiderBossBehaviourZone_.h>
#include <Modloader/app/structs/CageStructureMetaDataGroup.h>
#include <Modloader/app/structs/List_1_SpiderBossLocationZone_.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>

namespace app::classes::SpiderBossEntity {
    IL2CPP_REGISTER_METHOD(0x0096C1B0, app::SpiderBossEntity_SpiderFightState__Enum, get_CurrentUberState, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096C1E0, float, get_HealthToTransitionToBreakWall, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096C220, float, get_HealthToTransitionToEscape, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096C260, float, get_HealthToTransitionToDarkness, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096C2A0, float, get_HealthToTransitionToEnd, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanOptimizeBehaviourTreeEvaluation, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UseDeathLoopTimeLimit, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005ACE90, app::List_1_SpiderBossBaseBehaviour_*, get_ExecutingBehaviours, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00956A60, app::SpiderBossBaseBehaviour*, get_LastBehaviour, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096C2E0, float, get_TimeSinceLastSpecialAttack, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004A3B00, float, get_TimeSinceLastHitReact, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096C2F0, float, get_DamageRequiredForStagger, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096C370, bool, CanHitReact, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_TimescaleMultiplier, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096C3B0, float, get_LookDirection, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096C3E0, void, set_LookDirection, (app::SpiderBossEntity * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0096C490, app::Vector3, get_ClawAttackDirection, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_SpiderBossTimescaleMultiplier, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096C590, bool, get_FacesOri, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096C7C0, bool, get_AcidAttackAllowed, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SpitAttackAllowed, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096C7C0, bool, get_ShakeLocation, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096C7F0, bool, get_IsFighting, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096C850, app::Vector3, get_EntityPosition, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldSmushAttackSpawnShockwave, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096C7C0, bool, get_BrokeArena1Wall, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096C8E0, bool, get_ReachedArena2, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096C910, int32_t, get_NumberOfAllowedZonesInDirection, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldDescentFromLaserSpawnShockwave, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096CA40, float, get_UtilityFactorForBiteAttack, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096CB80, app::GameObject*, get_TalonImpactEffectPrefab, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096CB90, app::Transform*, get_FrontLeftLegGround2D, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096CBA0, app::Transform*, get_FrontRightLegGround2D, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096CBB0, app::Transform*, get_SmushPosition2D, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096CBC0, app::SpiderBossLocomotion*, get_SpiderLocomotion, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096CC80, app::Vector3, get_TargetPosition, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096CDA0, float, get_DistanceToCharacterX, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096CF50, float, get_DirectionToCharacterX, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096D100, float, get_SpecialAttackUtilityMultiplier, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096D180, void, OnCacheSerializedComponents, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096D240, void, OnAwake, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096D5F0, void, OnDestroy, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096D6C0, void, InitializeBehaviours, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096D760, void, ResetEntity, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDied, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096DAA0, void, OnPostRestoreCheckpoint, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096DC30, void, CreateCheckpointWithFullStats, (app::SpiderBossEntity * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x0096DE70, void, CreateCheckpoint, (app::SpiderBossEntity * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x0096DFB0, void, OnEnable, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096E160, void, OnDisable, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096E210, bool, ShouldShowHealthBar, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04780360, SpiderBossEntity_ShouldShowHealthBar__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0096E250, void, Start, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096E540, void, OnFixedUpdate, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096ECE0, void, UpdateLaserAiming, (app::SpiderBossEntity * this_ptr, float angle))
    IL2CPP_REGISTER_METHOD(0x0096EFC0, void, UpdateLegPositionTransforms, (app::SpiderBossEntity * this_ptr, app::Transform* leg_position, app::Transform* leg_position2_d, app::Transform* leg_ground_position2_d, app::Transform* knee_position))
    IL2CPP_REGISTER_METHOD(0x0096F480, void, OnHitReacted, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096F490, void, OnSpiderBaseBehaviourEntered, (app::SpiderBossEntity * this_ptr, app::SpiderBossBaseBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x0096F540, void, OnSpiderBaseBehaviourExited, (app::SpiderBossEntity * this_ptr, app::SpiderBossBaseBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x0096F770, float, TimeSinceLastSpecialBehavior, (app::SpiderBossEntity * this_ptr, app::SpiderBossBaseBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x0096F880, app::SpiderBossLocationZone__Enum, GetCurrentZone, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096F8E0, app::SpiderBossLocationZone__Enum, GetCurrentZoneNoOverride, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096F980, app::SpiderBossLocationZone__Enum, GetLocationZoneForPosition, (app::SpiderBossEntity * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x0096FCC0, app::SpiderBossBehaviourZone__Enum, GetBehaviourZoneForTarget, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096FE60, app::SpiderBossBehaviourZone__Enum, GetBehaviourZoneForPosition, (app::SpiderBossEntity * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x0096FF30, app::List_1_SpiderBossBehaviourZone_*, GetBehaviourZonesForPosition, (app::SpiderBossEntity * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00970140, app::CageStructureMetaDataGroup*, GetMetaGroup, (app::SpiderBossEntity * this_ptr, app::SpiderBossLocationZone__Enum current_zone, float look_direction))
    IL2CPP_REGISTER_METHOD(0x009701F0, app::List_1_SpiderBossLocationZone_*, GetAllowedZones, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009703A0, void, OnDamageReceived, (app::SpiderBossEntity * this_ptr, app::DamageResult result))
    IL2CPP_REGISTER_METHOD(0x00970C40, void, HandleDamageForHitReaction, (app::SpiderBossEntity * this_ptr, app::DamageResult result))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Spit, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00970CD0, void, EnableBottomDamageDealers, (app::SpiderBossEntity * this_ptr, bool enable))
    IL2CPP_REGISTER_METHOD(0x00970D00, void, EnablePlatformColliders, (app::SpiderBossEntity * this_ptr, bool enable))
    IL2CPP_REGISTER_METHOD(0x00970D30, void, TryTransitionToArena1ReachedPhase, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00970E50, void, OnEscapeCinematicEnded, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00970F20, void, ApplyCombatPhaseStartConditions, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00971140, void, ApplyCinematicBehaviourIfNeeded, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009713C0, void, Apply, (app::SpiderBossEntity * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x009713E0, app::IUberState__Array*, get_AffectingUberStates, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00971470, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::SpiderBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00971630, void, ctor, (app::SpiderBossEntity * this_ptr))
} // namespace app::classes::SpiderBossEntity
