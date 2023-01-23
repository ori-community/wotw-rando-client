#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AuthenticationHeaderValue.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/List_1_System_Net_Http_Headers_AuthenticationHeaderValue_.h>
#include <Modloader/app/structs/Lexer.h>
#include <Modloader/app/structs/Token.h>

namespace app::classes::System::Net::Http::Headers::AuthenticationHeaderValue {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AuthenticationHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Parameter, (app::AuthenticationHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Parameter, (app::AuthenticationHeaderValue * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Scheme, (app::AuthenticationHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Scheme, (app::AuthenticationHeaderValue * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object*, ICloneable_Clone, (app::AuthenticationHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D02310, bool, Equals, (app::AuthenticationHeaderValue * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02D02520, int32_t, GetHashCode, (app::AuthenticationHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D025C0, bool, TryParse_1, (app::String * input, app::AuthenticationHeaderValue** parsed_value))
    IL2CPP_REGISTER_METHODINFO(0x04758600, AuthenticationHeaderValue_TryParse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D02760, bool, TryParse_2, (app::String * input, int32_t minimal_count, app::List_1_System_Net_Http_Headers_AuthenticationHeaderValue_** result))
    IL2CPP_REGISTER_METHODINFO(0x04729B78, AuthenticationHeaderValue_TryParse_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D028E0, bool, TryParseElement, (app::Lexer * lexer, app::AuthenticationHeaderValue** parsed_value, app::Token* t))
    IL2CPP_REGISTER_METHODINFO(0x0473F7B8, AuthenticationHeaderValue_TryParseElement__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D02B90, app::String*, ToString, (app::AuthenticationHeaderValue * this_ptr))
} // namespace app::classes::System::Net::Http::Headers::AuthenticationHeaderValue
