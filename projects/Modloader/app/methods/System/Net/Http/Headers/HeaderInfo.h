#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HeaderInfo_1.h>
#include <Modloader/app/structs/Func_2_Object_String_.h>
#include <Modloader/app/structs/HttpHeaderKind__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TryParseDelegate_1_AuthenticationHeaderValue_.h>
#include <Modloader/app/structs/TryParseDelegate_1_CacheControlHeaderValue_.h>
#include <Modloader/app/structs/TryParseDelegate_1_ContentDispositionHeaderValue_.h>
#include <Modloader/app/structs/TryParseDelegate_1_ContentRangeHeaderValue_.h>
#include <Modloader/app/structs/TryParseDelegate_1_EntityTagHeaderValue_.h>
#include <Modloader/app/structs/TryParseDelegate_1_MediaTypeHeaderValue_.h>
#include <Modloader/app/structs/TryParseDelegate_1_RangeConditionHeaderValue_.h>
#include <Modloader/app/structs/TryParseDelegate_1_RangeHeaderValue_.h>
#include <Modloader/app/structs/TryParseDelegate_1_RetryConditionHeaderValue_.h>
#include <Modloader/app/structs/TryParseDelegate_1_System_Byte_.h>
#include <Modloader/app/structs/TryParseDelegate_1_System_DateTimeOffset_.h>
#include <Modloader/app/structs/TryParseDelegate_1_System_Int32_.h>
#include <Modloader/app/structs/TryParseDelegate_1_System_Int64_.h>
#include <Modloader/app/structs/TryParseDelegate_1_System_Object_.h>
#include <Modloader/app/structs/TryParseDelegate_1_System_String_.h>
#include <Modloader/app/structs/TryParseDelegate_1_System_TimeSpan_.h>
#include <Modloader/app/structs/TryParseDelegate_1_System_Uri_.h>
#include <Modloader/app/structs/TryParseListDelegate_1_AuthenticationHeaderValue_.h>
#include <Modloader/app/structs/TryParseListDelegate_1_EntityTagHeaderValue_.h>
#include <Modloader/app/structs/TryParseListDelegate_1_MediaTypeWithQualityHeaderValue_.h>
#include <Modloader/app/structs/TryParseListDelegate_1_NameValueHeaderValue_.h>
#include <Modloader/app/structs/TryParseListDelegate_1_NameValueWithParametersHeaderValue_.h>
#include <Modloader/app/structs/TryParseListDelegate_1_ProductHeaderValue_.h>
#include <Modloader/app/structs/TryParseListDelegate_1_ProductInfoHeaderValue_.h>
#include <Modloader/app/structs/TryParseListDelegate_1_StringWithQualityHeaderValue_.h>
#include <Modloader/app/structs/TryParseListDelegate_1_System_Object_.h>
#include <Modloader/app/structs/TryParseListDelegate_1_System_String_.h>
#include <Modloader/app/structs/TryParseListDelegate_1_TransferCodingHeaderValue_.h>
#include <Modloader/app/structs/TryParseListDelegate_1_TransferCodingWithQualityHeaderValue_.h>
#include <Modloader/app/structs/TryParseListDelegate_1_ViaHeaderValue_.h>
#include <Modloader/app/structs/TryParseListDelegate_1_WarningHeaderValue_.h>

