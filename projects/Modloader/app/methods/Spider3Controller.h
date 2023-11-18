#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Spider3Controller.h>

namespace app::classes::Spider3Controller {
    IL2CPP_REGISTER_METHOD(0x00953C30, void, Update, (app::Spider3Controller * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00953E50, void, ctor, (app::Spider3Controller * this_ptr))
} // namespace app::classes::Spider3Controller
