#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DateTimeResult__Boxed.h>
#include <Modloader/app/structs/ParseFailureKind__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::DateTimeResult {
    IL2CPP_REGISTER_METHOD(0x0013D290, void, Init, (app::DateTimeResult__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013D2C0, void, SetDate, (app::DateTimeResult__Boxed * this_ptr, int32_t year, int32_t month, int32_t day))
    IL2CPP_REGISTER_METHOD(0x0013D2D0, void, SetFailure_1, (app::DateTimeResult__Boxed * this_ptr, app::ParseFailureKind__Enum failure, app::String* failure_message_i_d, app::Object* failure_message_format_argument))
    IL2CPP_REGISTER_METHOD(0x0013D2E0, void, SetFailure_2, (app::DateTimeResult__Boxed * this_ptr, app::ParseFailureKind__Enum failure, app::String* failure_message_i_d, app::Object* failure_message_format_argument, app::String* failure_argument_name))
} // namespace app::classes::System::DateTimeResult
