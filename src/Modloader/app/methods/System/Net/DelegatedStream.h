#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/DelegatedStream.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SeekOrigin__Enum.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/Task_1_System_Int32_.h>

namespace app::classes::System::Net::DelegatedStream {
    IL2CPP_REGISTER_METHOD(0x01EACA50, void, ctor_1, app::DelegatedStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EACAE0, void, ctor_2, app::DelegatedStream* this_ptr, app::Stream* stream)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Stream*, get_BaseStream, app::DelegatedStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01706D40, bool, get_CanRead, app::DelegatedStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01706D70, bool, get_CanSeek, app::DelegatedStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01706DA0, bool, get_CanWrite, app::DelegatedStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EACC00, int64_t, get_Length, app::DelegatedStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EACCF0, int64_t, get_Position, app::DelegatedStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EACDE0, void, set_Position, app::DelegatedStream* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(
        0x01EACEE0,
        app::IAsyncResult*,
        BeginRead,
        app::DelegatedStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(
        0x01EAD060,
        app::IAsyncResult*,
        BeginWrite,
        app::DelegatedStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x01EAD1E0, void, Close, app::DelegatedStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EAD210, int32_t, EndRead, app::DelegatedStream* this_ptr, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(0x01EAD310, void, EndWrite, app::DelegatedStream* this_ptr, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(0x01706BF0, void, Flush, app::DelegatedStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BD2820, app::Task*, FlushAsync, app::DelegatedStream* this_ptr, app::CancellationToken cancellation_token)
    IL2CPP_REGISTER_METHOD(0x01EAD410, int32_t, Read, app::DelegatedStream* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x01EAD530,
        app::Task_1_System_Int32_*,
        ReadAsync,
        app::DelegatedStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count,
        app::CancellationToken cancellation_token
    )
    IL2CPP_REGISTER_METHOD(0x01EAD650, int64_t, Seek, app::DelegatedStream* this_ptr, int64_t offset, app::SeekOrigin__Enum origin)
    IL2CPP_REGISTER_METHOD(0x01EAD760, void, SetLength, app::DelegatedStream* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x01EAD860, void, Write, app::DelegatedStream* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x01EAD980,
        app::Task*,
        WriteAsync,
        app::DelegatedStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count,
        app::CancellationToken cancellation_token
    )
} // namespace app::classes::System::Net::DelegatedStream
