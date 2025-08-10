#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/EndPointListener.h>
#include <Modloader/app/structs/HttpConnection.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IPEndPoint.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/ListenerPrefix.h>
#include <Modloader/app/structs/MemoryStream.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RequestStream.h>
#include <Modloader/app/structs/ResponseStream.h>
#include <Modloader/app/structs/Socket.h>
#include <Modloader/app/structs/SslPolicyErrors__Enum.h>
#include <Modloader/app/structs/SslStream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509Certificate2.h>
#include <Modloader/app/structs/X509Certificate_1.h>
#include <Modloader/app/structs/X509Chain.h>

namespace app::classes::System::Net::HttpConnection {
    IL2CPP_REGISTER_METHOD(
        0x01D3DAA0,
        void,
        ctor,
        app::HttpConnection* this_ptr,
        app::Socket* sock,
        app::EndPointListener* epl,
        bool secure,
        app::X509Certificate_1* cert
    )
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::SslStream*, get_SslStream, app::HttpConnection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::Int32__Array*, get_ClientCertificateErrors, app::HttpConnection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::X509Certificate2*, get_ClientCertificate, app::HttpConnection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D3E060, void, Init, app::HttpConnection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0150AEB0, bool, get_IsClosed, app::HttpConnection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FF3C0, int32_t, get_Reuses, app::HttpConnection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D3E2A0, app::IPEndPoint*, get_LocalEndPoint, app::HttpConnection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D3E3A0, app::IPEndPoint*, get_RemoteEndPoint, app::HttpConnection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00675C60, bool, get_IsSecure, app::HttpConnection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::ListenerPrefix*, get_Prefix, app::HttpConnection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_Prefix, app::HttpConnection* this_ptr, app::ListenerPrefix* value)
    IL2CPP_REGISTER_METHOD(0x01D3E5A0, void, OnTimeout, app::HttpConnection* this_ptr, app::Object* unused)
    IL2CPP_REGISTER_METHOD(0x01D3E600, void, BeginReadRequest, app::HttpConnection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D3E7B0, app::RequestStream*, GetRequestStream, app::HttpConnection* this_ptr, bool chunked, int64_t contentlength)
    IL2CPP_REGISTER_METHOD(0x01D3EBC0, app::ResponseStream*, GetResponseStream, app::HttpConnection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D3EE70, void, OnRead, app::IAsyncResult* ares)
    IL2CPP_REGISTER_METHOD(0x01D3EF40, void, OnReadInternal, app::HttpConnection* this_ptr, app::IAsyncResult* ares)
    IL2CPP_REGISTER_METHOD(0x01D3F420, void, RemoveConnection, app::HttpConnection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D3F480, bool, ProcessInput, app::HttpConnection* this_ptr, app::MemoryStream* ms)
    IL2CPP_REGISTER_METHOD(
        0x01D3F7D0,
        app::String*,
        ReadLine,
        app::HttpConnection* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t len,
        int32_t* used
    )
    IL2CPP_REGISTER_METHOD(0x01D3FA30, void, SendError_1, app::HttpConnection* this_ptr, app::String* msg, int32_t status)
    IL2CPP_REGISTER_METHOD(0x01D3FD20, void, SendError_2, app::HttpConnection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D3FD50, void, Unbind, app::HttpConnection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D3FDA0, void, Close_1, app::HttpConnection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D3FDB0, void, CloseSocket, app::HttpConnection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D3FF00, void, Close_2, app::HttpConnection* this_ptr, bool force_close)
    IL2CPP_REGISTER_METHOD(0x01D40360, void, cctor, )
    IL2CPP_REGISTER_METHOD(
        0x01D404C0,
        bool,
        __ctor_b__24_0,
        app::HttpConnection* this_ptr,
        app::Object* t,
        app::X509Certificate_1* c,
        app::X509Chain* ch,
        app::SslPolicyErrors__Enum e
    )
} // namespace app::classes::System::Net::HttpConnection
