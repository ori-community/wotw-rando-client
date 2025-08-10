#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/XsdDuration.h>
#include <Modloader/app/structs/XsdDuration_DurationType__Enum.h>
#include <Modloader/app/structs/XsdDuration__Boxed.h>

namespace app::classes::System::Xml::Schema::XsdDuration {
    IL2CPP_REGISTER_METHOD(
        0x001C6280,
        void,
        ctor_1,
        app::XsdDuration__Boxed* this_ptr,
        bool is_negative,
        int32_t years,
        int32_t months,
        int32_t days,
        int32_t hours,
        int32_t minutes,
        int32_t seconds,
        int32_t nanoseconds
    )
    IL2CPP_REGISTER_METHOD(0x001C6290, void, ctor_2, app::XsdDuration__Boxed* this_ptr, app::TimeSpan time_span)
    IL2CPP_REGISTER_METHOD(
        0x001C62A0,
        void,
        ctor_3,
        app::XsdDuration__Boxed* this_ptr,
        app::TimeSpan time_span,
        app::XsdDuration_DurationType__Enum duration_type
    )
    IL2CPP_REGISTER_METHOD(0x001C62B0, void, ctor_4, app::XsdDuration__Boxed* this_ptr, app::String* s)
    IL2CPP_REGISTER_METHOD(0x001C62C0, void, ctor_5, app::XsdDuration__Boxed* this_ptr, app::String* s, app::XsdDuration_DurationType__Enum duration_type)
    IL2CPP_REGISTER_METHOD(0x001C62D0, bool, get_IsNegative, app::XsdDuration__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, get_Years, app::XsdDuration__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00113CE0, int32_t, get_Months, app::XsdDuration__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0010A860, int32_t, get_Days, app::XsdDuration__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001155B0, int32_t, get_Hours, app::XsdDuration__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00114150, int32_t, get_Minutes, app::XsdDuration__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00115920, int32_t, get_Seconds, app::XsdDuration__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001C62E0, int32_t, get_Nanoseconds, app::XsdDuration__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001C62F0, app::TimeSpan, ToTimeSpan_1, app::XsdDuration__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001C6300, app::TimeSpan, ToTimeSpan_2, app::XsdDuration__Boxed* this_ptr, app::XsdDuration_DurationType__Enum duration_type)
    IL2CPP_REGISTER_METHOD(0x001C6310, app::Exception*, TryToTimeSpan_1, app::XsdDuration__Boxed* this_ptr, app::TimeSpan* result)
    IL2CPP_REGISTER_METHOD(
        0x001C6320,
        app::Exception*,
        TryToTimeSpan_2,
        app::XsdDuration__Boxed* this_ptr,
        app::XsdDuration_DurationType__Enum duration_type,
        app::TimeSpan* result
    )
    IL2CPP_REGISTER_METHOD(0x001C6330, app::String*, ToString_1, app::XsdDuration__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001C6340, app::String*, ToString_2, app::XsdDuration__Boxed* this_ptr, app::XsdDuration_DurationType__Enum duration_type)
    IL2CPP_REGISTER_METHOD(0x01C820C0, app::Exception*, TryParse_1, app::String* s, app::XsdDuration* result)
    IL2CPP_REGISTER_METHOD(0x01C820D0, app::Exception*, TryParse_2, app::String* s, app::XsdDuration_DurationType__Enum duration_type, app::XsdDuration* result)
    IL2CPP_REGISTER_METHOD(0x01C82F90, app::String*, TryParseDigits, app::String* s, int32_t* offset, bool eat_digits, int32_t* result, int32_t* num_digits)
} // namespace app::classes::System::Xml::Schema::XsdDuration
