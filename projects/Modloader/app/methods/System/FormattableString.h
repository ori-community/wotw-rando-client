#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::FormattableString {
    IL2CPP_REGISTER_METHOD(0x01A1CA60, app::String*, IFormattable_ToString, (app::FormattableString * this_ptr, app::String* ignored, app::IFormatProvider* format_provider))
    IL2CPP_REGISTER_METHOD(0x01A1CA80, app::String*, ToString, (app::FormattableString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::FormattableString * this_ptr))
} // namespace app::classes::System::FormattableString
