#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TimeSpan__Boxed.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSpan.h>

namespace app::classes::System::TimeSpan {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor_1, (app::TimeSpan__Boxed * this_ptr, int64_t ticks))
    IL2CPP_REGISTER_METHOD(0x002034B0, void, ctor_2, (app::TimeSpan__Boxed * this_ptr, int32_t hours, int32_t minutes, int32_t seconds))
    IL2CPP_REGISTER_METHOD(0x002034C0, void, ctor_3, (app::TimeSpan__Boxed * this_ptr, int32_t days, int32_t hours, int32_t minutes, int32_t seconds))
    IL2CPP_REGISTER_METHOD(0x002034F0, void, ctor_4, (app::TimeSpan__Boxed * this_ptr, int32_t days, int32_t hours, int32_t minutes, int32_t seconds, int32_t milliseconds))
    IL2CPP_REGISTER_METHOD(0x00107C00, int64_t, get_Ticks, (app::TimeSpan__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00203500, int32_t, get_Days, (app::TimeSpan__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00203520, int32_t, get_Hours, (app::TimeSpan__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00203560, int32_t, get_Milliseconds, (app::TimeSpan__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002035B0, int32_t, get_Minutes, (app::TimeSpan__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00203600, int32_t, get_Seconds, (app::TimeSpan__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00203650, double, get_TotalDays, (app::TimeSpan__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00203670, double, get_TotalHours, (app::TimeSpan__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00203690, double, get_TotalMilliseconds, (app::TimeSpan__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002036D0, double, get_TotalMinutes, (app::TimeSpan__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002036F0, double, get_TotalSeconds, (app::TimeSpan__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00203710, app::TimeSpan, Add, (app::TimeSpan__Boxed * this_ptr, app::TimeSpan ts))
    IL2CPP_REGISTER_METHOD(0x027AD040, int32_t, Compare, (app::TimeSpan t1, app::TimeSpan t2))
    IL2CPP_REGISTER_METHOD(0x00203720, int32_t, CompareTo_1, (app::TimeSpan__Boxed * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x00203730, int32_t, CompareTo_2, (app::TimeSpan__Boxed * this_ptr, app::TimeSpan value))
    IL2CPP_REGISTER_METHOD(0x027AD180, app::TimeSpan, FromDays, (double value))
    IL2CPP_REGISTER_METHOD(0x00203750, app::TimeSpan, Duration, (app::TimeSpan__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00203850, bool, Equals_1, (app::TimeSpan__Boxed * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals_2, (app::TimeSpan__Boxed * this_ptr, app::TimeSpan obj))
    IL2CPP_REGISTER_METHOD(0x00154D60, int32_t, GetHashCode, (app::TimeSpan__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027AD300, app::TimeSpan, FromHours, (double value))
    IL2CPP_REGISTER_METHOD(0x027AD3B0, app::TimeSpan, Interval, (double value, int32_t scale))
    IL2CPP_REGISTER_METHOD(0x027AD550, app::TimeSpan, FromMilliseconds, (double value))
    IL2CPP_REGISTER_METHOD(0x027AD600, app::TimeSpan, FromMinutes, (double value))
    IL2CPP_REGISTER_METHOD(0x00203860, app::TimeSpan, Negate, (app::TimeSpan__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027AD7B0, app::TimeSpan, FromSeconds, (double value))
    IL2CPP_REGISTER_METHOD(0x00203870, app::TimeSpan, Subtract, (app::TimeSpan__Boxed * this_ptr, app::TimeSpan ts))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::TimeSpan, FromTicks, (int64_t value))
    IL2CPP_REGISTER_METHOD(0x027AD950, int64_t, TimeToTicks, (int32_t hour, int32_t minute, int32_t second))
    IL2CPP_REGISTER_METHOD(0x027ADA50, app::TimeSpan, Parse_1, (app::String * s))
    IL2CPP_REGISTER_METHOD(0x027ADAF0, app::TimeSpan, Parse_2, (app::String * input, app::IFormatProvider* format_provider))
    IL2CPP_REGISTER_METHOD(0x027ADBA0, bool, TryParse, (app::String * s, app::TimeSpan* result))
    IL2CPP_REGISTER_METHOD(0x00203880, app::String*, ToString_1, (app::TimeSpan__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00203890, app::String*, ToString_2, (app::TimeSpan__Boxed * this_ptr, app::String* format))
    IL2CPP_REGISTER_METHOD(0x002038A0, app::String*, ToString_3, (app::TimeSpan__Boxed * this_ptr, app::String* format, app::IFormatProvider* format_provider))
    IL2CPP_REGISTER_METHOD(0x027ADF80, app::TimeSpan, op_Subtraction, (app::TimeSpan t1, app::TimeSpan t2))
    IL2CPP_REGISTER_METHOD(0x027ADFA0, app::TimeSpan, op_Addition, (app::TimeSpan t1, app::TimeSpan t2))
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, op_Equality, (app::TimeSpan t1, app::TimeSpan t2))
    IL2CPP_REGISTER_METHOD(0x015F81A0, bool, op_Inequality, (app::TimeSpan t1, app::TimeSpan t2))
    IL2CPP_REGISTER_METHOD(0x027ADFC0, bool, op_LessThan, (app::TimeSpan t1, app::TimeSpan t2))
    IL2CPP_REGISTER_METHOD(0x027ADFD0, bool, op_LessThanOrEqual, (app::TimeSpan t1, app::TimeSpan t2))
    IL2CPP_REGISTER_METHOD(0x027ADFE0, bool, op_GreaterThan, (app::TimeSpan t1, app::TimeSpan t2))
    IL2CPP_REGISTER_METHOD(0x027ADFF0, bool, op_GreaterThanOrEqual, (app::TimeSpan t1, app::TimeSpan t2))
    IL2CPP_REGISTER_METHOD(0x027AE000, bool, GetLegacyFormatMode, ())
    IL2CPP_REGISTER_METHOD(0x027AE0A0, bool, get_LegacyMode, ())
    IL2CPP_REGISTER_METHOD(0x027AE260, void, cctor, ())
    inline app::TimeSpan operator-(app::TimeSpan t1, app::TimeSpan t2) {
        return op_Subtraction(t1, t2);
    }
    inline app::TimeSpan operator+(app::TimeSpan t1, app::TimeSpan t2) {
        return op_Addition(t1, t2);
    }
    inline bool operator==(app::TimeSpan t1, app::TimeSpan t2) {
        return op_Equality(t1, t2);
    }
    inline bool operator!=(app::TimeSpan t1, app::TimeSpan t2) {
        return op_Inequality(t1, t2);
    }
    inline bool operator<(app::TimeSpan t1, app::TimeSpan t2) {
        return op_LessThan(t1, t2);
    }
    inline bool operator<=(app::TimeSpan t1, app::TimeSpan t2) {
        return op_LessThanOrEqual(t1, t2);
    }
    inline bool operator>(app::TimeSpan t1, app::TimeSpan t2) {
        return op_GreaterThan(t1, t2);
    }
    inline bool operator>=(app::TimeSpan t1, app::TimeSpan t2) {
        return op_GreaterThanOrEqual(t1, t2);
    }
} // namespace app::classes::System::TimeSpan
