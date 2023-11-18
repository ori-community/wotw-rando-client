#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SandWormEntity.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/DigZone.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityTask.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/NavigationType__Enum.h>
#include <Modloader/app/structs/SandTrail.h>
#include <Modloader/app/structs/SandWormEntity_BodyPhysicsMode__Enum.h>
#include <Modloader/app/structs/SandWormEntity_SandWormBodyAnimation.h>
#include <Modloader/app/structs/SandWormEntity_SandWormBodyWave.h>
#include <Modloader/app/structs/SandWormEntity_SandWormSquetch.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WaterZone.h>

namespace app::classes::SandWormEntity {
    IL2CPP_REGISTER_METHOD(0x00C0C9D0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00C0CB50, int32_t, get_CurrentFrame, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0CBA0, bool, get_IsSuspended, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0CBB0, void, set_IsSuspended, (app::SandWormEntity * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00C0CBD0, bool, get_IsTargetInDigZone, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0CCB0, bool, get_IsTargetInWaterZone, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0CD90, bool, get_IsTargetInWaterAir, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0CE70, bool, get_IsTargetInSameHabitat, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0CFB0, bool, get_IsTargetAbove, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0D180, app::NavigationType__Enum, get_CurrentTailAreaType, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0D300, int32_t, get_SandWormActiveBodyWaveCountPropId, ())
    IL2CPP_REGISTER_METHOD(0x00C0D450, int32_t, get_SandWormActiveSquetchCountPropId, ())
    IL2CPP_REGISTER_METHOD(0x00C0D5A0, int32_t, get_SandWormBodyWaveParamsParamId, ())
    IL2CPP_REGISTER_METHOD(0x00C0D6F0, int32_t, get_SandWormSquetchParamsParamId, ())
    IL2CPP_REGISTER_METHOD(0x00C0D840, bool, get_BodyAnimationPlaying, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0D850, app::SandTrail*, get_Trail, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0D860, float, get_EffectiveHeadRotationSpeed, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0DA60, float, get_EffectiveWidthNoiseAmplitude, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0DB10, float, get_EffectiveNoiseWidthFrequency, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0DBC0, float, get_EffectiveMouthOpenValue, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0DC60, app::SandWormEntity_BodyPhysicsMode__Enum, get_BodyPhysics, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0DC70, void, set_BodyPhysics, (app::SandWormEntity * this_ptr, app::SandWormEntity_BodyPhysicsMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x00C0DC80, app::Transform*, get_HeadTransform, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0DD30, app::Transform*, get_TailTransform, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanBeDamagedBySpikes, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0DDE0, app::Vector3, get_LastSafePosition, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0DE00, bool, get_IsHeadInDigZone, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0DEF0, app::DigZone*, get_HeadCurrentDigZone, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0DFF0, bool, get_IsHeadTopInDigZone, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0E0E0, app::DigZone*, get_HeadTopCurrentDigZone, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0E1E0, bool, get_IsTailInDigZone, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0E2D0, app::DigZone*, get_TailCurrentDigZone, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0E3D0, app::DigZone*, get_CurrentOriDigZone, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0E510, bool, get_IsInWaterZone, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0E5D0, app::WaterZone*, get_CurrentWaterZone, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0E690, bool, get_IsOriInWaterZone, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0E7F0, app::WaterZone*, get_CurrentOriWaterZone, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0E950, void, OnDisable, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0EED0, void, OnEnable, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0F330, void, UpdateBoundingBox, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0F500, void, OnAwake, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0F880, void, OriLandsOnGround, (app::SandWormEntity * this_ptr, app::Vector3 normal, app::Collider* collided_with))
    IL2CPP_REGISTER_METHOD(0x00C0FAF0, void, Start, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C10220, app::Vector3, get_CameraTargetPosition, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C104B0, float, get_CameraInfluenceMinDist, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C104F0, float, get_CameraInfluenceMaxDist, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C10530, void, SetSnakeSolverMoonReadyFlagToFalse, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C10540, void, SetSnakeSolverMoonReadyFlagToTrue, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C10550, void, UpdateSnakeSolversMoonReadyFlag, (app::SandWormEntity * this_ptr, bool set_ready))
    IL2CPP_REGISTER_METHOD(0x00C10D20, void, SetupSegments, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C12020, void, UpdateLastSeenPosition, (app::SandWormEntity * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00C12120, void, OnFixedUpdate, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C12D40, void, AddPoisonWaterBlob, (app::SandWormEntity * this_ptr, app::Vector3 position, bool forced))
    IL2CPP_REGISTER_METHOD(0x00C12EF0, void, OnUpdate, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C12F10, void, LateUpdate, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C131D0, void, OnPoolSpawned, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C132E0, app::IEnumerator*, EnableVerletTentacles, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C13430, void, DisableSegments, (app::SandWormEntity * this_ptr, bool probably_being_destroyed))
    IL2CPP_REGISTER_METHOD(0x00C13AA0, void, EnableSegments, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C13D40, void, IgnoreCollisionWithCollider, (app::SandWormEntity * this_ptr, app::Collider* collider, bool ignore))
    IL2CPP_REGISTER_METHOD(0x00C13E70, void, IgnoreCollisionWithAllSandAreas, (app::SandWormEntity * this_ptr, app::Collider* collider, bool ignore))
    IL2CPP_REGISTER_METHOD(0x00C140C0, void, OnDigZoneAdded, (app::SandWormEntity * this_ptr, app::DigZone* dig_zone))
    IL2CPP_REGISTER_METHOD(0x00C141B0, void, PlayBodyAnimation, (app::SandWormEntity * this_ptr, app::SandWormEntity_SandWormBodyAnimation* anim))
    IL2CPP_REGISTER_METHOD(0x00C141E0, void, AddBodyWave, (app::SandWormEntity * this_ptr, app::SandWormEntity_SandWormBodyWave* body_wave))
    IL2CPP_REGISTER_METHOD(0x00C14280, void, RemoveBodyWave, (app::SandWormEntity * this_ptr, app::SandWormEntity_SandWormBodyWave* body_wave))
    IL2CPP_REGISTER_METHOD(0x00C14320, void, AddSquetch, (app::SandWormEntity * this_ptr, app::SandWormEntity_SandWormSquetch* squetch))
    IL2CPP_REGISTER_METHOD(0x00C143C0, void, RemoveSquetch, (app::SandWormEntity * this_ptr, app::SandWormEntity_SandWormSquetch* squetch))
    IL2CPP_REGISTER_METHOD(0x00C14460, void, StopBodyAnimation_1, (app::SandWormEntity * this_ptr, app::SandWormEntity_SandWormBodyAnimation* anim))
    IL2CPP_REGISTER_METHOD(0x00C14480, void, StopBodyAnimation_2, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C144A0, void, HandleBodyAnimation, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C147F0, void, ResolveDamage, (app::SandWormEntity * this_ptr, app::DamageResult* damage_result))
    IL2CPP_REGISTER_METHOD(0x00C14CA0, void, UpdateShaderAnimationParameters, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C14F30, void, UpdateSegments, (app::SandWormEntity * this_ptr, app::Vector3 head_direction))
    IL2CPP_REGISTER_METHOD(0x00C16F80, void, RotateHead, (app::SandWormEntity * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x00C17490, void, InstantiateEnterSandEffect, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C17680, void, ActivateTrail, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C178F0, void, DeactivateTrail, (app::SandWormEntity * this_ptr, bool immeditate))
    IL2CPP_REGISTER_METHOD(0x00C17AD0, void, ActivateRagdollMode, (app::SandWormEntity * this_ptr, app::Vector2 force, app::Vector2 force_origin, bool ignore_sand_collision))
    IL2CPP_REGISTER_METHOD(0x00C184A0, void, DeactivateRagdollMode, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C18870, void, ResetHeadRotation, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C18A40, void, EnableTargettingOnBody, (app::SandWormEntity * this_ptr, bool enable))
    IL2CPP_REGISTER_METHOD(0x00C18BC0, void, RegisterMortarPosition, (app::Entity * entity, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00C18CD0, app::Vector3, GetClosestMortarPositionTo, (app::Entity * entity, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00C19080, void, UnregisterMortarPosition, (app::Entity * entity))
    IL2CPP_REGISTER_METHOD(0x00C19270, void, OnEndDeathBehaviour, (app::SandWormEntity * this_ptr, app::EntityTask* behaviour, app::BehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x00C19420, void, DeathTimelineEnded, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C19430, app::Vector3, ModifyKickbackForce, (app::SandWormEntity * this_ptr, app::Vector3 force, app::Damage* damage, bool apply_death_modification))
    IL2CPP_REGISTER_METHOD(0x00C19590, void, OnDestroy, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C19BC0, void, ctor, (app::SandWormEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C1A410, void, cctor, ())
} // namespace app::classes::SandWormEntity
