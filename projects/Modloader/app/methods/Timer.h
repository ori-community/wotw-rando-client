#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Timer_2.h>

namespace app::classes::Timer {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Timer_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Report, app::Timer_2* this_ptr, app::String* message)
} // namespace app::classes::Timer