namespace app::classes::System::Net::Http::Headers::HeaderInfo {
    IL2CPP_REGISTER_METHOD(0x02D082C0, void, ctor, (app::HeaderInfo_1 * this_ptr, app::String* name, app::HttpHeaderKind__Enum header_kind))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_CustomToString, (app::HeaderInfo_1 * this_ptr, app::Func_2_Object_String_* value))
    IL2CPP_REGISTER_METHOD(0x02D082D0, app::String*, get_Separator, (app::HeaderInfo_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0153E110, app::HeaderInfo_1*, CreateSingle_1, (app::String * name, app::TryParseDelegate_1_System_Object_* parser, app::HttpHeaderKind__Enum header_kind, app::Func_2_Object_String_* to_string))
    IL2CPP_REGISTER_METHOD(0x0153DFD0, app::HeaderInfo_1*, CreateMulti_1, (app::String * name, app::TryParseListDelegate_1_System_Object_* element_parser, app::HttpHeaderKind__Enum header_kind, int32_t minimal_count, app::String* separator))
    IL2CPP_REGISTER_METHOD(0x0153DFD0, app::HeaderInfo_1*, CreateMulti_2, (app::String * name, app::TryParseListDelegate_1_MediaTypeWithQualityHeaderValue_* element_parser, app::HttpHeaderKind__Enum header_kind, int32_t minimal_count, app::String* separator))
    IL2CPP_REGISTER_METHOD(0x0153DFD0, app::HeaderInfo_1*, CreateMulti_3, (app::String * name, app::TryParseListDelegate_1_StringWithQualityHeaderValue_* element_parser, app::HttpHeaderKind__Enum header_kind, int32_t minimal_count, app::String* separator))
    IL2CPP_REGISTER_METHOD(0x0153DFD0, app::HeaderInfo_1*, CreateMulti_4, (app::String * name, app::TryParseListDelegate_1_System_String_* element_parser, app::HttpHeaderKind__Enum header_kind, int32_t minimal_count, app::String* separator))
    IL2CPP_REGISTER_METHOD(0x0153E110, app::HeaderInfo_1*, CreateSingle_2, (app::String * name, app::TryParseDelegate_1_System_TimeSpan_* parser, app::HttpHeaderKind__Enum header_kind, app::Func_2_Object_String_* to_string))
    IL2CPP_REGISTER_METHOD(0x0153E110, app::HeaderInfo_1*, CreateSingle_3, (app::String * name, app::TryParseDelegate_1_AuthenticationHeaderValue_* parser, app::HttpHeaderKind__Enum header_kind, app::Func_2_Object_String_* to_string))
    IL2CPP_REGISTER_METHOD(0x0153E110, app::HeaderInfo_1*, CreateSingle_4, (app::String * name, app::TryParseDelegate_1_CacheControlHeaderValue_* parser, app::HttpHeaderKind__Enum header_kind, app::Func_2_Object_String_* to_string))
    IL2CPP_REGISTER_METHOD(0x0153E110, app::HeaderInfo_1*, CreateSingle_5, (app::String * name, app::TryParseDelegate_1_ContentDispositionHeaderValue_* parser, app::HttpHeaderKind__Enum header_kind, app::Func_2_Object_String_* to_string))
    IL2CPP_REGISTER_METHOD(0x0153E110, app::HeaderInfo_1*, CreateSingle_6, (app::String * name, app::TryParseDelegate_1_System_Int64_* parser, app::HttpHeaderKind__Enum header_kind, app::Func_2_Object_String_* to_string))
    IL2CPP_REGISTER_METHOD(0x0153E110, app::HeaderInfo_1*, CreateSingle_7, (app::String * name, app::TryParseDelegate_1_System_Uri_* parser, app::HttpHeaderKind__Enum header_kind, app::Func_2_Object_String_* to_string))
    IL2CPP_REGISTER_METHOD(0x0153E110, app::HeaderInfo_1*, CreateSingle_8, (app::String * name, app::TryParseDelegate_1_System_Byte_* parser, app::HttpHeaderKind__Enum header_kind, app::Func_2_Object_String_* to_string))
    IL2CPP_REGISTER_METHOD(0x0153E110, app::HeaderInfo_1*, CreateSingle_9, (app::String * name, app::TryParseDelegate_1_ContentRangeHeaderValue_* parser, app::HttpHeaderKind__Enum header_kind, app::Func_2_Object_String_* to_string))
    IL2CPP_REGISTER_METHOD(0x0153E110, app::HeaderInfo_1*, CreateSingle_10, (app::String * name, app::TryParseDelegate_1_MediaTypeHeaderValue_* parser, app::HttpHeaderKind__Enum header_kind, app::Func_2_Object_String_* to_string))
    IL2CPP_REGISTER_METHOD(0x0153E110, app::HeaderInfo_1*, CreateSingle_11, (app::String * name, app::TryParseDelegate_1_System_DateTimeOffset_* parser, app::HttpHeaderKind__Enum header_kind, app::Func_2_Object_String_* to_string))
    IL2CPP_REGISTER_METHOD(0x0153E110, app::HeaderInfo_1*, CreateSingle_12, (app::String * name, app::TryParseDelegate_1_EntityTagHeaderValue_* parser, app::HttpHeaderKind__Enum header_kind, app::Func_2_Object_String_* to_string))
    IL2CPP_REGISTER_METHOD(0x0153DFD0, app::HeaderInfo_1*, CreateMulti_5, (app::String * name, app::TryParseListDelegate_1_NameValueWithParametersHeaderValue_* element_parser, app::HttpHeaderKind__Enum header_kind, int32_t minimal_count, app::String* separator))
    IL2CPP_REGISTER_METHOD(0x0153E110, app::HeaderInfo_1*, CreateSingle_13, (app::String * name, app::TryParseDelegate_1_System_String_* parser, app::HttpHeaderKind__Enum header_kind, app::Func_2_Object_String_* to_string))
    IL2CPP_REGISTER_METHOD(0x0153DFD0, app::HeaderInfo_1*, CreateMulti_6, (app::String * name, app::TryParseListDelegate_1_EntityTagHeaderValue_* element_parser, app::HttpHeaderKind__Enum header_kind, int32_t minimal_count, app::String* separator))
    IL2CPP_REGISTER_METHOD(0x0153E110, app::HeaderInfo_1*, CreateSingle_14, (app::String * name, app::TryParseDelegate_1_RangeConditionHeaderValue_* parser, app::HttpHeaderKind__Enum header_kind, app::Func_2_Object_String_* to_string))
    IL2CPP_REGISTER_METHOD(0x0153E110, app::HeaderInfo_1*, CreateSingle_15, (app::String * name, app::TryParseDelegate_1_System_Int32_* parser, app::HttpHeaderKind__Enum header_kind, app::Func_2_Object_String_* to_string))
    IL2CPP_REGISTER_METHOD(0x0153DFD0, app::HeaderInfo_1*, CreateMulti_7, (app::String * name, app::TryParseListDelegate_1_NameValueHeaderValue_* element_parser, app::HttpHeaderKind__Enum header_kind, int32_t minimal_count, app::String* separator))
    IL2CPP_REGISTER_METHOD(0x0153DFD0, app::HeaderInfo_1*, CreateMulti_8, (app::String * name, app::TryParseListDelegate_1_AuthenticationHeaderValue_* element_parser, app::HttpHeaderKind__Enum header_kind, int32_t minimal_count, app::String* separator))
    IL2CPP_REGISTER_METHOD(0x0153E110, app::HeaderInfo_1*, CreateSingle_16, (app::String * name, app::TryParseDelegate_1_RangeHeaderValue_* parser, app::HttpHeaderKind__Enum header_kind, app::Func_2_Object_String_* to_string))
    IL2CPP_REGISTER_METHOD(0x0153E110, app::HeaderInfo_1*, CreateSingle_17, (app::String * name, app::TryParseDelegate_1_RetryConditionHeaderValue_* parser, app::HttpHeaderKind__Enum header_kind, app::Func_2_Object_String_* to_string))
    IL2CPP_REGISTER_METHOD(0x0153DFD0, app::HeaderInfo_1*, CreateMulti_9, (app::String * name, app::TryParseListDelegate_1_ProductInfoHeaderValue_* element_parser, app::HttpHeaderKind__Enum header_kind, int32_t minimal_count, app::String* separator))
    IL2CPP_REGISTER_METHOD(0x0153DFD0, app::HeaderInfo_1*, CreateMulti_10, (app::String * name, app::TryParseListDelegate_1_TransferCodingWithQualityHeaderValue_* element_parser, app::HttpHeaderKind__Enum header_kind, int32_t minimal_count, app::String* separator))
    IL2CPP_REGISTER_METHOD(0x0153DFD0, app::HeaderInfo_1*, CreateMulti_11, (app::String * name, app::TryParseListDelegate_1_TransferCodingHeaderValue_* element_parser, app::HttpHeaderKind__Enum header_kind, int32_t minimal_count, app::String* separator))
    IL2CPP_REGISTER_METHOD(0x0153DFD0, app::HeaderInfo_1*, CreateMulti_12, (app::String * name, app::TryParseListDelegate_1_ProductHeaderValue_* element_parser, app::HttpHeaderKind__Enum header_kind, int32_t minimal_count, app::String* separator))
    IL2CPP_REGISTER_METHOD(0x0153DFD0, app::HeaderInfo_1*, CreateMulti_13, (app::String * name, app::TryParseListDelegate_1_ViaHeaderValue_* element_parser, app::HttpHeaderKind__Enum header_kind, int32_t minimal_count, app::String* separator))
    IL2CPP_REGISTER_METHOD(0x0153DFD0, app::HeaderInfo_1*, CreateMulti_14, (app::String * name, app::TryParseListDelegate_1_WarningHeaderValue_* element_parser, app::HttpHeaderKind__Enum header_kind, int32_t minimal_count, app::String* separator))
} // namespace app::classes::System::Net::Http::Headers::HeaderInfo
