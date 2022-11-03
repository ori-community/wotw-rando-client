#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RootMotion::Demos::UserControlAI {
    IL2CPP_REGISTER_METHOD(0x0204A230, void, Update, (app::UserControlAI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204A720, void, ctor, (app::UserControlAI * this_ptr))
} // namespace app::classes::RootMotion::Demos::UserControlAI
