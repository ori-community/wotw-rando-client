#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/MeleeComboAdapter.h>
#include <Modloader/app/structs/MeleeWeapon.h>
#include <Modloader/app/structs/SeinController3D_EventId__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::ComboSystem::MeleeComboAdapter {
    IL2CPP_REGISTER_METHOD(0x00CC7730, void, OnInitialize, app::MeleeComboAdapter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC79B0, void, ctor, app::MeleeComboAdapter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, SetWeapon, app::MeleeComboAdapter* this_ptr, app::MeleeWeapon* weapon)
    IL2CPP_REGISTER_METHOD(0x00CC7BA0, void, OnCollision, app::MeleeComboAdapter* this_ptr, app::Collider* collider, app::Vector3 hit_direction)
    IL2CPP_REGISTER_METHOD(0x00CC7CA0, bool, CanExecute, app::MeleeComboAdapter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC7CD0, void, Interrupt, app::MeleeComboAdapter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC7D10, void, EnterMove, app::MeleeComboAdapter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC7DD0, void, UpdateMove, app::MeleeComboAdapter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC7E60, void, ExitMove, app::MeleeComboAdapter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC7EC0, bool, get_IsAttackButtonDown, app::MeleeComboAdapter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC7FA0, bool, get_OnAttackButtonPressed, app::MeleeComboAdapter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC8080, bool, get_OnAttackButtonReleased, app::MeleeComboAdapter* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00CC8160,
        void,
        ModifyGravityPlatformMovementSettings,
        app::MeleeComboAdapter* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x00CC81A0,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::MeleeComboAdapter* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x00CC81E0, void, OnAnimationEvent, app::MeleeComboAdapter* this_ptr, app::SeinController3D_EventId__Enum event_id)
} // namespace app::classes::Moon::ComboSystem::MeleeComboAdapter
