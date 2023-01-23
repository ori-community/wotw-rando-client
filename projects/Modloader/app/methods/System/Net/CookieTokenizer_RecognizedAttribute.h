#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CookieTokenizer_RecognizedAttribute__Boxed.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/CookieToken__Enum.h>

namespace app::classes::System::Net::CookieTokenizer_RecognizedAttribute {
    IL2CPP_REGISTER_METHOD(0x0011D2D0, void, ctor, (app::CookieTokenizer_RecognizedAttribute__Boxed * this_ptr, app::String* name, app::CookieToken__Enum token))
    IL2CPP_REGISTER_METHOD(0x0010A860, app::CookieToken__Enum, get_Token, (app::CookieTokenizer_RecognizedAttribute__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D7BA0, bool, IsEqualTo, (app::CookieTokenizer_RecognizedAttribute__Boxed * this_ptr, app::String* value))
} // namespace app::classes::System::Net::CookieTokenizer_RecognizedAttribute
