#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::HealthDebugMenuItem {
    IL2CPP_REGISTER_METHOD(0x010A1E60, void, ctor, (app::HealthDebugMenuItem * this_ptr, app::String* path, app::String* str))
    IL2CPP_REGISTER_METHOD(0x010A2080, void, OnSelectedFixedUpdate, (app::HealthDebugMenuItem * this_ptr))
} // namespace app::classes::HealthDebugMenuItem
