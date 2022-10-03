#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Globalization::TimeSpanFormat {
    IL2CPP_REGISTER_METHOD(0x01DF0190, app::String*, IntToString, (int32_t n, int32_t digits))
    IL2CPP_REGISTER_METHOD(0x01DF01C0, app::String*, Format, (app::TimeSpan value, app::String* format, app::IFormatProvider* format_provider))
    IL2CPP_REGISTER_METHODINFO(0x04796A18, TimeSpanFormat_Format__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DF0430, app::String*, FormatStandard, (app::TimeSpan value, bool is_invariant, app::String* format, app::TimeSpanFormat_Pattern__Enum pattern))
    IL2CPP_REGISTER_METHOD(0x01DF0A90, app::String*, FormatCustomized, (app::TimeSpan value, app::String* format, app::DateTimeFormatInfo* dtfi))
    IL2CPP_REGISTER_METHODINFO(0x0476F6F8, TimeSpanFormat_FormatCustomized__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DF1760, void, cctor, ())
} // namespace app::classes::System::Globalization::TimeSpanFormat
