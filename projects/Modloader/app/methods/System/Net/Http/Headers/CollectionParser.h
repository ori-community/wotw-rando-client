#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/Lexer.h>
#include <Modloader/app/structs/Token.h>
#include <Modloader/app/structs/ElementTryParser_1_System_Object_.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/ElementTryParser_1_AuthenticationHeaderValue_.h>
#include <Modloader/app/structs/List_1_System_Net_Http_Headers_AuthenticationHeaderValue_.h>
#include <Modloader/app/structs/ElementTryParser_1_System_String_.h>
#include <Modloader/app/structs/ElementTryParser_1_EntityTagHeaderValue_.h>
#include <Modloader/app/structs/List_1_System_Net_Http_Headers_EntityTagHeaderValue_.h>
#include <Modloader/app/structs/ElementTryParser_1_MediaTypeWithQualityHeaderValue_.h>
#include <Modloader/app/structs/List_1_System_Net_Http_Headers_MediaTypeWithQualityHeaderValue_.h>
#include <Modloader/app/structs/ElementTryParser_1_NameValueHeaderValue_.h>
#include <Modloader/app/structs/List_1_System_Net_Http_Headers_NameValueHeaderValue_.h>
#include <Modloader/app/structs/ElementTryParser_1_NameValueWithParametersHeaderValue_.h>
#include <Modloader/app/structs/List_1_System_Net_Http_Headers_NameValueWithParametersHeaderValue_.h>
#include <Modloader/app/structs/ElementTryParser_1_ProductHeaderValue_.h>
#include <Modloader/app/structs/List_1_System_Net_Http_Headers_ProductHeaderValue_.h>
#include <Modloader/app/structs/ElementTryParser_1_StringWithQualityHeaderValue_.h>
#include <Modloader/app/structs/List_1_System_Net_Http_Headers_StringWithQualityHeaderValue_.h>
#include <Modloader/app/structs/ElementTryParser_1_TransferCodingHeaderValue_.h>
#include <Modloader/app/structs/List_1_System_Net_Http_Headers_TransferCodingHeaderValue_.h>
#include <Modloader/app/structs/ElementTryParser_1_TransferCodingWithQualityHeaderValue_.h>
#include <Modloader/app/structs/List_1_System_Net_Http_Headers_TransferCodingWithQualityHeaderValue_.h>
#include <Modloader/app/structs/ElementTryParser_1_ViaHeaderValue_.h>
#include <Modloader/app/structs/List_1_System_Net_Http_Headers_ViaHeaderValue_.h>
#include <Modloader/app/structs/ElementTryParser_1_WarningHeaderValue_.h>
#include <Modloader/app/structs/List_1_System_Net_Http_Headers_WarningHeaderValue_.h>

namespace app::classes::System::Net::Http::Headers::CollectionParser {
    IL2CPP_REGISTER_METHOD(0x02D05710, bool, TryParse_1, (app::String * input, int32_t minimal_count, app::List_1_System_String_** result))
    IL2CPP_REGISTER_METHODINFO(0x04758B00, CollectionParser_TryParse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D05890, bool, TryParseStringElement, (app::Lexer * lexer, app::String** parsed_value, app::Token* t))
    IL2CPP_REGISTER_METHODINFO(0x0478E690, CollectionParser_TryParseStringElement__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01567E00, bool, TryParse_2, (app::String * input, int32_t minimal_count, app::ElementTryParser_1_System_Object_* parser, app::List_1_System_Object_** result))
    IL2CPP_REGISTER_METHOD(0x01567E00, bool, TryParse_3, (app::String * input, int32_t minimal_count, app::ElementTryParser_1_AuthenticationHeaderValue_* parser, app::List_1_System_Net_Http_Headers_AuthenticationHeaderValue_** result))
    IL2CPP_REGISTER_METHODINFO(0x0474BD48, CollectionParser_TryParse_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01567E00, bool, TryParse_4, (app::String * input, int32_t minimal_count, app::ElementTryParser_1_System_String_* parser, app::List_1_System_String_** result))
    IL2CPP_REGISTER_METHODINFO(0x0474BF78, CollectionParser_TryParse_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01567E00, bool, TryParse_5, (app::String * input, int32_t minimal_count, app::ElementTryParser_1_EntityTagHeaderValue_* parser, app::List_1_System_Net_Http_Headers_EntityTagHeaderValue_** result))
    IL2CPP_REGISTER_METHODINFO(0x04715E68, CollectionParser_TryParse_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01567E00, bool, TryParse_6, (app::String * input, int32_t minimal_count, app::ElementTryParser_1_MediaTypeWithQualityHeaderValue_* parser, app::List_1_System_Net_Http_Headers_MediaTypeWithQualityHeaderValue_** result))
    IL2CPP_REGISTER_METHODINFO(0x0475AB20, CollectionParser_TryParse_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01567E00, bool, TryParse_7, (app::String * input, int32_t minimal_count, app::ElementTryParser_1_NameValueHeaderValue_* parser, app::List_1_System_Net_Http_Headers_NameValueHeaderValue_** result))
    IL2CPP_REGISTER_METHODINFO(0x04793D58, CollectionParser_TryParse_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01567E00, bool, TryParse_8, (app::String * input, int32_t minimal_count, app::ElementTryParser_1_NameValueWithParametersHeaderValue_* parser, app::List_1_System_Net_Http_Headers_NameValueWithParametersHeaderValue_** result))
    IL2CPP_REGISTER_METHODINFO(0x04740608, CollectionParser_TryParse_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01567E00, bool, TryParse_9, (app::String * input, int32_t minimal_count, app::ElementTryParser_1_ProductHeaderValue_* parser, app::List_1_System_Net_Http_Headers_ProductHeaderValue_** result))
    IL2CPP_REGISTER_METHODINFO(0x04785448, CollectionParser_TryParse_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01567E00, bool, TryParse_10, (app::String * input, int32_t minimal_count, app::ElementTryParser_1_StringWithQualityHeaderValue_* parser, app::List_1_System_Net_Http_Headers_StringWithQualityHeaderValue_** result))
    IL2CPP_REGISTER_METHODINFO(0x047525B8, CollectionParser_TryParse_9__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01567E00, bool, TryParse_11, (app::String * input, int32_t minimal_count, app::ElementTryParser_1_TransferCodingHeaderValue_* parser, app::List_1_System_Net_Http_Headers_TransferCodingHeaderValue_** result))
    IL2CPP_REGISTER_METHODINFO(0x0478D3F8, CollectionParser_TryParse_10__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01567E00, bool, TryParse_12, (app::String * input, int32_t minimal_count, app::ElementTryParser_1_TransferCodingWithQualityHeaderValue_* parser, app::List_1_System_Net_Http_Headers_TransferCodingWithQualityHeaderValue_** result))
    IL2CPP_REGISTER_METHODINFO(0x047218E0, CollectionParser_TryParse_11__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01567E00, bool, TryParse_13, (app::String * input, int32_t minimal_count, app::ElementTryParser_1_ViaHeaderValue_* parser, app::List_1_System_Net_Http_Headers_ViaHeaderValue_** result))
    IL2CPP_REGISTER_METHODINFO(0x04743B48, CollectionParser_TryParse_12__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01567E00, bool, TryParse_14, (app::String * input, int32_t minimal_count, app::ElementTryParser_1_WarningHeaderValue_* parser, app::List_1_System_Net_Http_Headers_WarningHeaderValue_** result))
    IL2CPP_REGISTER_METHODINFO(0x04769E90, CollectionParser_TryParse_13__MethodInfo)
} // namespace app::classes::System::Net::Http::Headers::CollectionParser
