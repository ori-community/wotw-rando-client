#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CompressionMode__Enum.h>
#include <Modloader/app/structs/DeflateStream.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SeekOrigin__Enum.h>
#include <Modloader/app/structs/Stream.h>

namespace app::classes::System::IO::Compression::DeflateStream {
    IL2CPP_REGISTER_METHOD(0x02006900, void, ctor_1, app::DeflateStream* this_ptr, app::Stream* stream, app::CompressionMode__Enum mode)
    IL2CPP_REGISTER_METHOD(
        0x02006920,
        void,
        ctor_2,
        app::DeflateStream* this_ptr,
        app::Stream* stream,
        app::CompressionMode__Enum mode,
        bool leave_open,
        int32_t windows_bits
    )
    IL2CPP_REGISTER_METHOD(
        0x02006940,
        void,
        ctor_3,
        app::DeflateStream* this_ptr,
        app::Stream* compressed_stream,
        app::CompressionMode__Enum mode,
        bool leave_open,
        bool gzip
    )
    IL2CPP_REGISTER_METHOD(0x02006AC0, void, Dispose, app::DeflateStream* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x02006B30, int32_t, ReadInternal, app::DeflateStream* this_ptr, app::Byte__Array* array, int32_t offset, int32_t count)
    IL2CPP_REGISTER_METHOD(0x02006C70, int32_t, Read, app::DeflateStream* this_ptr, app::Byte__Array* array, int32_t offset, int32_t count)
    IL2CPP_REGISTER_METHOD(0x02006F90, void, WriteInternal, app::DeflateStream* this_ptr, app::Byte__Array* array, int32_t offset, int32_t count)
    IL2CPP_REGISTER_METHOD(0x020070C0, void, Write, app::DeflateStream* this_ptr, app::Byte__Array* array, int32_t offset, int32_t count)
    IL2CPP_REGISTER_METHOD(0x020073E0, void, Flush, app::DeflateStream* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x020075C0,
        app::IAsyncResult*,
        BeginRead,
        app::DeflateStream* this_ptr,
        app::Byte__Array* array,
        int32_t offset,
        int32_t count,
        app::AsyncCallback* async_callback,
        app::Object* async_state
    )
    IL2CPP_REGISTER_METHOD(
        0x02007990,
        app::IAsyncResult*,
        BeginWrite,
        app::DeflateStream* this_ptr,
        app::Byte__Array* array,
        int32_t offset,
        int32_t count,
        app::AsyncCallback* async_callback,
        app::Object* async_state
    )
    IL2CPP_REGISTER_METHOD(0x02007D60, int32_t, EndRead, app::DeflateStream* this_ptr, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(0x02007F30, void, EndWrite, app::DeflateStream* this_ptr, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(0x020080E0, int64_t, Seek, app::DeflateStream* this_ptr, int64_t offset, app::SeekOrigin__Enum origin)
    IL2CPP_REGISTER_METHOD(0x02008130, void, SetLength, app::DeflateStream* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x02008180, bool, get_CanRead, app::DeflateStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, app::DeflateStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020081C0, bool, get_CanWrite, app::DeflateStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02008200, int64_t, get_Length, app::DeflateStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02008250, int64_t, get_Position, app::DeflateStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020082A0, void, set_Position, app::DeflateStream* this_ptr, int64_t value)
} // namespace app::classes::System::IO::Compression::DeflateStream
