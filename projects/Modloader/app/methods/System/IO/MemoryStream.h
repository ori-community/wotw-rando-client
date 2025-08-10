#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/MemoryStream.h>
#include <Modloader/app/structs/SeekOrigin__Enum.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/Task_1_System_Int32_.h>

namespace app::classes::System::IO::MemoryStream {
    IL2CPP_REGISTER_METHOD(0x02370060, void, ctor_1, app::MemoryStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02370070, void, ctor_2, app::MemoryStream* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02370180, void, ctor_3, app::MemoryStream* this_ptr, app::Byte__Array* buffer)
    IL2CPP_REGISTER_METHOD(0x02370290, void, ctor_4, app::MemoryStream* this_ptr, app::Byte__Array* buffer, bool writable)
    IL2CPP_REGISTER_METHOD(0x023703B0, void, ctor_5, app::MemoryStream* this_ptr, app::Byte__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x023703E0,
        void,
        ctor_6,
        app::MemoryStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t index,
        int32_t count,
        bool writable,
        bool publicly_visible
    )
    IL2CPP_REGISTER_METHOD(0x00A1A3B0, bool, get_CanRead, app::MemoryStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1A3B0, bool, get_CanSeek, app::MemoryStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00444DC0, bool, get_CanWrite, app::MemoryStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023705F0, void, EnsureWriteable, app::MemoryStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02370620, void, Dispose, app::MemoryStream* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x02370660, bool, EnsureCapacity, app::MemoryStream* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, app::MemoryStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02370770, app::Task*, FlushAsync, app::MemoryStream* this_ptr, app::CancellationToken cancellation_token)
    IL2CPP_REGISTER_METHOD(0x023708B0, app::Byte__Array*, GetBuffer, app::MemoryStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Byte__Array*, InternalGetBuffer, app::MemoryStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02370980, int32_t, InternalGetPosition, app::MemoryStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023709A0, int32_t, InternalReadInt32, app::MemoryStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02370AC0, int32_t, InternalEmulateRead, app::MemoryStream* this_ptr, int32_t count)
    IL2CPP_REGISTER_METHOD(0x02370B00, int32_t, get_Capacity, app::MemoryStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02370B20, void, set_Capacity, app::MemoryStream* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02370CA0, int64_t, get_Length, app::MemoryStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02370CC0, int64_t, get_Position, app::MemoryStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02370CE0, void, set_Position, app::MemoryStream* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x02370E10, int32_t, Read, app::MemoryStream* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x023710C0,
        app::Task_1_System_Int32_*,
        ReadAsync,
        app::MemoryStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count,
        app::CancellationToken cancellation_token
    )
    IL2CPP_REGISTER_METHOD(0x023714C0, int32_t, ReadByte, app::MemoryStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02371520, int64_t, Seek, app::MemoryStream* this_ptr, int64_t offset, app::SeekOrigin__Enum loc)
    IL2CPP_REGISTER_METHOD(0x02371780, void, SetLength, app::MemoryStream* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x02371900, app::Byte__Array*, ToArray, app::MemoryStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02371A00, void, Write, app::MemoryStream* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x02371D40,
        app::Task*,
        WriteAsync,
        app::MemoryStream* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count,
        app::CancellationToken cancellation_token
    )
    IL2CPP_REGISTER_METHOD(0x02372000, void, WriteByte, app::MemoryStream* this_ptr, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x023720F0, void, WriteTo, app::MemoryStream* this_ptr, app::Stream* stream)
} // namespace app::classes::System::IO::MemoryStream
