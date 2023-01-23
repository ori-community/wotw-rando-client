#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HttpWebResponse.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WebConnectionData.h>
#include <Modloader/app/structs/CookieContainer.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/CookieCollection.h>
#include <Modloader/app/structs/WebHeaderCollection.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Version.h>
#include <Modloader/app/structs/HttpStatusCode__Enum.h>
#include <Modloader/app/structs/Stream.h>

namespace app::classes::System::Net::HttpWebResponse {
    IL2CPP_REGISTER_METHOD(0x01E64990, void, ctor_1, (app::HttpWebResponse * this_ptr, app::Uri* uri, app::String* method_1, app::WebConnectionData* data, app::CookieContainer* container))
    IL2CPP_REGISTER_METHOD(0x01E64DD0, void, ctor_2, (app::HttpWebResponse * this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context))
    IL2CPP_REGISTER_METHOD(0x01E65080, app::String*, get_CharacterSet, (app::HttpWebResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E651C0, app::String*, get_ContentEncoding, (app::HttpWebResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB60, int64_t, get_ContentLength, (app::HttpWebResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E65280, app::String*, get_ContentType, (app::HttpWebResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E65330, app::CookieCollection*, get_Cookies, (app::HttpWebResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E65490, void, set_Cookies, (app::HttpWebResponse * this_ptr, app::CookieCollection* value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::WebHeaderCollection*, get_Headers, (app::HttpWebResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E654C0, app::Exception*, GetMustImplement, ())
    IL2CPP_REGISTER_METHOD(0x01E65600, bool, get_IsMutuallyAuthenticated, (app::HttpWebResponse * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047466D0, HttpWebResponse_get_IsMutuallyAuthenticated__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E65640, app::DateTime, get_LastModified, (app::HttpWebResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E65750, app::String*, get_Method, (app::HttpWebResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E65770, app::Version*, get_ProtocolVersion, (app::HttpWebResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E65790, app::Uri*, get_ResponseUri, (app::HttpWebResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E657B0, app::String*, get_Server, (app::HttpWebResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006410F0, app::HttpStatusCode__Enum, get_StatusCode, (app::HttpWebResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E65870, app::String*, get_StatusDescription, (app::HttpWebResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsHeaders, (app::HttpWebResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E65890, app::String*, GetResponseHeader, (app::HttpWebResponse * this_ptr, app::String* header_name))
    IL2CPP_REGISTER_METHOD(0x01E65950, void, ReadAll, (app::HttpWebResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E65A30, app::Stream*, GetResponseStream, (app::HttpWebResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D28380, void, ISerializable_GetObjectData, (app::HttpWebResponse * this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context))
    IL2CPP_REGISTER_METHOD(0x01E65C00, void, GetObjectData, (app::HttpWebResponse * this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context))
    IL2CPP_REGISTER_METHOD(0x01E65D60, void, Close, (app::HttpWebResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3FCE0, void, IDisposable_Dispose, (app::HttpWebResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E65D90, void, Dispose, (app::HttpWebResponse * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x01E65DA0, void, CheckDisposed, (app::HttpWebResponse * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047670C8, HttpWebResponse_CheckDisposed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E65E80, void, FillCookies, (app::HttpWebResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E66040, void, ctor_3, (app::HttpWebResponse * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047734F0, HttpWebResponse__ctor_2__MethodInfo)
} // namespace app::classes::System::Net::HttpWebResponse
