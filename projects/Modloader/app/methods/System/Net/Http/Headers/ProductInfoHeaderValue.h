#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::Http::Headers::ProductInfoHeaderValue {
    IL2CPP_REGISTER_METHOD(0x02D13B10, void, ctor_1, (app::ProductInfoHeaderValue * this_ptr, app::ProductHeaderValue* product))
    IL2CPP_REGISTER_METHODINFO(0x0471BE88, ProductInfoHeaderValue__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_2, (app::ProductInfoHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Comment, (app::ProductInfoHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Comment, (app::ProductInfoHeaderValue * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::ProductHeaderValue*, get_Product, (app::ProductInfoHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Product, (app::ProductInfoHeaderValue * this_ptr, app::ProductHeaderValue* value))
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object*, ICloneable_Clone, (app::ProductInfoHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D13BD0, bool, Equals, (app::ProductInfoHeaderValue * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02D13D10, int32_t, GetHashCode, (app::ProductInfoHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D13D60, bool, TryParse, (app::String * input, int32_t minimal_count, app::List_1_System_Net_Http_Headers_ProductInfoHeaderValue_** result))
    IL2CPP_REGISTER_METHODINFO(0x0475BEA8, ProductInfoHeaderValue_TryParse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D14020, bool, TryParseElement, (app::Lexer * lexer, app::ProductInfoHeaderValue** parsed_value))
    IL2CPP_REGISTER_METHOD(0x02D144F0, app::String*, ToString, (app::ProductInfoHeaderValue * this_ptr))
} // namespace app::classes::System::Net::Http::Headers::ProductInfoHeaderValue
