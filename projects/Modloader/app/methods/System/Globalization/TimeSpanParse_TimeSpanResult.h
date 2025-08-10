#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSpanParse_ParseFailureKind__Enum.h>
#include <Modloader/app/structs/TimeSpanParse_TimeSpanResult__Boxed.h>
#include <Modloader/app/structs/TimeSpanParse_TimeSpanThrowStyle__Enum.h>

namespace app::classes::System::Globalization::TimeSpanParse_TimeSpanResult {
    IL2CPP_REGISTER_METHOD(0x001D43C0, void, Init, app::TimeSpanParse_TimeSpanResult__Boxed* this_ptr, app::TimeSpanParse_TimeSpanThrowStyle__Enum can_throw)
    IL2CPP_REGISTER_METHOD(
        0x001D43D0,
        void,
        SetFailure_1,
        app::TimeSpanParse_TimeSpanResult__Boxed* this_ptr,
        app::TimeSpanParse_ParseFailureKind__Enum failure,
        app::String* failure_message_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x001D43F0,
        void,
        SetFailure_2,
        app::TimeSpanParse_TimeSpanResult__Boxed* this_ptr,
        app::TimeSpanParse_ParseFailureKind__Enum failure,
        app::String* failure_message_i_d,
        app::Object* failure_message_format_argument
    )
    IL2CPP_REGISTER_METHOD(
        0x001D4410,
        void,
        SetFailure_3,
        app::TimeSpanParse_TimeSpanResult__Boxed* this_ptr,
        app::TimeSpanParse_ParseFailureKind__Enum failure,
        app::String* failure_message_i_d,
        app::Object* failure_message_format_argument,
        app::String* failure_argument_name
    )
    IL2CPP_REGISTER_METHOD(0x001D4420, app::Exception*, GetTimeSpanParseException, app::TimeSpanParse_TimeSpanResult__Boxed* this_ptr)
} // namespace app::classes::System::Globalization::TimeSpanParse_TimeSpanResult
