#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::IO::BinaryReader {
    IL2CPP_REGISTER_METHOD(0x01DFD6B0, void, ctor_1, app::BinaryReader* this_ptr, app::Stream* input)
    IL2CPP_REGISTER_METHOD(0x01DFD820, void, ctor_2, app::BinaryReader* this_ptr, app::Stream* input, app::Encoding* encoding)
    IL2CPP_REGISTER_METHOD(0x01DFD840, void, ctor_3, app::BinaryReader* this_ptr, app::Stream* input, app::Encoding* encoding, bool leave_open)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Stream*, get_BaseStream, app::BinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFDA90, void, Close, app::BinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFDAB0, void, Dispose_1, app::BinaryReader* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x01DFDA90, void, Dispose_2, app::BinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFDB10, int32_t, PeekChar, app::BinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFDBD0, int32_t, Read_1, app::BinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFDBF0, bool, ReadBoolean, app::BinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFDC50, uint8_t, ReadByte, app::BinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFDC90, int8_t, ReadSByte, app::BinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFDCE0, char16_t, ReadChar, app::BinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFDD10, int16_t, ReadInt16, app::BinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFDD10, uint16_t, ReadUInt16, app::BinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFDD90, int32_t, ReadInt32, app::BinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFDFA0, uint32_t, ReadUInt32, app::BinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFE090, int64_t, ReadInt64, app::BinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFE090, uint64_t, ReadUInt64, app::BinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFE280, float, ReadSingle, app::BinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFE2D0, double, ReadDouble, app::BinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFE440, app::Decimal, ReadDecimal, app::BinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFE570, app::String*, ReadString, app::BinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFE820, int32_t, InternalReadChars, app::BinaryReader* this_ptr, app::Char__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01DFEB80, int32_t, InternalReadOneChar, app::BinaryReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFEEA0, app::Char__Array*, ReadChars, app::BinaryReader* this_ptr, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01DFF030, int32_t, Read_2, app::BinaryReader* this_ptr, app::Byte__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01DFF220, app::Byte__Array*, ReadBytes, app::BinaryReader* this_ptr, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01DFF3F0, void, FillBuffer, app::BinaryReader* this_ptr, int32_t num_bytes)
    IL2CPP_REGISTER_METHOD(0x01DFF5A0, int32_t, Read7BitEncodedInt, app::BinaryReader* this_ptr)
} // namespace app::classes::System::IO::BinaryReader
