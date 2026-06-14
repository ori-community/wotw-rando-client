#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageLayerMask__Enum.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/GrenadeBurst.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::GrenadeBurst {
    IL2CPP_REGISTER_METHOD(0x002FD750, app::DamageLayerMask__Enum, get_DamageLayerMask, app::GrenadeBurst* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD760, void, set_DamageLayerMask, app::GrenadeBurst* this_ptr, app::DamageLayerMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x0108B100, void, Finalize, app::GrenadeBurst* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0108B190, void, OnPoolSpawned, app::GrenadeBurst* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0108B1A0, void, OnPoolDespawned, app::GrenadeBurst* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0108B1B0, void, IgnoreOnLastInstance, app::IAttackable* attackable)
    IL2CPP_REGISTER_METHOD(0x0108B2C0, void, Awake, app::GrenadeBurst* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0108B370, void, OnDestroy, app::GrenadeBurst* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0108B410, void, OnEnable, app::GrenadeBurst* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0108B1A0, void, OnDisable, app::GrenadeBurst* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0108B4A0, void, MoonCleanup, app::GrenadeBurst* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0108B5E0, void, Start, app::GrenadeBurst* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0108B600, void, DealDamage, app::GrenadeBurst* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0108C910, void, DamageTicked, app::GrenadeBurst* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x0108CB10, void, FixedUpdate, app::GrenadeBurst* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFE10, bool, get_IsSuspended, app::GrenadeBurst* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0057BAC0, void, set_IsSuspended, app::GrenadeBurst* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0070DEC0, app::SuspendableMask__Enum, get_Mask, app::GrenadeBurst* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0108CBF0, void, set_Mask, app::GrenadeBurst* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x0108CC00, void, ctor, app::GrenadeBurst* this_ptr)
} // namespace app::classes::GrenadeBurst
