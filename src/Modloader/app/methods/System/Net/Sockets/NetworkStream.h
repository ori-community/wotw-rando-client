#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/BufferOffsetSize_1__Array.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/FileAccess__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/NetworkStream.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SeekOrigin__Enum.h>
#include <Modloader/app/structs/SelectMode__Enum.h>
#include <Modloader/app/structs/Socket.h>
#include <Modloader/app/structs/SocketShutdown__Enum.h>
#include <Modloader/app/structs/Task.h>

namespace app::classes::System::Net::Sockets::NetworkStream {
    IL2CPP_REGISTER_METHOD(0x01BE0280, void, ctor_1, app::NetworkStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BE0330, void, ctor_2, app::NetworkStream* this_ptr, app::Socket* socket)
    IL2CPP_REGISTER_METHOD(0x01BE0430, void, ctor_3, app::NetworkStream* this_ptr, app::Socket* socket, bool owns_socket)
    IL2CPP_REGISTER_METHOD(0x01BE0540, app::Socket*, get_InternalSocket, app::NetworkStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_CanRead, app::NetworkStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, app::NetworkStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A070, bool, get_CanWrite, app::NetworkStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanTimeout, app::NetworkStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BE0630, int32_t, get_ReadTimeout, app::NetworkStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BE0700, void, set_ReadTimeout, app::NetworkStream* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01BE0810, int32_t, get_WriteTimeout, app::NetworkStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BE08E0, void, set_WriteTimeout, app::NetworkStream* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01BE09F0, bool, get_DataAvailable, app::NetworkStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BE0C40, int64_t, get_Length, app::NetworkStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BE0CB0, int64_t, get_Position, app::NetworkStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BE0D20, void, set_Position, app::NetworkStream* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x01BE0D90, int64_t, Seek, app::NetworkStream* this_ptr, int64_t offset, app::SeekOrigin__Enum origin)
    IL2CPP_REGISTER_METHOD(0x01BE0E00, void, InitNetworkStream, app::NetworkStream* this_ptr, app::Socket* socket, app::FileAccess__Enum access)
    IL2CPP_REGISTER_METHOD(0x01BE0FB0, bool, PollRead, app::NetworkStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BE0FF0, bool, Poll, app::NetworkStream* this_ptr, int32_t micro_seconds, app::SelectMode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x01BE1180, int32_t, Read, app::NetworkStream* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size)
    IL2CPP_REGISTER_METHOD(0x01BE15F0, void, Write, app::NetworkStream* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size)
    IL2CPP_REGISTER_METHOD(0x01BE1A60, void, Close, app::NetworkStream* this_ptr, int32_t timeout)
    IL2CPP_REGISTER_METHOD(0x01BE1B30, void, Dispose, app::NetworkStream* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x01BE1BA0, void, Finalize, app::NetworkStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BE1C20, bool, get_Connected, app::NetworkStream* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01BE1C50,
        app::IAsyncResult*,
        BeginRead,
        app::NetworkStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t size,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(
        0x01BE2030,
        app::IAsyncResult*,
        UnsafeBeginRead,
        app::NetworkStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t size,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x01BE2310, int32_t, EndRead, app::NetworkStream* this_ptr, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(
        0x01BE25E0,
        app::IAsyncResult*,
        BeginWrite,
        app::NetworkStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t size,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(
        0x01BE29C0,
        app::IAsyncResult*,
        UnsafeBeginWrite,
        app::NetworkStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t size,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x01BE2CD0, void, EndWrite, app::NetworkStream* this_ptr, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(0x01BE2FA0, void, MultipleWrite, app::NetworkStream* this_ptr, app::BufferOffsetSize_1__Array* buffers)
    IL2CPP_REGISTER_METHOD(
        0x01BE3210,
        app::IAsyncResult*,
        BeginMultipleWrite,
        app::NetworkStream* this_ptr,
        app::BufferOffsetSize_1__Array* buffers,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x01BE3490, void, EndMultipleWrite, app::NetworkStream* this_ptr, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, app::NetworkStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BE3700, app::Task*, FlushAsync, app::NetworkStream* this_ptr, app::CancellationToken cancellation_token)
    IL2CPP_REGISTER_METHOD(0x01BE3790, void, SetLength, app::NetworkStream* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x01BE3800, void, SetSocketTimeoutOption, app::NetworkStream* this_ptr, app::SocketShutdown__Enum mode, int32_t timeout, bool silent)
} // namespace app::classes::System::Net::Sockets::NetworkStream
