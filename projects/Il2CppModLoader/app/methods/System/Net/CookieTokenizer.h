#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::CookieTokenizer {
    IL2CPP_REGISTER_METHOD(0x01EA8A40, void, ctor, (app::CookieTokenizer * this_ptr, app::String* token_stream))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_EndOfCookie, (app::CookieTokenizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_EndOfCookie, (app::CookieTokenizer * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01EA8A60, bool, get_Eof, (app::CookieTokenizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_Name, (app::CookieTokenizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Name, (app::CookieTokenizer * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_Quoted, (app::CookieTokenizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_Quoted, (app::CookieTokenizer * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00654950, app::CookieToken__Enum, get_Token, (app::CookieTokenizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00654960, void, set_Token, (app::CookieTokenizer * this_ptr, app::CookieToken__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_Value, (app::CookieTokenizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_Value, (app::CookieTokenizer * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01EA8A70, app::String*, Extract, (app::CookieTokenizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EA8B40, app::CookieToken__Enum, FindNext, (app::CookieTokenizer * this_ptr, bool ignore_comma, bool ignore_equals))
    IL2CPP_REGISTER_METHOD(0x01EA8E20, app::CookieToken__Enum, Next, (app::CookieTokenizer * this_ptr, bool first, bool parse_response_cookies))
    IL2CPP_REGISTER_METHOD(0x01EA8FD0, void, Reset, (app::CookieTokenizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EA9090, app::CookieToken__Enum, TokenFromName, (app::CookieTokenizer * this_ptr, bool parse_response_cookies))
    IL2CPP_REGISTER_METHOD(0x01EA9380, void, cctor, ())
} // namespace app::classes::System::Net::CookieTokenizer
