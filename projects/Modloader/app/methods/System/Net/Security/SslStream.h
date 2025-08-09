#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IMonoSslStream.h>
#include <Modloader/app/structs/MonoTlsProvider.h>
#include <Modloader/app/structs/MonoTlsSettings.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SeekOrigin__Enum.h>
#include <Modloader/app/structs/SslProtocols__Enum.h>
#include <Modloader/app/structs/SslStream.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/X509Certificate_1.h>

namespace app::classes::System::Net::Security::SslStream {
    IL2CPP_REGISTER_METHOD(0x01BD1C90, app::IMonoSslStream*, get_Impl, app::SslStream* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01BD1D40,
        void,
        ctor,
        app::SslStream* this_ptr,
        app::Stream* inner_stream,
        bool leave_inner_stream_open,
        app::MonoTlsProvider* provider,
        app::MonoTlsSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01BD1DC0,
        app::IMonoSslStream*,
        CreateMonoSslStream,
        app::Stream* inner_stream,
        bool leave_inner_stream_open,
        app::MonoTlsProvider* provider,
        app::MonoTlsSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01BD1F50,
        void,
        AuthenticateAsServer,
        app::SslStream* this_ptr,
        app::X509Certificate_1* server_certificate,
        bool client_certificate_required,
        app::SslProtocols__Enum enabled_ssl_protocols,
        bool check_certificate_revocation
    )
    IL2CPP_REGISTER_METHOD(0x01BD20A0, bool, get_IsAuthenticated, app::SslStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, app::SslStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BD2140, bool, get_CanRead, app::SslStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BD21E0, bool, get_CanTimeout, app::SslStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BD2210, bool, get_CanWrite, app::SslStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BD22B0, int32_t, get_ReadTimeout, app::SslStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BD2350, void, set_ReadTimeout, app::SslStream* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01BD2400, int32_t, get_WriteTimeout, app::SslStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BD24A0, void, set_WriteTimeout, app::SslStream* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01BD2550, int64_t, get_Length, app::SslStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BD25F0, int64_t, get_Position, app::SslStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BD2690, void, set_Position, app::SslStream* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x01BD2700, void, SetLength, app::SslStream* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x01BD27B0, int64_t, Seek, app::SslStream* this_ptr, int64_t offset, app::SeekOrigin__Enum origin)
    IL2CPP_REGISTER_METHOD(0x01BD2820, app::Task*, FlushAsync, app::SslStream* this_ptr, app::CancellationToken cancellation_token)
    IL2CPP_REGISTER_METHOD(0x01706BF0, void, Flush, app::SslStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BD2850, void, CheckDisposed, app::SslStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BD2900, void, Dispose, app::SslStream* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x01BD2A40, int32_t, Read, app::SslStream* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01BD2B10, void, Write, app::SslStream* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x01BD2BE0,
        app::IAsyncResult*,
        BeginRead,
        app::SslStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count,
        app::AsyncCallback* async_callback,
        app::Object* async_state
    )
    IL2CPP_REGISTER_METHOD(0x01BD2CC0, int32_t, EndRead, app::SslStream* this_ptr, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(
        0x01BD2D70,
        app::IAsyncResult*,
        BeginWrite,
        app::SslStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count,
        app::AsyncCallback* async_callback,
        app::Object* async_state
    )
    IL2CPP_REGISTER_METHOD(0x01BD2E50, void, EndWrite, app::SslStream* this_ptr, app::IAsyncResult* async_result)
} // namespace app::classes::System::Net::Security::SslStream
