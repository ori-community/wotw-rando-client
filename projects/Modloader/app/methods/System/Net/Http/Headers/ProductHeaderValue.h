#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ProductHeaderValue.h>
#include <Modloader/app/structs/Lexer.h>
#include <Modloader/app/structs/List_1_System_Net_Http_Headers_ProductHeaderValue_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Token.h>

namespace app::classes::System::Net::Http::Headers::ProductHeaderValue {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ProductHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Name, (app::ProductHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, (app::ProductHeaderValue * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Version, (app::ProductHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Version, (app::ProductHeaderValue * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object*, ICloneable_Clone, (app::ProductHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D13260, bool, Equals, (app::ProductHeaderValue * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02D13550, int32_t, GetHashCode, (app::ProductHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D135E0, bool, TryParse, (app::String * input, int32_t minimal_count, app::List_1_System_Net_Http_Headers_ProductHeaderValue_** result))
    IL2CPP_REGISTER_METHOD(0x02D13760, bool, TryParseElement, (app::Lexer * lexer, app::ProductHeaderValue** parsed_value, app::Token* t))
    IL2CPP_REGISTER_METHOD(0x02D13A70, app::String*, ToString, (app::ProductHeaderValue * this_ptr))
} // namespace app::classes::System::Net::Http::Headers::ProductHeaderValue
