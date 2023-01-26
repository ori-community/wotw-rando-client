#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ProfilingSettings_c.h>
#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/IEnumerable_1_System_Type_.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Moon::Telemetry::Performance::ProfilingSettings___c {
    IL2CPP_REGISTER_METHOD(0x00E39930, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ProfilingSettings_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E39A70, app::IEnumerable_1_System_Type_*, _CreateSettings_b__11_0, (app::ProfilingSettings_c * this_ptr, app::Assembly* x))
    IL2CPP_REGISTER_METHOD(0x00E39AA0, bool, _CreateSettings_b__11_1, (app::ProfilingSettings_c * this_ptr, app::Type* x))
} // namespace app::classes::Moon::Telemetry::Performance::ProfilingSettings___c
