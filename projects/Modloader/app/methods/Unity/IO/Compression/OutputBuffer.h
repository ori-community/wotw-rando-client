#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OutputBuffer.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/OutputBuffer_BufferState.h>

namespace app::classes::Unity::IO::Compression::OutputBuffer {
    IL2CPP_REGISTER_METHOD(0x00E464D0, void, UpdateBuffer, (app::OutputBuffer * this_ptr, app::Byte__Array* output))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_BytesWritten, (app::OutputBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B7D1D0, int32_t, get_FreeBytes, (app::OutputBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B7D1F0, void, WriteUInt16, (app::OutputBuffer * this_ptr, uint16_t value))
    IL2CPP_REGISTER_METHOD(0x02B7D270, void, WriteBits, (app::OutputBuffer * this_ptr, int32_t n, uint32_t bits))
    IL2CPP_REGISTER_METHOD(0x02B7D320, void, FlushBits, (app::OutputBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B7D3D0, void, WriteBytes, (app::OutputBuffer * this_ptr, app::Byte__Array* byte_array, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B7D490, void, WriteBytesUnaligned, (app::OutputBuffer * this_ptr, app::Byte__Array* byte_array, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B7D520, void, WriteByteUnaligned, (app::OutputBuffer * this_ptr, uint8_t b))
    IL2CPP_REGISTER_METHOD(0x02B7D530, int32_t, get_BitsInBuffer, (app::OutputBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B7D540, app::OutputBuffer_BufferState, DumpState, (app::OutputBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B7D570, void, RestoreState, (app::OutputBuffer * this_ptr, app::OutputBuffer_BufferState state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::OutputBuffer * this_ptr))
} // namespace app::classes::Unity::IO::Compression::OutputBuffer
