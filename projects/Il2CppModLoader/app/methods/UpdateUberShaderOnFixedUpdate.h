#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UpdateUberShaderOnFixedUpdate {
    IL2CPP_REGISTER_METHOD(0x013ADA10, app::UberShaderComponent *, get_AttachedUberShader, (app::UpdateUberShaderOnFixedUpdate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013ADAE0, void, FixedUpdate, (app::UpdateUberShaderOnFixedUpdate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UpdateUberShaderOnFixedUpdate * this_ptr))
}
