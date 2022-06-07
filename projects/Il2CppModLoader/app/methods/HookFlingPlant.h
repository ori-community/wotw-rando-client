#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::HookFlingPlant {
    IL2CPP_REGISTER_METHOD(0x00B5D6D0, app::SeinSpiritLeashAbility *, get_Leash, (app::HookFlingPlant * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD20, app::Transform *, get_HookTargetTransform, (app::HookFlingPlant * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A79490, float, get_OriCloseEnoughDistance, (app::HookFlingPlant * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldDecelerateOnApproach, (app::HookFlingPlant * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5D810, void, Awake, (app::HookFlingPlant * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5D8B0, void, OnSpiritLeashed, (app::HookFlingPlant * this_ptr, app::Vector3 player_position, app::Vector3 target_position))
    IL2CPP_REGISTER_METHOD(0x00B5DDA0, void, Start, (app::HookFlingPlant * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5DF40, void, OnDestroy, (app::HookFlingPlant * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5E0F0, void, OnPostRestoreCheckpoint, (app::HookFlingPlant * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047305D0, HookFlingPlant_OnPostRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B5E270, void, FixedUpdate, (app::HookFlingPlant * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5E430, void, ctor, (app::HookFlingPlant * this_ptr))
}
