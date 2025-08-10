#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/DateTimeOffset.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/XsdDateTime.h>
#include <Modloader/app/structs/XsdDateTimeFlags__Enum.h>
#include <Modloader/app/structs/XsdDateTime_DateTimeTypeCode__Enum.h>
#include <Modloader/app/structs/XsdDateTime_Parser.h>
#include <Modloader/app/structs/XsdDateTime_XsdDateTimeKind__Enum.h>
#include <Modloader/app/structs/XsdDateTime__Boxed.h>

namespace app::classes::System::Xml::Schema::XsdDateTime {
    IL2CPP_REGISTER_METHOD(0x001C5CD0, void, ctor_1, app::XsdDateTime__Boxed* this_ptr, app::String* text, app::XsdDateTimeFlags__Enum kinds)
    IL2CPP_REGISTER_METHOD(0x001C5CE0, void, ctor_2, app::XsdDateTime__Boxed* this_ptr, app::XsdDateTime_Parser parser)
    IL2CPP_REGISTER_METHOD(0x001C5D30, void, InitiateXsdDateTime, app::XsdDateTime__Boxed* this_ptr, app::XsdDateTime_Parser parser)
    IL2CPP_REGISTER_METHOD(0x01C7D070, bool, TryParse, app::String* text, app::XsdDateTimeFlags__Enum kinds, app::XsdDateTime* result)
    IL2CPP_REGISTER_METHOD(0x001C5D70, void, ctor_3, app::XsdDateTime__Boxed* this_ptr, app::DateTime date_time, app::XsdDateTimeFlags__Enum kinds)
    IL2CPP_REGISTER_METHOD(0x001C5D80, void, ctor_4, app::XsdDateTime__Boxed* this_ptr, app::DateTimeOffset date_time_offset)
    IL2CPP_REGISTER_METHOD(0x001C5DB0, void, ctor_5, app::XsdDateTime__Boxed* this_ptr, app::DateTimeOffset date_time_offset, app::XsdDateTimeFlags__Enum kinds)
    IL2CPP_REGISTER_METHOD(0x001C5DD0, app::XsdDateTime_DateTimeTypeCode__Enum, get_InternalTypeCode, app::XsdDateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001C5DE0, app::XsdDateTime_XsdDateTimeKind__Enum, get_InternalKind, app::XsdDateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001C5DF0, int32_t, get_Year, app::XsdDateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001C5E00, int32_t, get_Month, app::XsdDateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001C5E10, int32_t, get_Day, app::XsdDateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001C5E20, int32_t, get_Hour, app::XsdDateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001C5E70, int32_t, get_Minute, app::XsdDateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001C5EC0, int32_t, get_Second, app::XsdDateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001C5F10, int32_t, get_Fraction, app::XsdDateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00114130, int32_t, get_ZoneHour, app::XsdDateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00114120, int32_t, get_ZoneMinute, app::XsdDateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C7D680, app::DateTime, op_Implicit_1, app::XsdDateTime xdt)
    IL2CPP_REGISTER_METHOD(0x01C7DB30, app::DateTimeOffset, op_Implicit_2, app::XsdDateTime xdt)
    IL2CPP_REGISTER_METHOD(0x001C5F20, app::String*, ToString, app::XsdDateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001C5F30, void, PrintDate, app::XsdDateTime__Boxed* this_ptr, app::StringBuilder* sb)
    IL2CPP_REGISTER_METHOD(0x001C5F40, void, PrintTime, app::XsdDateTime__Boxed* this_ptr, app::StringBuilder* sb)
    IL2CPP_REGISTER_METHOD(0x001C5F50, void, PrintZone, app::XsdDateTime__Boxed* this_ptr, app::StringBuilder* sb)
    IL2CPP_REGISTER_METHOD(
        0x001C5F60,
        void,
        IntToCharArray,
        app::XsdDateTime__Boxed* this_ptr,
        app::Char__Array* text,
        int32_t start,
        int32_t value,
        int32_t digits
    )
    IL2CPP_REGISTER_METHOD(0x001C5F70, void, ShortToCharArray, app::XsdDateTime__Boxed* this_ptr, app::Char__Array* text, int32_t start, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01C7EF10, void, cctor, )
} // namespace app::classes::System::Xml::Schema::XsdDateTime
