#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BabySeinController.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::BabySeinController {
    IL2CPP_REGISTER_METHOD(0x008616A0, bool, get_LockedInput, app::BabySeinController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00861750, void, Awake, app::BabySeinController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00861830, void, OnDestroy, app::BabySeinController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008618D0, void, Start, app::BabySeinController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00861930, app::Vector3, get_Position, app::BabySeinController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008619A0, void, FixedUpdate, app::BabySeinController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00861F70, void, Jump, app::BabySeinController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00862530, void, Land, app::BabySeinController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00862560, void, UpdateAnimations, app::BabySeinController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00862D10, bool, ShouldWalkAnimationPlay, app::BabySeinController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00862E00, bool, ShouldIdleAnimationPlay, app::BabySeinController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldGrabBoxAnimationPlay, app::BabySeinController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00862EF0, bool, ShouldFallAnimationPlay, app::BabySeinController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00862F60, bool, ShouldFallIdleAnimationPlay, app::BabySeinController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00862FD0, bool, ShouldJumpIdleAnimationPlay, app::BabySeinController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00863080, bool, ShouldJumpAnimationPlay, app::BabySeinController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00863130, bool, get_IsSuspended, app::BabySeinController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00863140, void, set_IsSuspended, app::BabySeinController* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x006410F0, app::SuspendableMask__Enum, get_Mask, app::BabySeinController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00863150, void, set_Mask, app::BabySeinController* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00863200, void, ctor, app::BabySeinController* this_ptr)
} // namespace app::classes::BabySeinController
