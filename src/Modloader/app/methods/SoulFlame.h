#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SoulFlame.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SoulFlame {
    IL2CPP_REGISTER_METHOD(0x00EE3A50, bool, get_IsInside, app::SoulFlame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EE3AD0, app::Vector3, get_Position, app::SoulFlame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EE3B60, void, set_Position, app::SoulFlame* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x00EE3BE0, void, Awake, app::SoulFlame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EE3DD0, void, OnDestroy, app::SoulFlame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009886D0, void, OnGameSerializeLoad, app::SoulFlame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EE3F60, void, OnRekindle, app::SoulFlame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EE4190, void, FixedUpdate, app::SoulFlame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00647DD0, void, OnDisable, app::SoulFlame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EE44F0, void, Disappear, app::SoulFlame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EE45E0, void, Start, app::SoulFlame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EE4620, void, ctor, app::SoulFlame* this_ptr)
} // namespace app::classes::SoulFlame
