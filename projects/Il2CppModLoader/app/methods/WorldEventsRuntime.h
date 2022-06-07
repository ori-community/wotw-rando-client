#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::WorldEventsRuntime {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::WorldEventsRuntime * this_ptr, int32_t default_value))
    IL2CPP_REGISTER_METHOD(0x00582BD0, void, Serialize, (app::WorldEventsRuntime * this_ptr, app::Archive * ar))
}
