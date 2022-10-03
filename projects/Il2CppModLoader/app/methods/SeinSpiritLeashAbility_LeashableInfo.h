#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SeinSpiritLeashAbility_LeashableInfo {
    IL2CPP_REGISTER_METHOD(0x0011C130, app::Vector3, GetAttackablePosition, (app::SeinSpiritLeashAbility_LeashableInfo__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0011C160, bool, ShouldDecelerateOnApproach, (app::SeinSpiritLeashAbility_LeashableInfo__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0011C170, float, GetCloseEnoughDistance, (app::SeinSpiritLeashAbility_LeashableInfo__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0011C180, void, Clear, (app::SeinSpiritLeashAbility_LeashableInfo__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0011C190, void, Copy, (app::SeinSpiritLeashAbility_LeashableInfo__Boxed * this_ptr, app::SeinSpiritLeashAbility_LeashableInfo other))
    IL2CPP_REGISTER_METHOD(0x0011C220, void, SetAttackablePoint, (app::SeinSpiritLeashAbility_LeashableInfo__Boxed * this_ptr, app::IAttackable* attackable, app::GameObject* attackable_object, app::ISpiritLeashAttackable* spirit_leash_attackable))
    IL2CPP_REGISTER_METHOD(0x0011C270, void, SetAttackableSurfaceLocal, (app::SeinSpiritLeashAbility_LeashableInfo__Boxed * this_ptr, app::GrabbableSurface* surface, app::GameObject* attackable_object, app::ISpiritLeashAttackable* spirit_leash_attackable, app::Vector3 local_pos))
    IL2CPP_REGISTER_METHOD(0x0011C3B0, void, SetAttackableSurfaceWorld, (app::SeinSpiritLeashAbility_LeashableInfo__Boxed * this_ptr, app::GrabbableSurface* surface, app::GameObject* attackable_object, app::ISpiritLeashAttackable* spirit_leash_attackable, app::Vector3 world_pos))
} // namespace app::classes::SeinSpiritLeashAbility_LeashableInfo
