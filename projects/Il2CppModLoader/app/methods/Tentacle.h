#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Tentacle {
    IL2CPP_REGISTER_METHOD(0x00CEA5E0, void, Awake, (app::Tentacle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CEA940, void, Update, (app::Tentacle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CEAB70, void, FixedUpdate, (app::Tentacle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CEAF70, void, ctor, (app::Tentacle * this_ptr))
} // namespace app::classes::Tentacle
