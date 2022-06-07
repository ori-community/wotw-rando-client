#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::SslStreamBase_AsyncHandshakeDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::SslStreamBase_AsyncHandshakeDelegate * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01C712A0, void, Invoke, (app::SslStreamBase_AsyncHandshakeDelegate * this_ptr, app::SslStreamBase_InternalAsyncResult * async_result, bool from_write))
    IL2CPP_REGISTER_METHOD(0x0291A3C0, app::IAsyncResult *, BeginInvoke, (app::SslStreamBase_AsyncHandshakeDelegate * this_ptr, app::SslStreamBase_InternalAsyncResult * async_result, bool from_write, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::SslStreamBase_AsyncHandshakeDelegate * this_ptr, app::IAsyncResult * result))
}
