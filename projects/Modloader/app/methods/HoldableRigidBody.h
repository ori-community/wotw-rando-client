#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HoldableRigidBody.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/MeleeWeapon.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::HoldableRigidBody {
    IL2CPP_REGISTER_METHOD(0x00B58CA0, bool, get_CanBeHeld, (app::HoldableRigidBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanBeUsed, (app::HoldableRigidBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B58CD0, app::MeleeWeapon*, get_Weapon, (app::HoldableRigidBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsSuspended, (app::HoldableRigidBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsSuspended, (app::HoldableRigidBody * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00998570, app::SuspendableMask__Enum, get_Mask, (app::HoldableRigidBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B58D50, void, set_Mask, (app::HoldableRigidBody * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00B58E00, bool, get_IsHeld, (app::HoldableRigidBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0084D3C0, bool, get_CanBeDropped, (app::HoldableRigidBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0084D3D0, void, set_CanBeDropped, (app::HoldableRigidBody * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00B58E10, void, Awake, (app::HoldableRigidBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::HoldableRigidBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B58F80, void, SafeDestroy, (app::HoldableRigidBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (app::HoldableRigidBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B59120, void, OnEnable, (app::HoldableRigidBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B591E0, void, OnDisable, (app::HoldableRigidBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B592C0, void, FixedUpdate, (app::HoldableRigidBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B59340, void, UpdateHint, (app::HoldableRigidBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B595E0, void, OnPickedUp, (app::HoldableRigidBody * this_ptr, bool serialization))
    IL2CPP_REGISTER_METHOD(0x00B59AA0, void, OnDropped, (app::HoldableRigidBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B59ED0, void, BeginUse, (app::HoldableRigidBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B59FC0, void, EndUse, (app::HoldableRigidBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5A0B0, void, FixDropPosition, (app::HoldableRigidBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5A580, void, OnCollisionEnter, (app::HoldableRigidBody * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00B5A710, void, ctor, (app::HoldableRigidBody * this_ptr))
} // namespace app::classes::HoldableRigidBody
