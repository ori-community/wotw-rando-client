#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LaserShieldRotationController.h>
#include <Modloader/app/structs/LaserShooterMinibossEntity.h>
#include <Modloader/app/structs/LaserShooterMinibossPathMover.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/LaserShooterMinibossPath.h>
#include <Modloader/app/structs/List_1_LaserShooterRockSpawnPoint_.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/Tuple_2_UnityEngine_GameObject_Moon_UberTransformFollow_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::LaserShooterMinibossEntity {
    IL2CPP_REGISTER_METHOD(0x00F189C0, app::LaserShieldRotationController*, get_ShieldController, (app::LaserShooterMinibossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F189D0, app::LaserShooterMinibossPathMover*, get_PathMover, (app::LaserShooterMinibossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F189E0, int32_t, get_CurrentBeamCount, (app::LaserShooterMinibossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F189F0, void, set_CurrentBeamCount, (app::LaserShooterMinibossEntity * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00F18A00, app::Vector3, get_AccumulatedForce, (app::LaserShooterMinibossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F18A20, void, set_AccumulatedForce, (app::LaserShooterMinibossEntity * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UseDeathLoopTimeLimit, (app::LaserShooterMinibossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F18A40, bool, get_ShouldApplySpawnPopFix, (app::LaserShooterMinibossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F18AE0, float, get_PercentageOfShieldDestroyed, (app::LaserShooterMinibossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F18C50, int32_t, get_DesiredPhase, (app::LaserShooterMinibossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F18C60, bool, get_IsOriAlive, (app::LaserShooterMinibossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F18D60, float, get_RandomValue, (app::LaserShooterMinibossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096CB80, app::LaserShooterMinibossPath*, get_Paths, (app::LaserShooterMinibossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F18E60, void, set_Paths, (app::LaserShooterMinibossEntity * this_ptr, app::LaserShooterMinibossPath* value))
    IL2CPP_REGISTER_METHOD(0x00F18E70, app::List_1_LaserShooterRockSpawnPoint_*, get_RockSpawnPositions, (app::LaserShooterMinibossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F18E80, void, set_RockSpawnPositions, (app::LaserShooterMinibossEntity * this_ptr, app::List_1_LaserShooterRockSpawnPoint_* value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanOptimizeBehaviourTreeEvaluation, (app::LaserShooterMinibossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldShowHealthBar, (app::LaserShooterMinibossEntity * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04762F70, LaserShooterMinibossEntity_ShouldShowHealthBar__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F18E90, void, OnAwake, (app::LaserShooterMinibossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F18F70, void, OnFixedUpdate, (app::LaserShooterMinibossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F19210, void, UpdateCanGlowHit, (app::LaserShooterMinibossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F19260, void, OnEnable, (app::LaserShooterMinibossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F195C0, void, OnDisable, (app::LaserShooterMinibossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F19670, void, OnDied, (app::LaserShooterMinibossEntity * this_ptr, app::DamageResult result))
    IL2CPP_REGISTER_METHOD(0x00F19860, void, ResetEntity, (app::LaserShooterMinibossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F199E0, void, OnCacheSerializedComponents, (app::LaserShooterMinibossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F19AE0, void, UnserializedInitialization, (app::LaserShooterMinibossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F19DE0, void, ResolveDamage, (app::LaserShooterMinibossEntity * this_ptr, app::DamageResult* damage_result))
    IL2CPP_REGISTER_METHOD(0x00F19E70, void, SetBeamCount, (app::LaserShooterMinibossEntity * this_ptr, int32_t beam_count))
    IL2CPP_REGISTER_METHOD(0x00F1A2A0, void, SetBeamsActive, (app::LaserShooterMinibossEntity * this_ptr, bool active))
    IL2CPP_REGISTER_METHOD(0x00F1A3E0, void, SetShieldOpening, (app::LaserShooterMinibossEntity * this_ptr, float strength))
    IL2CPP_REGISTER_METHOD(0x00F1A410, void, ProcessInnerForces, (app::LaserShooterMinibossEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00F1A6C0, app::Vector3, GetSelfSpringOffset, (app::LaserShooterMinibossEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00F1A9D0, app::Tuple_2_UnityEngine_GameObject_Moon_UberTransformFollow_*, SpawnFollowingEffect, (app::GameObject * prefab, app::Transform* follow_target))
    IL2CPP_REGISTER_METHOD(0x00F1ADF0, void, ctor, (app::LaserShooterMinibossEntity * this_ptr))
} // namespace app::classes::LaserShooterMinibossEntity
