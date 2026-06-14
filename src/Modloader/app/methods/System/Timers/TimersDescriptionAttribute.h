#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimersDescriptionAttribute.h>

namespace app::classes::System::Timers::TimersDescriptionAttribute {
    IL2CPP_REGISTER_METHOD(0x02A7C090, void, ctor, app::TimersDescriptionAttribute* this_ptr, app::String* description)
    IL2CPP_REGISTER_METHOD(0x021BC650, app::String*, get_Description, app::TimersDescriptionAttribute* this_ptr)
} // namespace app::classes::System::Timers::TimersDescriptionAttribute
