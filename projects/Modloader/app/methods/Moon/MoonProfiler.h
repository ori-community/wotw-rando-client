#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object_1.h>

namespace app::classes::Moon::MoonProfiler {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginSample_1, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginSample_2, (app::String * name, app::Object_1* target_object))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndSample, ())
} // namespace app::classes::Moon::MoonProfiler
