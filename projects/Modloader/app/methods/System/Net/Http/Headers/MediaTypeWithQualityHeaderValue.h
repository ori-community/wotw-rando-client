#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MediaTypeWithQualityHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D0FD20, bool, TryParseElement, (app::Lexer * lexer, app::MediaTypeWithQualityHeaderValue** parsed_value, app::Token* t))
    IL2CPP_REGISTER_METHODINFO(0x04725FD0, MediaTypeWithQualityHeaderValue_TryParseElement__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D10040, bool, TryParse, (app::String * input, int32_t minimal_count, app::List_1_System_Net_Http_Headers_MediaTypeWithQualityHeaderValue_** result))
    IL2CPP_REGISTER_METHODINFO(0x047805B8, MediaTypeWithQualityHeaderValue_TryParse__MethodInfo)
} // namespace app::classes::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue
