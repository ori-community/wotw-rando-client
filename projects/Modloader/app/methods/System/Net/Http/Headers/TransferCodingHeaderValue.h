#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ICollection_1_System_Net_Http_Headers_NameValueHeaderValue_.h>
#include <Modloader/app/structs/Lexer.h>
#include <Modloader/app/structs/List_1_System_Net_Http_Headers_TransferCodingHeaderValue_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Token.h>
#include <Modloader/app/structs/TransferCodingHeaderValue.h>

namespace app::classes::System::Net::Http::Headers::TransferCodingHeaderValue {
    IL2CPP_REGISTER_METHOD(0x02D18450, void, ctor_1, app::TransferCodingHeaderValue* this_ptr, app::TransferCodingHeaderValue* source)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_2, app::TransferCodingHeaderValue* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02D18860,
        app::ICollection_1_System_Net_Http_Headers_NameValueHeaderValue_*,
        get_Parameters,
        app::TransferCodingHeaderValue* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02D189C0, app::Object*, ICloneable_Clone, app::TransferCodingHeaderValue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D18B10, bool, Equals, app::TransferCodingHeaderValue* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x02D18D50, int32_t, GetHashCode, app::TransferCodingHeaderValue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D18E20, app::String*, ToString, app::TransferCodingHeaderValue* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02D18EC0,
        bool,
        TryParse,
        app::String* input,
        int32_t minimal_count,
        app::List_1_System_Net_Http_Headers_TransferCodingHeaderValue_** result
    )
    IL2CPP_REGISTER_METHOD(0x02D19040, bool, TryParseElement, app::Lexer* lexer, app::TransferCodingHeaderValue** parsed_value, app::Token* t)
} // namespace app::classes::System::Net::Http::Headers::TransferCodingHeaderValue
