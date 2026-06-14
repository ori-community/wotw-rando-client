#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TextureBasedOnHealth.h>

namespace app::classes::TextureBasedOnHealth {
    IL2CPP_REGISTER_METHOD(0x010EAD70, void, Awake, app::TextureBasedOnHealth* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010EAE00, void, FixedUpdate, app::TextureBasedOnHealth* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::TextureBasedOnHealth* this_ptr)
} // namespace app::classes::TextureBasedOnHealth
