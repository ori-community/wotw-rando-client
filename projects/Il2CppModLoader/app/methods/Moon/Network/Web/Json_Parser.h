#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Network::Web::Json_Parser {
    IL2CPP_REGISTER_METHOD(0x02E92E80, bool, IsWordBreak, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x02E92F60, void, ctor, (app::Json_Parser * this_ptr, app::String* json_string))
    IL2CPP_REGISTER_METHOD(0x02E930B0, app::Object*, Parse, (app::String * json_string))
    IL2CPP_REGISTER_METHOD(0x02E933B0, void, Dispose, (app::Json_Parser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E933E0, app::Dictionary_2_System_String_System_Object_*, ParseObject, (app::Json_Parser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E93640, app::List_1_System_Object_*, ParseArray, (app::Json_Parser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E93800, app::Object*, ParseValue, (app::Json_Parser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E93830, app::Object*, ParseByToken, (app::Json_Parser * this_ptr, app::Json_Parser_TOKEN__Enum token))
    IL2CPP_REGISTER_METHOD(0x02E93AF0, app::String*, ParseString, (app::Json_Parser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E93F20, app::Object*, ParseNumber, (app::Json_Parser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E94080, void, EatWhitespace, (app::Json_Parser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E94180, uint16_t, get_PeekChar, (app::Json_Parser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E94240, uint16_t, get_NextChar, (app::Json_Parser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E94300, app::String*, get_NextWord, (app::Json_Parser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E94580, app::Json_Parser_TOKEN__Enum, get_NextToken, (app::Json_Parser * this_ptr))
} // namespace app::classes::Moon::Network::Web::Json_Parser
