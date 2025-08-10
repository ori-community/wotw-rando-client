#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/YouCanLeaveYourHatOn_Data.h>

namespace app::classes::YouCanLeaveYourHatOn_Data {
    IL2CPP_REGISTER_METHOD(0x01C5FC10, void, ctor, app::YouCanLeaveYourHatOn_Data* this_ptr, app::String* type)
}
