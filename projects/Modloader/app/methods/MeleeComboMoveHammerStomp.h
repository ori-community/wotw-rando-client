#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HammerComboMoveBase_BalancingData.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/MeleeComboMoveHammerStomp.h>
#include <Modloader/app/structs/MeleeComboMoveHammerStomp_State__Enum.h>
#include <Modloader/app/structs/MeleeWeapon.h>
#include <Modloader/app/structs/Ray.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/SeinComboHandler.h>
#include <Modloader/app/structs/SeinController3D_EventId__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::MeleeComboMoveHammerStomp {
    IL2CPP_REGISTER_METHOD(0x00813FA0, app::HammerComboMoveBase_BalancingData*, get_BalancingBase, app::MeleeComboMoveHammerStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139C560, bool, get_ShockwaveEnabled, app::MeleeComboMoveHammerStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsUninterruptable, app::MeleeComboMoveHammerStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139C640, int32_t, get_GroundMask, )
    IL2CPP_REGISTER_METHOD(0x0139C650, int32_t, get_DamageableMask, )
    IL2CPP_REGISTER_METHOD(0x0139C660, void, Initialize, app::MeleeComboMoveHammerStomp* this_ptr, app::SeinComboHandler* handler, app::MeleeWeapon* weapon)
    IL2CPP_REGISTER_METHOD(0x0139CA20, float, get_EffectiveDamage, app::MeleeComboMoveHammerStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_DealtDamage, app::MeleeComboMoveHammerStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139CA30, void, Start, app::MeleeComboMoveHammerStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139CB20, void, EnterMove, app::MeleeComboMoveHammerStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139CCF0, void, InterruptMove, app::MeleeComboMoveHammerStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139CD50, void, ExitMove, app::MeleeComboMoveHammerStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139CD80, void, UpdateMove, app::MeleeComboMoveHammerStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0139CDB0,
        void,
        ModifyGravityPlatformMovementSettings,
        app::MeleeComboMoveHammerStomp* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x0139CDE0,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::MeleeComboMoveHammerStomp* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x0139CE30, void, OnCollisionGround, app::MeleeComboMoveHammerStomp* this_ptr, app::Vector3 normal, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x0139CE90, void, ChangeState, app::MeleeComboMoveHammerStomp* this_ptr, app::MeleeComboMoveHammerStomp_State__Enum new_state)
    IL2CPP_REGISTER_METHOD(0x0139D060, void, EnterInactiveState, app::MeleeComboMoveHammerStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139D260, void, EnterStartState, app::MeleeComboMoveHammerStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139DCF0, void, ExitStartState, app::MeleeComboMoveHammerStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139DD00, bool, KeepStartAnimationPlaying, app::MeleeComboMoveHammerStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139DD10, void, OnStartAnimationEnd, app::MeleeComboMoveHammerStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139DF70, void, OnHitWater, app::MeleeComboMoveHammerStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139E100, void, UpdateStartState, app::MeleeComboMoveHammerStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139E350, void, EnterFallState, app::MeleeComboMoveHammerStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139E650, void, ExitFallState, app::MeleeComboMoveHammerStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139E770, bool, KeepFallAnimationPlaying, app::MeleeComboMoveHammerStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139E780, void, UpdateFallState, app::MeleeComboMoveHammerStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139EB60, bool, RaycastForDamageableOrGround_1, app::MeleeComboMoveHammerStomp* this_ptr, float ray_distance, app::RaycastHit* hit)
    IL2CPP_REGISTER_METHOD(
        0x0139EC50,
        bool,
        RaycastForDamageableOrGround_2,
        app::MeleeComboMoveHammerStomp* this_ptr,
        float ray_distance,
        app::RaycastHit* hit,
        app::Vector3 offset
    )
    IL2CPP_REGISTER_METHOD(0x0139F110, bool, RaycastForGround, app::MeleeComboMoveHammerStomp* this_ptr, float ray_distance, app::RaycastHit* hit)
    IL2CPP_REGISTER_METHOD(
        0x0139F2C0,
        void,
        HandleCollapsingPlatform,
        app::MeleeComboMoveHammerStomp* this_ptr,
        app::Collider* hit_collider,
        bool perform_collapse,
        bool* hit_collapsing_platform
    )
    IL2CPP_REGISTER_METHOD(0x0139F530, void, EnterLandState, app::MeleeComboMoveHammerStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013A0BA0, void, UpdateLandState, app::MeleeComboMoveHammerStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013A1030, void, OnEndAnimationEnd, app::MeleeComboMoveHammerStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013A1070, bool, KeepLandAnimationPlaying, app::MeleeComboMoveHammerStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        OnHammerTopCollision,
        app::MeleeComboMoveHammerStomp* this_ptr,
        app::Collider* collider,
        app::Vector3 hit_direction,
        app::Vector3 damage_position
    )
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        OnHammerHandleCollision,
        app::MeleeComboMoveHammerStomp* this_ptr,
        app::Collider* collider,
        app::Vector3 hit_direction,
        app::Vector3 damage_position
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEvent, app::MeleeComboMoveHammerStomp* this_ptr, app::SeinController3D_EventId__Enum event_id)
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        OnHammerHitGround,
        app::MeleeComboMoveHammerStomp* this_ptr,
        app::RaycastHit hit_info,
        float hit_speed,
        app::Ray ray,
        bool force
    )
    IL2CPP_REGISTER_METHOD(0x013A1080, void, ctor, app::MeleeComboMoveHammerStomp* this_ptr)
} // namespace app::classes::MeleeComboMoveHammerStomp
