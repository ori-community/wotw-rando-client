#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TimeZone.h>

namespace app::classes::System::TimeZone {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TimeZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027AE670, void, cctor, ())
} // namespace app::classes::System::TimeZone
