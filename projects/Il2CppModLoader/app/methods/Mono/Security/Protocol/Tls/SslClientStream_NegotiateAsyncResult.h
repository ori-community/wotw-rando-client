#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::SslClientStream_NegotiateAsyncResult {
    IL2CPP_REGISTER_METHOD(0x01F81210, void, ctor, (app::SslClientStream_NegotiateAsyncResult * this_ptr, app::AsyncCallback * user_callback, app::Object * user_state, app::SslClientStream_NegotiateState__Enum state))
    IL2CPP_REGISTER_METHOD(0x003FC7F0, app::SslClientStream_NegotiateState__Enum, get_State, (app::SslClientStream_NegotiateAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00617D40, void, set_State, (app::SslClientStream_NegotiateAsyncResult * this_ptr, app::SslClientStream_NegotiateState__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Object *, get_AsyncState, (app::SslClientStream_NegotiateAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Exception *, get_AsyncException, (app::SslClientStream_NegotiateAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F81370, bool, get_CompletedWithError, (app::SslClientStream_NegotiateAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F813A0, app::WaitHandle *, get_AsyncWaitHandle, (app::SslClientStream_NegotiateAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CompletedSynchronously, (app::SslClientStream_NegotiateAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F815F0, bool, get_IsCompleted, (app::SslClientStream_NegotiateAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F816E0, void, SetComplete_1, (app::SslClientStream_NegotiateAsyncResult * this_ptr, app::Exception * ex))
    IL2CPP_REGISTER_METHOD(0x01F81800, void, SetComplete_2, (app::SslClientStream_NegotiateAsyncResult * this_ptr))
}
