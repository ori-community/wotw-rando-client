#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberShaderRange.h>

namespace app::classes::UberShaderRange {
    IL2CPP_REGISTER_METHOD(0x0191AFB0, void, ctor_1, (app::UberShaderRange * this_ptr, float min_value, float max_value))
    IL2CPP_REGISTER_METHOD(0x0191AFD0, void, ctor_2, (app::UberShaderRange * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0191B080, void, BindProperties, (app::UberShaderRange * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_MinValue, (app::UberShaderRange * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190CF30, void, set_MinValue, (app::UberShaderRange * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00724020, float, get_MaxValue, (app::UberShaderRange * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01289F00, void, set_MaxValue, (app::UberShaderRange * this_ptr, float value))
} // namespace app::classes::UberShaderRange
