#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSpanFormat_FormatLiterals.h>
#include <Modloader/app/structs/TimeSpanFormat_FormatLiterals__Boxed.h>

namespace app::classes::System::Globalization::TimeSpanFormat_FormatLiterals {
    IL2CPP_REGISTER_METHOD(0x001D3A80, app::String*, get_Start, app::TimeSpanFormat_FormatLiterals__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001D3AC0, app::String*, get_DayHourSep, app::TimeSpanFormat_FormatLiterals__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001D3B00, app::String*, get_HourMinuteSep, app::TimeSpanFormat_FormatLiterals__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001D3B40, app::String*, get_MinuteSecondSep, app::TimeSpanFormat_FormatLiterals__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001D3B80, app::String*, get_SecondFractionSep, app::TimeSpanFormat_FormatLiterals__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001D3BC0, app::String*, get_End, app::TimeSpanFormat_FormatLiterals__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DF1840, app::TimeSpanFormat_FormatLiterals, InitInvariant, bool is_negative)
    IL2CPP_REGISTER_METHOD(0x001D3C00, void, Init, app::TimeSpanFormat_FormatLiterals__Boxed* this_ptr, app::String* format, bool use_invariant_field_lengths)
} // namespace app::classes::System::Globalization::TimeSpanFormat_FormatLiterals
