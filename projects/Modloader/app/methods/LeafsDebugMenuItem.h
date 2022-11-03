#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LeafsDebugMenuItem {
    IL2CPP_REGISTER_METHOD(0x015C26D0, void, ctor, (app::LeafsDebugMenuItem * this_ptr, app::String* path, app::String* str))
    IL2CPP_REGISTER_METHOD(0x015C2890, void, OnSelectedFixedUpdate, (app::LeafsDebugMenuItem * this_ptr))
} // namespace app::classes::LeafsDebugMenuItem
