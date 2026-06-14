#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/CryptoStream.h>
#include <Modloader/app/structs/CryptoStreamMode__Enum.h>
#include <Modloader/app/structs/ICryptoTransform.h>
#include <Modloader/app/structs/SeekOrigin__Enum.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/Task_1_System_Int32_.h>

namespace app::classes::System::Security::Cryptography::CryptoStream {
    IL2CPP_REGISTER_METHOD(
        0x020CCDA0,
        void,
        ctor,
        app::CryptoStream* this_ptr,
        app::Stream* stream,
        app::ICryptoTransform* transform,
        app::CryptoStreamMode__Enum mode
    )
    IL2CPP_REGISTER_METHOD(0x004F2320, bool, get_CanRead, app::CryptoStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, app::CryptoStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020CD0A0, bool, get_CanWrite, app::CryptoStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020CD0B0, int64_t, get_Length, app::CryptoStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020CD120, int64_t, get_Position, app::CryptoStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020CD190, void, set_Position, app::CryptoStream* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x00CA4070, bool, get_HasFlushedFinalBlock, app::CryptoStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020CD200, void, FlushFinalBlock, app::CryptoStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, app::CryptoStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020CD430, app::Task*, FlushAsync, app::CryptoStream* this_ptr, app::CancellationToken cancellation_token)
    IL2CPP_REGISTER_METHOD(0x020CD570, int64_t, Seek, app::CryptoStream* this_ptr, int64_t offset, app::SeekOrigin__Enum origin)
    IL2CPP_REGISTER_METHOD(0x020CD5E0, void, SetLength, app::CryptoStream* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x020CD650, int32_t, Read, app::CryptoStream* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x020CDBD0,
        app::Task_1_System_Int32_*,
        ReadAsync,
        app::CryptoStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count,
        app::CancellationToken cancellation_token
    )
    IL2CPP_REGISTER_METHOD(
        0x020CDF80,
        app::Task_1_System_Int32_*,
        ReadAsyncInternal,
        app::CryptoStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count,
        app::CancellationToken cancellation_token
    )
    IL2CPP_REGISTER_METHOD(0x020CE0D0, void, Write, app::CryptoStream* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x020CE4E0,
        app::Task*,
        WriteAsync,
        app::CryptoStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count,
        app::CancellationToken cancellation_token
    )
    IL2CPP_REGISTER_METHOD(
        0x020CE870,
        app::Task*,
        WriteAsyncInternal,
        app::CryptoStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count,
        app::CancellationToken cancellation_token
    )
    IL2CPP_REGISTER_METHOD(0x01E113B0, void, Clear, app::CryptoStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020CE9B0, void, Dispose, app::CryptoStream* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x020CEB00, void, InitializeBuffer, app::CryptoStream* this_ptr)
} // namespace app::classes::System::Security::Cryptography::CryptoStream
