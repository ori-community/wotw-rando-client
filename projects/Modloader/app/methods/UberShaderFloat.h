#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberShaderFloat.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UberShaderFloat {
    IL2CPP_REGISTER_METHOD(0x019124D0, void, BindProperties, (app::UberShaderFloat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01912620, void, ctor_1, (app::UberShaderFloat * this_ptr, float val, app::String* default_value))
    IL2CPP_REGISTER_METHOD(0x019126C0, void, ctor_2, (app::UberShaderFloat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_FloatValue, (app::UberShaderFloat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190CF30, void, set_FloatValue, (app::UberShaderFloat * this_ptr, float value))
} // namespace app::classes::UberShaderFloat
