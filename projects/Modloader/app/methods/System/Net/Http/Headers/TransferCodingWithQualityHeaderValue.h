#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TransferCodingWithQualityHeaderValue.h>
#include <Modloader/app/structs/Lexer.h>
#include <Modloader/app/structs/List_1_System_Net_Http_Headers_TransferCodingWithQualityHeaderValue_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Token.h>

namespace app::classes::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TransferCodingWithQualityHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D192E0, bool, TryParse, (app::String * input, int32_t minimal_count, app::List_1_System_Net_Http_Headers_TransferCodingWithQualityHeaderValue_** result))
    IL2CPP_REGISTER_METHOD(0x02D19460, bool, TryParseElement, (app::Lexer * lexer, app::TransferCodingWithQualityHeaderValue** parsed_value, app::Token* t))
} // namespace app::classes::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue
