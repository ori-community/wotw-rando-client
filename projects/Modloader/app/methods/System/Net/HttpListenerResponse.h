#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Cookie.h>
#include <Modloader/app/structs/CookieCollection.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/HttpListenerContext.h>
#include <Modloader/app/structs/HttpListenerResponse.h>
#include <Modloader/app/structs/MemoryStream.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Version.h>
#include <Modloader/app/structs/WebHeaderCollection.h>

namespace app::classes::System::Net::HttpListenerResponse {
    IL2CPP_REGISTER_METHOD(0x01E55510, void, ctor_1, app::HttpListenerResponse* this_ptr, app::HttpListenerContext* context)
    IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_ForceCloseChunked, app::HttpListenerResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D48FC0, app::Encoding*, get_ContentEncoding, app::HttpListenerResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E55770, void, set_ContentEncoding, app::HttpListenerResponse* this_ptr, app::Encoding* value)
    IL2CPP_REGISTER_METHOD(0x002FB950, int64_t, get_ContentLength64, app::HttpListenerResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E55890, void, set_ContentLength64, app::HttpListenerResponse* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_ContentType, app::HttpListenerResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E559F0, void, set_ContentType, app::HttpListenerResponse* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E55B10, app::CookieCollection*, get_Cookies, app::HttpListenerResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Cookies, app::HttpListenerResponse* this_ptr, app::CookieCollection* value)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::WebHeaderCollection*, get_Headers, app::HttpListenerResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_Headers, app::HttpListenerResponse* this_ptr, app::WebHeaderCollection* value)
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_KeepAlive, app::HttpListenerResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E55C70, void, set_KeepAlive, app::HttpListenerResponse* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01E55D90, app::Stream*, get_OutputStream, app::HttpListenerResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::Version*, get_ProtocolVersion, app::HttpListenerResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E55DE0, void, set_ProtocolVersion, app::HttpListenerResponse* this_ptr, app::Version* value)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::String*, get_RedirectLocation, app::HttpListenerResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E56010, void, set_RedirectLocation, app::HttpListenerResponse* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_SendChunked, app::HttpListenerResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E56130, void, set_SendChunked, app::HttpListenerResponse* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FF610, int32_t, get_StatusCode, app::HttpListenerResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E56250, void, set_StatusCode, app::HttpListenerResponse* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::String*, get_StatusDescription, app::HttpListenerResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_StatusDescription, app::HttpListenerResponse* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E563B0, void, IDisposable_Dispose, app::HttpListenerResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E563F0, void, Abort, app::HttpListenerResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E56440, void, AddHeader, app::HttpListenerResponse* this_ptr, app::String* name, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E565E0, void, AppendCookie, app::HttpListenerResponse* this_ptr, app::Cookie* cookie)
    IL2CPP_REGISTER_METHOD(0x01E567E0, void, AppendHeader, app::HttpListenerResponse* this_ptr, app::String* name, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E56980, void, Close_1, app::HttpListenerResponse* this_ptr, bool force)
    IL2CPP_REGISTER_METHOD(0x01E569C0, void, Close_2, app::HttpListenerResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E56A10, void, Close_3, app::HttpListenerResponse* this_ptr, app::Byte__Array* response_entity, bool will_block)
    IL2CPP_REGISTER_METHOD(0x01E56CD0, void, CopyFrom, app::HttpListenerResponse* this_ptr, app::HttpListenerResponse* template_response)
    IL2CPP_REGISTER_METHOD(0x01E56D60, void, Redirect, app::HttpListenerResponse* this_ptr, app::String* url)
    IL2CPP_REGISTER_METHOD(0x01E56D90, bool, FindCookie, app::HttpListenerResponse* this_ptr, app::Cookie* cookie)
    IL2CPP_REGISTER_METHOD(0x01E57030, void, SendHeaders, app::HttpListenerResponse* this_ptr, bool closing, app::MemoryStream* ms)
    IL2CPP_REGISTER_METHOD(0x01E57A40, app::String*, FormatHeaders, app::WebHeaderCollection* headers)
    IL2CPP_REGISTER_METHOD(0x01E57DE0, app::String*, CookieToClientString, app::Cookie* cookie)
    IL2CPP_REGISTER_METHOD(0x01E58170, app::String*, QuotedString, app::Cookie* cookie, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E58360, bool, IsToken, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E58490, void, SetCookie, app::HttpListenerResponse* this_ptr, app::Cookie* cookie)
    IL2CPP_REGISTER_METHOD(0x01E58680, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x01E58710, void, ctor_2, app::HttpListenerResponse* this_ptr)
} // namespace app::classes::System::Net::HttpListenerResponse
