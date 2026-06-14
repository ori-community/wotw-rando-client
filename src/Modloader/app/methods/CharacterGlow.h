#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterGlow.h>

namespace app::classes::CharacterGlow {
    IL2CPP_REGISTER_METHOD(0x01051140, void, Start, app::CharacterGlow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01051410, void, FixedUpdate, app::CharacterGlow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::CharacterGlow* this_ptr)
} // namespace app::classes::CharacterGlow
