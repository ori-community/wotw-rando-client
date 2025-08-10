#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CompressionLevel__Enum.h>
#include <Modloader/app/structs/CompressionMode__Enum_1.h>
#include <Modloader/app/structs/SeekOrigin__Enum.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ZlibBaseStream.h>
#include <Modloader/app/structs/ZlibCodec.h>
#include <Modloader/app/structs/ZlibStreamFlavor__Enum.h>

namespace app::classes::Ionic::Zlib::ZlibBaseStream {
    IL2CPP_REGISTER_METHOD(0x03076B70, int32_t, get_Crc32, app::ZlibBaseStream* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x03076B80,
        void,
        ctor,
        app::ZlibBaseStream* this_ptr,
        app::Stream* stream,
        app::CompressionMode__Enum_1 compression_mode,
        app::CompressionLevel__Enum level,
        app::ZlibStreamFlavor__Enum flavor,
        bool leave_open
    )
    IL2CPP_REGISTER_METHOD(0x03076D60, bool, get__wantCompress, app::ZlibBaseStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03076D70, app::ZlibCodec*, get_z, app::ZlibBaseStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03076F30, app::Byte__Array*, get_workingBuffer, app::ZlibBaseStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03076FC0, void, Write, app::ZlibBaseStream* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count)
    IL2CPP_REGISTER_METHOD(0x03077300, void, finish, app::ZlibBaseStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03077AA0, void, end, app::ZlibBaseStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03077C70, void, Close, app::ZlibBaseStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03077D40, void, Flush, app::ZlibBaseStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03077D70, int64_t, Seek, app::ZlibBaseStream* this_ptr, int64_t offset, app::SeekOrigin__Enum origin)
    IL2CPP_REGISTER_METHOD(0x03077DC0, void, SetLength, app::ZlibBaseStream* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x03077DF0, app::String*, ReadZeroTerminatedString, app::ZlibBaseStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030781F0, int32_t, _ReadAndValidateGzipHeader, app::ZlibBaseStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03078620, int32_t, Read, app::ZlibBaseStream* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count)
    IL2CPP_REGISTER_METHOD(0x03078C20, bool, get_CanRead, app::ZlibBaseStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03078C50, bool, get_CanSeek, app::ZlibBaseStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03078C80, bool, get_CanWrite, app::ZlibBaseStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03078CB0, int64_t, get_Length, app::ZlibBaseStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03078CE0, int64_t, get_Position, app::ZlibBaseStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03078D30, void, set_Position, app::ZlibBaseStream* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x03078D80, void, CompressBuffer, app::Byte__Array* b, app::Stream* compressor)
    IL2CPP_REGISTER_METHOD(0x03078EB0, app::Byte__Array*, UncompressBuffer, app::Byte__Array* compressed, app::Stream* decompressor)
} // namespace app::classes::Ionic::Zlib::ZlibBaseStream
