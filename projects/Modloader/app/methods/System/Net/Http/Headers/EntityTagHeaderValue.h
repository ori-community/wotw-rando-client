#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EntityTagHeaderValue.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Lexer.h>
#include <Modloader/app/structs/Token.h>
#include <Modloader/app/structs/List_1_System_Net_Http_Headers_EntityTagHeaderValue_.h>

namespace app::classes::System::Net::Http::Headers::EntityTagHeaderValue {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EntityTagHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsWeak, (app::EntityTagHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_IsWeak, (app::EntityTagHeaderValue * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Tag, (app::EntityTagHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Tag, (app::EntityTagHeaderValue * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object*, ICloneable_Clone, (app::EntityTagHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D07810, bool, Equals, (app::EntityTagHeaderValue * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02D079B0, int32_t, GetHashCode, (app::EntityTagHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D079F0, bool, TryParse_1, (app::String * input, app::EntityTagHeaderValue** parsed_value))
    IL2CPP_REGISTER_METHODINFO(0x04714D78, EntityTagHeaderValue_TryParse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D07BB0, bool, TryParseElement, (app::Lexer * lexer, app::EntityTagHeaderValue** parsed_value, app::Token* t))
    IL2CPP_REGISTER_METHODINFO(0x04706688, EntityTagHeaderValue_TryParseElement__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D07F40, bool, TryParse_2, (app::String * input, int32_t minimal_count, app::List_1_System_Net_Http_Headers_EntityTagHeaderValue_** result))
    IL2CPP_REGISTER_METHODINFO(0x047530F0, EntityTagHeaderValue_TryParse_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D080C0, app::String*, ToString, (app::EntityTagHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D08160, void, cctor, ())
} // namespace app::classes::System::Net::Http::Headers::EntityTagHeaderValue
