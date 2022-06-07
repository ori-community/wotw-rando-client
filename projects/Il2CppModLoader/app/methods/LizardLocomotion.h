#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LizardLocomotion {
    IL2CPP_REGISTER_METHOD(0x00FB0A90, void, OnEntityInitialization, (app::LizardLocomotion * this_ptr, app::Entity * entity))
    IL2CPP_REGISTER_METHOD(0x00FB0AD0, void, ctor, (app::LizardLocomotion * this_ptr))
}
