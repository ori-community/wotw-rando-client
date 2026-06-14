#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/SpiritSentry.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SpiritSentry {
    IL2CPP_REGISTER_METHOD(0x003FC020, float, get_Duration, app::SpiritSentry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FC030, void, set_Duration, app::SpiritSentry* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00738690, float, get_ExpirationTwinkleDuration, app::SpiritSentry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00990EC0, void, set_ExpirationTwinkleDuration, app::SpiritSentry* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00D651B0, app::Transform*, get_m_target, app::SpiritSentry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D652E0, app::Vector3, HoverOffset, app::SpiritSentry* this_ptr, float time)
    IL2CPP_REGISTER_METHOD(0x00C47CC0, app::Vector3, get_Position, app::SpiritSentry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D654B0, void, set_Position, app::SpiritSentry* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x008519A0, bool, get_IsSuspended, app::SpiritSentry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008519B0, void, set_IsSuspended, app::SpiritSentry* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x008519C0, app::SuspendableMask__Enum, get_Mask, app::SpiritSentry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D65530, void, set_Mask, app::SpiritSentry* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00D655F0, void, Awake, app::SpiritSentry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D656F0, void, OnDestroy, app::SpiritSentry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D65790, void, OnEnable, app::SpiritSentry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D65990, void, OnDisable, app::SpiritSentry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D65CB0, void, MoveBackToPlayer, app::SpiritSentry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D65EC0, app::IAttackable*, FindNearestAttackable, app::SpiritSentry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D661A0, void, UpdateHovering, app::SpiritSentry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D66830, void, PushAwayFromOthers, app::SpiritSentry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D66CC0, void, UpdateShooting, app::SpiritSentry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D671F0, void, FixedUpdate, app::SpiritSentry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D67530, void, StartTwinkle, app::SpiritSentry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D67760, void, StopTwinkle, app::SpiritSentry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D678C0, float, CalculateCooldown, app::SpiritSentry* this_ptr, float cooldown)
    IL2CPP_REGISTER_METHOD(0x00D678D0, void, ctor, app::SpiritSentry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D67900, void, cctor, )
} // namespace app::classes::SpiritSentry
