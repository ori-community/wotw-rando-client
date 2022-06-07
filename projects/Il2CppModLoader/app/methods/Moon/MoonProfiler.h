#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::MoonProfiler {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginSample_1, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginSample_2, (app::String * name, app::Object_1 * target_object))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndSample, ())
}
