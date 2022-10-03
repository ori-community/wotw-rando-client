#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Text::RegularExpressions::RegexPrefix {
    IL2CPP_REGISTER_METHOD(0x01669060, void, ctor, (app::RegexPrefix * this_ptr, app::String* prefix, bool ci))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Prefix, (app::RegexPrefix * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_CaseInsensitive, (app::RegexPrefix * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A76100, app::RegexPrefix*, get_Empty, ())
    IL2CPP_REGISTER_METHOD(0x02A761A0, void, cctor, ())
} // namespace app::classes::System::Text::RegularExpressions::RegexPrefix
