#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ICollection_1_System_Net_Http_Headers_NameValueHeaderValue_.h>
#include <Modloader/app/structs/Lexer.h>
#include <Modloader/app/structs/List_1_System_Net_Http_Headers_NameValueWithParametersHeaderValue_.h>
#include <Modloader/app/structs/NameValueWithParametersHeaderValue.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Token.h>

namespace app::classes::System::Net::Http::Headers::NameValueWithParametersHeaderValue {
    IL2CPP_REGISTER_METHOD(0x02D11210, void, ctor_1, app::NameValueWithParametersHeaderValue* this_ptr, app::NameValueWithParametersHeaderValue* source)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_2, app::NameValueWithParametersHeaderValue* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02D11540,
        app::ICollection_1_System_Net_Http_Headers_NameValueHeaderValue_*,
        get_Parameters,
        app::NameValueWithParametersHeaderValue* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02D116A0, app::Object*, ICloneable_Clone, app::NameValueWithParametersHeaderValue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D117F0, bool, Equals, app::NameValueWithParametersHeaderValue* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x02D11970, int32_t, GetHashCode, app::NameValueWithParametersHeaderValue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D11A80, app::String*, ToString, app::NameValueWithParametersHeaderValue* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02D11B50,
        bool,
        TryParse,
        app::String* input,
        int32_t minimal_count,
        app::List_1_System_Net_Http_Headers_NameValueWithParametersHeaderValue_** result
    )
    IL2CPP_REGISTER_METHOD(0x02D11CD0, bool, TryParseElement, app::Lexer* lexer, app::NameValueWithParametersHeaderValue** parsed_value, app::Token* t)
} // namespace app::classes::System::Net::Http::Headers::NameValueWithParametersHeaderValue
