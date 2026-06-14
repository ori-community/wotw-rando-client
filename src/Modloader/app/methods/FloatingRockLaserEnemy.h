#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterAnimationSystem.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/FloatingRockLaserEnemy.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>

namespace app::classes::FloatingRockLaserEnemy {
    IL2CPP_REGISTER_METHOD(
        0x01273520,
        void,
        PlayAnimationOnce,
        app::FloatingRockLaserEnemy* this_ptr,
        app::CharacterAnimationSystem* animation_system,
        app::TextureAnimationWithTransitions* anim,
        int32_t layer
    )
    IL2CPP_REGISTER_METHOD(
        0x01273630,
        void,
        RestartAnimationLoop,
        app::FloatingRockLaserEnemy* this_ptr,
        app::CharacterAnimationSystem* animation_system,
        app::TextureAnimationWithTransitions* anim,
        int32_t layer
    )
    IL2CPP_REGISTER_METHOD(
        0x01273740,
        void,
        PlayAnimationLoop,
        app::FloatingRockLaserEnemy* this_ptr,
        app::CharacterAnimationSystem* animation_system,
        app::TextureAnimationWithTransitions* anim,
        int32_t layer
    )
    IL2CPP_REGISTER_METHOD(0x01273850, void, Awake, app::FloatingRockLaserEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01273A10, void, OnDestroy, app::FloatingRockLaserEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01273BD0, void, OnModifyDamage, app::FloatingRockLaserEnemy* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x01273C00, void, OnEnterIdle, app::FloatingRockLaserEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01273D60, void, OnExitIdle, app::FloatingRockLaserEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01273E70, void, OnEnterCharge, app::FloatingRockLaserEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01273F40, void, OnEnterLaser, app::FloatingRockLaserEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012740F0, void, OnExitLaser, app::FloatingRockLaserEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01274130, void, OnEnterShooting, app::FloatingRockLaserEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01274420, void, UpdateLaserState, app::FloatingRockLaserEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01274570, void, Start, app::FloatingRockLaserEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateLaser, app::FloatingRockLaserEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01275C90, float, get_DesiredLaserRotationDirection, app::FloatingRockLaserEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01275EB0, void, UpdateLaserDirection, app::FloatingRockLaserEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012762F0, void, ActivateLaser, app::FloatingRockLaserEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012740F0, void, DeactivateLaser, app::FloatingRockLaserEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01276400, void, AimLaserAtPlayer, app::FloatingRockLaserEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01276840, void, FixedUpdate, app::FloatingRockLaserEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012768E0, bool, ShouldCharge, app::FloatingRockLaserEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01276960, bool, InCloseDistance, app::FloatingRockLaserEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012769C0, void, ctor, app::FloatingRockLaserEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01276B10, bool, _Start_b__36_0, app::FloatingRockLaserEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01276960, bool, _Start_b__36_1, app::FloatingRockLaserEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01276B60, bool, _Start_b__36_2, app::FloatingRockLaserEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01276BB0, bool, _Start_b__36_3, app::FloatingRockLaserEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01276960, bool, _Start_b__36_4, app::FloatingRockLaserEnemy* this_ptr)
} // namespace app::classes::FloatingRockLaserEnemy
