#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/BlockableLaser.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/SpherecastCommand.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::BlockableLaser {
    IL2CPP_REGISTER_METHOD(0x00D2CC30, app::Vector3, get_TransformedLaserDirection, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D2CD40, void, UpdateActivationTimeslicer, ())
    IL2CPP_REGISTER_METHOD(0x00D2CDF0, bool, get_Activated, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D2CE00, void, set_Activated, (app::BlockableLaser * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00D2CE30, float, get_CurrentScale, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D2CFE0, void, OnValidate, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D2CFF0, void, Validate, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D2D2A0, void, set_DamageCollidersActive, (app::BlockableLaser * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00D2D480, void, OnActivatedQueued, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D2D620, void, OnActivatedImmediate, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D2DF30, void, OnDeactivateQueued, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D2E0D0, void, OnDeactivateImmediate, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D2EA50, void, DoAnticipation, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D2EEF0, void, OnEnable, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D2F180, void, OnDisable, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D2F280, void, Awake, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D2F840, void, EnableHitFXViaTrigger, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B90C0, void, DisableHitFXViaTrigger, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D2F850, bool, get_ShouldPlayImpactFX, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D2F880, void, OnDestroy, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D2F970, void, PlayLaserLoopSFX, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D2FA00, void, StopLaserLoopSFX, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D2FAC0, app::Damage*, DealLaserDamage, (app::BlockableLaser * this_ptr, app::GameObject* hit_object))
    IL2CPP_REGISTER_METHOD(0x00D2FFE0, void, FixedUpdate, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D30000, app::GameObject*, GetImpactEffectPrefab, (app::BlockableLaser * this_ptr, app::Collider* hit_collider))
    IL2CPP_REGISTER_METHOD(0x00D30310, app::GameObject*, GetImpactLoopEffectPrefab, (app::BlockableLaser * this_ptr, app::Collider* hit_collider))
    IL2CPP_REGISTER_METHOD(0x00D30620, void, PerformLaserLogic, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D31F50, void, UpdateBeamRotationPivot, (app::BlockableLaser * this_ptr, app::Vector3 direction))
    IL2CPP_REGISTER_METHOD(0x00D32070, float, ComputImpactEffectAngle, (app::BlockableLaser * this_ptr, app::Vector3 hit_normal, app::Vector3 laser_direction))
    IL2CPP_REGISTER_METHOD(0x00D321E0, void, PerformLaserRaycast, (app::BlockableLaser * this_ptr, app::Vector3* laser_end_point, app::Vector3* hit_normal, float* best_distance, app::Collider** hit_collider))
    IL2CPP_REGISTER_METHOD(0x00D32880, bool, SimpleCastOri, (app::BlockableLaser * this_ptr, app::SpherecastCommand cmd, app::RaycastHit* hit, app::Collider** hit_collider))
    IL2CPP_REGISTER_METHOD(0x00D32E50, bool, IsLaserOnScreen, (app::BlockableLaser * this_ptr, app::Vector3 end_point))
    IL2CPP_REGISTER_METHOD(0x00437A70, float, get_CurrentLaserLength, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D33510, void, set_CurrentLaserLength, (app::BlockableLaser * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00D33520, void, DispatchOfTheLastImpactLoopEffect, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D337F0, void, DispatchOfTheLastImpactPointLight, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D338D0, bool, get_IsSuspended, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D338E0, void, set_IsSuspended, (app::BlockableLaser * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00D338F0, app::SuspendableMask__Enum, get_Mask, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D33900, void, set_Mask, (app::BlockableLaser * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00D33910, void, Serialize, (app::BlockableLaser * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x00D339D0, app::Vector3, NearestPointOnFiniteLine, (app::Vector2 start, app::Vector2 end, app::Vector2 pnt))
    IL2CPP_REGISTER_METHOD(0x00D33BE0, void, ctor, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D340B0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x00D34200, void, _OnActivatedImmediate_b__39_0, (app::BlockableLaser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D343E0, void, _OnDeactivateImmediate_b__41_0, (app::BlockableLaser * this_ptr))
} // namespace app::classes::BlockableLaser
