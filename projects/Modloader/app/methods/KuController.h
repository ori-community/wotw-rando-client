#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KuController.h>
#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/KuState.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::KuController {
    IL2CPP_REGISTER_METHOD(0x0122D4D0, float, get_HorizontalInput, (app::KuController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0122D540, float, get_VerticalInput, (app::KuController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0122D5C0, bool, get_LockedInput, (app::KuController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0122D840, void, Awake, (app::KuController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0122D920, void, OnEnable, (app::KuController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0122DAF0, void, OnDisable, (app::KuController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0122DCC0, void, OnDestroy, (app::KuController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0122DD60, bool, IsPerforming, (app::KuController * this_ptr, app::KuState* character_state))
    IL2CPP_REGISTER_METHOD(0x0122DE20, void, FixedUpdate, (app::KuController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0122E360, void, OnSetTurningHandler, (app::KuController * this_ptr, app::CharacterLeftRightMovement* left_right_movement))
    IL2CPP_REGISTER_METHOD(0x0122E630, void, EnterMountState, (app::KuController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_IsSuspended, (app::KuController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_IsSuspended, (app::KuController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FDCE0, app::SuspendableMask__Enum, get_Mask, (app::KuController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C5DD0, void, set_Mask, (app::KuController * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x0122E7A0, void, HandleOffscreenIssue, (app::KuController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058EE40, void, ctor, (app::KuController * this_ptr))
} // namespace app::classes::KuController
