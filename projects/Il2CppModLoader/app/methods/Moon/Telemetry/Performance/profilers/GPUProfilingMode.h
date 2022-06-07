#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::profilers::GPUProfilingMode {
    IL2CPP_REGISTER_METHOD(0x00E49A10, bool, get_Enabled, ())
    IL2CPP_REGISTER_METHOD(0x00E49AA0, void, set_Enabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x00E49B90, bool, IsEnabled, ())
    IL2CPP_REGISTER_METHOD(0x00E49D70, void, Enable, ())
    IL2CPP_REGISTER_METHOD(0x00E49F30, void, Disable, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GPUProfilingMode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E4A0F0, void, cctor, ())
}
