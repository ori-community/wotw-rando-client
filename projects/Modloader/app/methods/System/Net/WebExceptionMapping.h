#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WebExceptionStatus__Enum.h>

namespace app::classes::System::Net::WebExceptionMapping {
    IL2CPP_REGISTER_METHOD(0x01D70070, app::String*, GetWebStatusString, app::WebExceptionStatus__Enum status)
    IL2CPP_REGISTER_METHOD(0x01D70280, void, cctor, )
} // namespace app::classes::System::Net::WebExceptionMapping
