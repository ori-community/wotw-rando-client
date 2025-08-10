#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PipeDirection__Enum.h>
#include <Modloader/app/structs/PipeStream.h>
#include <Modloader/app/structs/PipeTransmissionMode__Enum.h>
#include <Modloader/app/structs/SeekOrigin__Enum.h>
#include <Modloader/app/structs/Stream.h>

namespace app::classes::System::IO::Pipes::PipeStream {
    IL2CPP_REGISTER_METHOD(0x01F99750, void, ctor_1, app::PipeStream* this_ptr, app::PipeDirection__Enum direction, int32_t buffer_size)
    IL2CPP_REGISTER_METHOD(
        0x01F99840,
        void,
        ctor_2,
        app::PipeStream* this_ptr,
        app::PipeDirection__Enum direction,
        app::PipeTransmissionMode__Enum transmission_mode,
        int32_t out_buffer_size
    )
    IL2CPP_REGISTER_METHOD(0x01F99940, bool, get_CanRead, app::PipeStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, app::PipeStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F99950, bool, get_CanWrite, app::PipeStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsAsync, app::PipeStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00614BA0, bool, get_IsConnected, app::PipeStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00614BB0, void, set_IsConnected, app::PipeStream* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01F99960, app::Stream*, get_Stream, app::PipeStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F99B80, void, CheckReadOperations, app::PipeStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F99C70, void, CheckWriteOperations, app::PipeStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F99D60, void, Dispose, app::PipeStream* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x01F99DA0, int64_t, get_Length, app::PipeStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int64_t, get_Position, app::PipeStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F99DF0, void, set_Position, app::PipeStream* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x01F99E40, void, SetLength, app::PipeStream* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x01F99E90, int64_t, Seek, app::PipeStream* this_ptr, int64_t offset, app::SeekOrigin__Enum origin)
    IL2CPP_REGISTER_METHOD(0x01F99EE0, int32_t, Read, app::PipeStream* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01F99F60, int32_t, ReadByte, app::PipeStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F99FA0, void, Write, app::PipeStream* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01F9A020, void, WriteByte, app::PipeStream* this_ptr, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x01F9A070, void, Flush, app::PipeStream* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01F9A0B0,
        app::IAsyncResult*,
        BeginRead,
        app::PipeStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(
        0x01F9A300,
        app::IAsyncResult*,
        BeginWrite,
        app::PipeStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x01F9A550, int32_t, EndRead, app::PipeStream* this_ptr, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(0x01F9A610, void, EndWrite, app::PipeStream* this_ptr, app::IAsyncResult* async_result)
} // namespace app::classes::System::IO::Pipes::PipeStream
