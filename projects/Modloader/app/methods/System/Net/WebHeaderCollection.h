#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DataParseStatus__Enum.h>
#include <Modloader/app/structs/HttpRequestHeader__Enum.h>
#include <Modloader/app/structs/HttpResponseHeader__Enum.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/NameObjectCollectionBase_KeysCollection.h>
#include <Modloader/app/structs/NameValueCollection.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/WebHeaderCollection.h>
#include <Modloader/app/structs/WebHeaderCollectionType__Enum.h>
#include <Modloader/app/structs/WebParseError.h>

namespace app::classes::System::Net::WebHeaderCollection {
    IL2CPP_REGISTER_METHOD(0x01D70310, app::String*, get_ContentLength, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D70420, app::String*, get_CacheControl, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D70530, app::String*, get_ContentType, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D70640, app::String*, get_Date, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D70750, app::String*, get_Expires, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D70860, app::String*, get_ETag, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D70970, app::String*, get_LastModified, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D70A80, app::String*, get_Location, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D70BA0, app::String*, get_ProxyAuthenticate, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D70CB0, app::String*, get_SetCookie2, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D70DC0, app::String*, get_SetCookie, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D70EE0, app::String*, get_Server, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D71000, app::String*, get_Via, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D71120, void, NormalizeCommonHeaders, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D712F0, app::NameValueCollection*, get_InnerCollection, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D71490, bool, AllowMultiValues, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x01D715A0, bool, get_AllowHttpRequestHeader, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D715E0, bool, get_AllowHttpResponseHeader, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D71620, app::String*, get_Item_1, (app::WebHeaderCollection * this_ptr, app::HttpRequestHeader__Enum header))
    IL2CPP_REGISTER_METHOD(0x01D71750, void, set_Item_1, (app::WebHeaderCollection * this_ptr, app::HttpRequestHeader__Enum header, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01D71880, app::String*, get_Item_2, (app::WebHeaderCollection * this_ptr, app::HttpResponseHeader__Enum header))
    IL2CPP_REGISTER_METHOD(0x01D71A10, void, set_Item_2, (app::WebHeaderCollection * this_ptr, app::HttpResponseHeader__Enum header, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01D71C10, void, Add_1, (app::WebHeaderCollection * this_ptr, app::HttpRequestHeader__Enum header, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01D71D40, void, Add_2, (app::WebHeaderCollection * this_ptr, app::HttpResponseHeader__Enum header, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01D71F40, void, Set_1, (app::WebHeaderCollection * this_ptr, app::HttpRequestHeader__Enum header, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01D72070, void, Set_2, (app::WebHeaderCollection * this_ptr, app::HttpResponseHeader__Enum header, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01D72270, void, SetInternal_1, (app::WebHeaderCollection * this_ptr, app::HttpResponseHeader__Enum header, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01D72460, void, Remove_1, (app::WebHeaderCollection * this_ptr, app::HttpRequestHeader__Enum header))
    IL2CPP_REGISTER_METHOD(0x01D72590, void, Remove_2, (app::WebHeaderCollection * this_ptr, app::HttpResponseHeader__Enum header))
    IL2CPP_REGISTER_METHOD(0x01D726C0, void, AddWithoutValidate, (app::WebHeaderCollection * this_ptr, app::String* header_name, app::String* header_value))
    IL2CPP_REGISTER_METHOD(0x01D72890, void, SetAddVerified, (app::WebHeaderCollection * this_ptr, app::String* name, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01D72A00, void, AddInternal, (app::WebHeaderCollection * this_ptr, app::String* name, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01D72A70, void, ChangeInternal, (app::WebHeaderCollection * this_ptr, app::String* name, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01D72AE0, void, RemoveInternal, (app::WebHeaderCollection * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01D72B30, void, CheckUpdate, (app::WebHeaderCollection * this_ptr, app::String* name, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01D72C30, void, AddInternalNotCommon, (app::WebHeaderCollection * this_ptr, app::String* name, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01D72C80, app::String*, CheckBadChars, (app::String * name, bool is_header_value))
    IL2CPP_REGISTER_METHOD(0x01D73150, bool, IsValidToken, (app::String * token))
    IL2CPP_REGISTER_METHOD(0x01D73290, bool, ContainsNonAsciiChars, (app::String * token))
    IL2CPP_REGISTER_METHOD(0x01D73300, void, ThrowOnRestrictedHeader, (app::WebHeaderCollection * this_ptr, app::String* header_name))
    IL2CPP_REGISTER_METHOD(0x01D73560, void, Add_3, (app::WebHeaderCollection * this_ptr, app::String* name, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01D73740, void, Add_4, (app::WebHeaderCollection * this_ptr, app::String* header))
    IL2CPP_REGISTER_METHOD(0x01D73A10, void, Set_3, (app::WebHeaderCollection * this_ptr, app::String* name, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01D73C50, void, SetInternal_2, (app::WebHeaderCollection * this_ptr, app::String* name, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01D73E80, void, Remove_3, (app::WebHeaderCollection * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01D73FD0, app::String__Array*, GetValues_1, (app::WebHeaderCollection * this_ptr, app::String* header))
    IL2CPP_REGISTER_METHOD(0x01D74300, app::String*, ToString_1, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D743A0, app::String*, ToString_2, (app::WebHeaderCollection * this_ptr, bool for_trace))
    IL2CPP_REGISTER_METHOD(0x01D74440, app::String*, GetAsString, (app::NameValueCollection * cc, bool win_inet_compat, bool for_trace))
    IL2CPP_REGISTER_METHOD(0x01D747B0, app::Byte__Array*, ToByteArray, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D748C0, bool, IsRestricted_1, (app::String * header_name))
    IL2CPP_REGISTER_METHOD(0x01D74A20, bool, IsRestricted_2, (app::String * header_name, bool response))
    IL2CPP_REGISTER_METHOD(0x01D74B80, void, ctor_1, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D74C30, void, ctor_2, (app::WebHeaderCollection * this_ptr, app::WebHeaderCollectionType__Enum type))
    IL2CPP_REGISTER_METHOD(0x01D74D50, void, ctor_3, (app::WebHeaderCollection * this_ptr, app::NameValueCollection* cc))
    IL2CPP_REGISTER_METHOD(0x01D75040, void, ctor_4, (app::WebHeaderCollection * this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDeserialization, (app::WebHeaderCollection * this_ptr, app::Object* sender))
    IL2CPP_REGISTER_METHOD(0x01D752E0, void, GetObjectData, (app::WebHeaderCollection * this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context))
    IL2CPP_REGISTER_METHOD(0x01D754A0, app::DataParseStatus__Enum, ParseHeaders, (app::WebHeaderCollection * this_ptr, app::Byte__Array* buffer, int32_t size, int32_t* unparsed, int32_t* total_response_headers_length, int32_t maximum_response_headers_length, app::WebParseError* parse_error))
    IL2CPP_REGISTER_METHOD(0x01D75940, app::DataParseStatus__Enum, ParseHeadersStrict, (app::WebHeaderCollection * this_ptr, app::Byte__Array* buffer, int32_t size, int32_t* unparsed, int32_t* total_response_headers_length, int32_t maximum_response_headers_length, app::WebParseError* parse_error))
    IL2CPP_REGISTER_METHOD(0x01D76590, void, ISerializable_GetObjectData, (app::WebHeaderCollection * this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context))
    IL2CPP_REGISTER_METHOD(0x01D765C0, app::String*, Get_1, (app::WebHeaderCollection * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01D76A00, app::IEnumerator*, GetEnumerator, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D76B70, int32_t, get_Count, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D76BB0, app::NameObjectCollectionBase_KeysCollection*, get_Keys, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D76BF0, bool, InternalHasKeys, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D76C30, app::String*, Get_2, (app::WebHeaderCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01D76C80, app::String__Array*, GetValues_2, (app::WebHeaderCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01D76CD0, app::String*, GetKey, (app::WebHeaderCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01D76D20, app::String__Array*, get_AllKeys, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D76D60, void, Clear, (app::WebHeaderCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D76D90, void, cctor, ())
} // namespace app::classes::System::Net::WebHeaderCollection
