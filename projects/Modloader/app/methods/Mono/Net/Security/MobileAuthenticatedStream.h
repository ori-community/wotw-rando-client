#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/AsyncOperationStatus__Enum.h>
#include <Modloader/app/structs/AsyncProtocolRequest.h>
#include <Modloader/app/structs/AuthenticatedStream.h>
#include <Modloader/app/structs/BufferOffsetSize.h>
#include <Modloader/app/structs/BufferOffsetSize2.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/ExceptionDispatchInfo.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/MobileAuthenticatedStream.h>
#include <Modloader/app/structs/MobileAuthenticatedStream_OperationType__Enum.h>
#include <Modloader/app/structs/MonoTlsProvider.h>
#include <Modloader/app/structs/MonoTlsSettings.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SeekOrigin__Enum.h>
#include <Modloader/app/structs/SslProtocols__Enum.h>
#include <Modloader/app/structs/SslStream.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/Task_1_System_Int32_.h>
#include <Modloader/app/structs/ValueTuple_2_Int32_Boolean_.h>
#include <Modloader/app/structs/X509CertificateCollection_1.h>
#include <Modloader/app/structs/X509Certificate_1.h>

namespace app::classes::Mono::Net::Security::MobileAuthenticatedStream {
    IL2CPP_REGISTER_METHOD(
        0x0217E0D0,
        void,
        ctor,
        app::MobileAuthenticatedStream* this_ptr,
        app::Stream* inner_stream,
        bool leave_inner_stream_open,
        app::SslStream* owner,
        app::MonoTlsSettings* settings,
        app::MonoTlsProvider* provider
    )
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::MonoTlsSettings*, get_Settings, app::MobileAuthenticatedStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::MonoTlsProvider*, get_Provider, app::MobileAuthenticatedStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0217E440, void, CheckThrow, app::MobileAuthenticatedStream* this_ptr, bool auth_success_check, bool shutdown_check)
    IL2CPP_REGISTER_METHOD(0x0217E580, app::Exception*, GetSSPIException, app::Exception* e)
    IL2CPP_REGISTER_METHOD(0x0217E7E0, app::Exception*, GetIOException, app::Exception* e, app::String* message)
    IL2CPP_REGISTER_METHOD(0x0217EA40, app::ExceptionDispatchInfo*, SetException, app::MobileAuthenticatedStream* this_ptr, app::Exception* e)
    IL2CPP_REGISTER_METHOD(
        0x0217EA70,
        void,
        AuthenticateAsClient,
        app::MobileAuthenticatedStream* this_ptr,
        app::String* target_host,
        app::X509CertificateCollection_1* client_certificates,
        app::SslProtocols__Enum enabled_ssl_protocols,
        bool check_certificate_revocation
    )
    IL2CPP_REGISTER_METHOD(
        0x0217EAD0,
        void,
        AuthenticateAsServer,
        app::MobileAuthenticatedStream* this_ptr,
        app::X509Certificate_1* server_certificate,
        bool client_certificate_required,
        app::SslProtocols__Enum enabled_ssl_protocols,
        bool check_certificate_revocation
    )
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::AuthenticatedStream*, get_AuthenticatedStream, app::MobileAuthenticatedStream* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0217EBD0,
        app::Task*,
        ProcessAuthentication,
        app::MobileAuthenticatedStream* this_ptr,
        bool run_synchronously,
        bool server_mode,
        app::String* target_host,
        app::SslProtocols__Enum enabled_protocols,
        app::X509Certificate_1* server_certificate,
        app::X509CertificateCollection_1* client_certificates,
        bool client_cert_required
    )
    IL2CPP_REGISTER_METHOD(
        0x0217ED20,
        app::IAsyncResult*,
        BeginRead,
        app::MobileAuthenticatedStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count,
        app::AsyncCallback* async_callback,
        app::Object* async_state
    )
    IL2CPP_REGISTER_METHOD(0x0217EEF0, int32_t, EndRead, app::MobileAuthenticatedStream* this_ptr, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(
        0x0217EF70,
        app::IAsyncResult*,
        BeginWrite,
        app::MobileAuthenticatedStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count,
        app::AsyncCallback* async_callback,
        app::Object* async_state
    )
    IL2CPP_REGISTER_METHOD(0x0200A6B0, void, EndWrite, app::MobileAuthenticatedStream* this_ptr, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(0x0217F140, int32_t, Read, app::MobileAuthenticatedStream* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count)
    IL2CPP_REGISTER_METHOD(0x0217F340, void, Write, app::MobileAuthenticatedStream* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x0217F510,
        app::Task_1_System_Int32_*,
        ReadAsync,
        app::MobileAuthenticatedStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count,
        app::CancellationToken cancellation_token
    )
    IL2CPP_REGISTER_METHOD(
        0x0217F6B0,
        app::Task*,
        WriteAsync,
        app::MobileAuthenticatedStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count,
        app::CancellationToken cancellation_token
    )
    IL2CPP_REGISTER_METHOD(
        0x0217F850,
        app::Task_1_System_Int32_*,
        StartOperation,
        app::MobileAuthenticatedStream* this_ptr,
        app::MobileAuthenticatedStream_OperationType__Enum type,
        app::AsyncProtocolRequest* async_request,
        app::CancellationToken cancellation_token
    )
    IL2CPP_REGISTER_METHOD(
        0x0217F9A0,
        int32_t,
        InternalRead_1,
        app::MobileAuthenticatedStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t size,
        bool* out_want_more
    )
    IL2CPP_REGISTER_METHOD(
        0x0217FC10,
        app::ValueTuple_2_Int32_Boolean_,
        InternalRead_2,
        app::MobileAuthenticatedStream* this_ptr,
        app::AsyncProtocolRequest* async_request,
        app::BufferOffsetSize* internal_buffer,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t size
    )
    IL2CPP_REGISTER_METHOD(0x0217FD90, bool, InternalWrite_1, app::MobileAuthenticatedStream* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size)
    IL2CPP_REGISTER_METHOD(
        0x0217FEC0,
        bool,
        InternalWrite_2,
        app::MobileAuthenticatedStream* this_ptr,
        app::AsyncProtocolRequest* async_request,
        app::BufferOffsetSize2* internal_buffer,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t size
    )
    IL2CPP_REGISTER_METHOD(
        0x02180120,
        app::Task_1_System_Int32_*,
        InnerRead,
        app::MobileAuthenticatedStream* this_ptr,
        bool sync,
        int32_t requested_size,
        app::CancellationToken cancellation_token
    )
    IL2CPP_REGISTER_METHOD(0x02180260, app::Task*, InnerWrite, app::MobileAuthenticatedStream* this_ptr, bool sync, app::CancellationToken cancellation_token)
    IL2CPP_REGISTER_METHOD(
        0x02180390,
        app::AsyncOperationStatus__Enum,
        ProcessHandshake,
        app::MobileAuthenticatedStream* this_ptr,
        app::AsyncOperationStatus__Enum status
    )
    IL2CPP_REGISTER_METHOD(
        0x02180610,
        app::ValueTuple_2_Int32_Boolean_,
        ProcessRead,
        app::MobileAuthenticatedStream* this_ptr,
        app::BufferOffsetSize* user_buffer
    )
    IL2CPP_REGISTER_METHOD(
        0x02180760,
        app::ValueTuple_2_Int32_Boolean_,
        ProcessWrite,
        app::MobileAuthenticatedStream* this_ptr,
        app::BufferOffsetSize* user_buffer
    )
    IL2CPP_REGISTER_METHOD(0x021808B0, bool, get_IsAuthenticated, app::MobileAuthenticatedStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021809C0, void, Dispose, app::MobileAuthenticatedStream* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x01706BF0, void, Flush, app::MobileAuthenticatedStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02180CD0, app::X509Certificate_1*, get_InternalLocalCertificate, app::MobileAuthenticatedStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02180E80, int64_t, Seek, app::MobileAuthenticatedStream* this_ptr, int64_t offset, app::SeekOrigin__Enum origin)
    IL2CPP_REGISTER_METHOD(0x01706CB0, void, SetLength, app::MobileAuthenticatedStream* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x02180ED0, bool, get_CanRead, app::MobileAuthenticatedStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BD21E0, bool, get_CanTimeout, app::MobileAuthenticatedStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02180F20, bool, get_CanWrite, app::MobileAuthenticatedStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, app::MobileAuthenticatedStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01706DD0, int64_t, get_Length, app::MobileAuthenticatedStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01706E00, int64_t, get_Position, app::MobileAuthenticatedStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02180F90, void, set_Position, app::MobileAuthenticatedStream* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x02180FE0, int32_t, get_ReadTimeout, app::MobileAuthenticatedStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02181010, void, set_ReadTimeout, app::MobileAuthenticatedStream* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02181040, int32_t, get_WriteTimeout, app::MobileAuthenticatedStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02181070, void, set_WriteTimeout, app::MobileAuthenticatedStream* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x021810A0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x02181120, void, _InnerWrite_b__67_0, app::MobileAuthenticatedStream* this_ptr)
} // namespace app::classes::Mono::Net::Security::MobileAuthenticatedStream
