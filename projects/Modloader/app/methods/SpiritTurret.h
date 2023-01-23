#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SpiritTurret.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/Guid.h>

namespace app::classes::SpiritTurret {
    IL2CPP_REGISTER_METHOD(0x0064D960, float, get_Lifetime, (app::SpiritTurret * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0064D970, void, set_Lifetime, (app::SpiritTurret * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00B32900, float, get_ExpirationTwinkleDuration, (app::SpiritTurret * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE09F0, void, set_ExpirationTwinkleDuration, (app::SpiritTurret * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00D7C800, app::Vector3, HoverOffset, (app::SpiritTurret * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x00C47CC0, app::Vector3, get_Position, (app::SpiritTurret * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D654B0, void, set_Position, (app::SpiritTurret * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00AE6060, bool, get_IsSuspended, (app::SpiritTurret * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE6070, void, set_IsSuspended, (app::SpiritTurret * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00974AE0, app::SuspendableMask__Enum, get_Mask, (app::SpiritTurret * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7C9D0, void, set_Mask, (app::SpiritTurret * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00D7CA90, void, Awake, (app::SpiritTurret * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7CBD0, void, OnDestroy, (app::SpiritTurret * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7CC90, void, OnEnable, (app::SpiritTurret * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7D1D0, void, OnDisable, (app::SpiritTurret * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7D290, void, MoveToTarget, (app::SpiritTurret * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7D3F0, app::IAttackable*, FindNearestAttackable, (app::SpiritTurret * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7D770, app::Guid, get_AttackableConsumerID, (app::SpiritTurret * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7D780, void, set_AttackableConsumerID, (app::SpiritTurret * this_ptr, app::Guid value))
    IL2CPP_REGISTER_METHOD(0x00D7D790, bool, IsAttackableInteresting, (app::SpiritTurret * this_ptr, app::IAttackable* attackable))
    IL2CPP_REGISTER_METHOD(0x00D7D8B0, void, RemovingAttackable, (app::SpiritTurret * this_ptr, app::IAttackable* attackable))
    IL2CPP_REGISTER_METHOD(0x00D7D990, bool, IsAttackableVisible, (app::SpiritTurret * this_ptr, app::IAttackable* attackable))
    IL2CPP_REGISTER_METHOD(0x00D7DF20, void, UpdateHovering, (app::SpiritTurret * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7E4D0, void, PushAwayFromOthers, (app::SpiritTurret * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7E960, void, UpdateShooting, (app::SpiritTurret * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7EF80, void, FixedUpdate, (app::SpiritTurret * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7F110, void, Explode, (app::SpiritTurret * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7F4F0, void, StartTwinkle, (app::SpiritTurret * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7F670, void, StopTwinkle, (app::SpiritTurret * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7F710, float, CalculateCooldown, (app::SpiritTurret * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7F860, void, ctor, (app::SpiritTurret * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7FA20, void, cctor, ())
} // namespace app::classes::SpiritTurret
