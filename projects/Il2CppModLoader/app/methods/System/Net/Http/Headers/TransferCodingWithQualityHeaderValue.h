#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TransferCodingWithQualityHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D192E0, bool, TryParse, (app::String * input, int32_t minimal_count, app::List_1_System_Net_Http_Headers_TransferCodingWithQualityHeaderValue_ * * result))
    IL2CPP_REGISTER_METHODINFO(0x0475ADC8, TransferCodingWithQualityHeaderValue_TryParse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D19460, bool, TryParseElement, (app::Lexer * lexer, app::TransferCodingWithQualityHeaderValue * * parsed_value, app::Token * t))
    IL2CPP_REGISTER_METHODINFO(0x047933B8, TransferCodingWithQualityHeaderValue_TryParseElement__MethodInfo)
}
