#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterAnimationSystem.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/FloatingRockTurretEnemy.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>

namespace app::classes::FloatingRockTurretEnemy {
    IL2CPP_REGISTER_METHOD(
        0x01277550,
        void,
        PlayAnimationOnce,
        app::FloatingRockTurretEnemy* this_ptr,
        app::CharacterAnimationSystem* animation_system,
        app::TextureAnimationWithTransitions* anim,
        int32_t layer
    )
    IL2CPP_REGISTER_METHOD(
        0x01277660,
        void,
        RestartAnimationLoop,
        app::FloatingRockTurretEnemy* this_ptr,
        app::CharacterAnimationSystem* animation_system,
        app::TextureAnimationWithTransitions* anim,
        int32_t layer
    )
    IL2CPP_REGISTER_METHOD(
        0x01277770,
        void,
        PlayAnimationLoop,
        app::FloatingRockTurretEnemy* this_ptr,
        app::CharacterAnimationSystem* animation_system,
        app::TextureAnimationWithTransitions* anim,
        int32_t layer
    )
    IL2CPP_REGISTER_METHOD(0x01277880, void, OnEnterIdle, app::FloatingRockTurretEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01277940, void, OnEnterCharge, app::FloatingRockTurretEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01277A30, void, OnExitCharge, app::FloatingRockTurretEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01277A60, void, UpdateCharge, app::FloatingRockTurretEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01277C20, void, OnEnterShooting, app::FloatingRockTurretEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01277F40, void, OnEnterRespawn, app::FloatingRockTurretEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01278110, void, Start, app::FloatingRockTurretEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011B8AA0, void, OnTimedRespawn, app::FloatingRockTurretEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01279520, bool, ShouldCharge, app::FloatingRockTurretEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012795A0, bool, ShouldDisolve, app::FloatingRockTurretEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01279600, void, Awake, app::FloatingRockTurretEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012797C0, void, OnDestroy, app::FloatingRockTurretEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01273BD0, void, OnModifyDamage, app::FloatingRockTurretEnemy* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x01279980, void, FixedUpdate, app::FloatingRockTurretEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01279A20, void, ctor, app::FloatingRockTurretEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01276B10, bool, _Start_b__27_0, app::FloatingRockTurretEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01276BB0, bool, _Start_b__27_1, app::FloatingRockTurretEnemy* this_ptr)
} // namespace app::classes::FloatingRockTurretEnemy
