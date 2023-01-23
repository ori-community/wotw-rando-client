#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SslStreamBase_InternalAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/WaitHandle.h>

namespace app::classes::Mono::Security::Protocol::Tls::SslStreamBase_InternalAsyncResult {
    IL2CPP_REGISTER_METHOD(0x0291A490, void, ctor, (app::SslStreamBase_InternalAsyncResult * this_ptr, app::AsyncCallback* user_callback, app::Object* user_state, app::Byte__Array* buffer, int32_t offset, int32_t count, bool from_write, bool proceed_after_handshake))
    IL2CPP_REGISTER_METHOD(0x00444DC0, bool, get_ProceedAfterHandshake, (app::SslStreamBase_InternalAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446590, bool, get_FromWrite, (app::SslStreamBase_InternalAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::Byte__Array*, get_Buffer, (app::SslStreamBase_InternalAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD490, int32_t, get_Offset, (app::SslStreamBase_InternalAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FDCE0, int32_t, get_Count, (app::SslStreamBase_InternalAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FC830, int32_t, get_BytesRead, (app::SslStreamBase_InternalAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Object*, get_AsyncState, (app::SslStreamBase_InternalAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Exception*, get_AsyncException, (app::SslStreamBase_InternalAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0291A620, bool, get_CompletedWithError, (app::SslStreamBase_InternalAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0291A650, app::WaitHandle*, get_AsyncWaitHandle, (app::SslStreamBase_InternalAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CompletedSynchronously, (app::SslStreamBase_InternalAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0291A8A0, bool, get_IsCompleted, (app::SslStreamBase_InternalAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0291A990, void, SetComplete_1, (app::SslStreamBase_InternalAsyncResult * this_ptr, app::Exception* ex, int32_t bytes_read))
    IL2CPP_REGISTER_METHOD(0x0291AAE0, void, SetComplete_2, (app::SslStreamBase_InternalAsyncResult * this_ptr, app::Exception* ex))
    IL2CPP_REGISTER_METHOD(0x0291AAF0, void, SetComplete_3, (app::SslStreamBase_InternalAsyncResult * this_ptr, int32_t bytes_read))
    IL2CPP_REGISTER_METHOD(0x0291AB00, void, SetComplete_4, (app::SslStreamBase_InternalAsyncResult * this_ptr))
} // namespace app::classes::Mono::Security::Protocol::Tls::SslStreamBase_InternalAsyncResult
