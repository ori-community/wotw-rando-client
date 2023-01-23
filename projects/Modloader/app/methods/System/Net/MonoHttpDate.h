#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/MonoHttpDate.h>

namespace app::classes::System::Net::MonoHttpDate {
    IL2CPP_REGISTER_METHOD(0x01E708E0, app::DateTime, Parse, (app::String * date_str))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MonoHttpDate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E70A10, void, cctor, ())
} // namespace app::classes::System::Net::MonoHttpDate
