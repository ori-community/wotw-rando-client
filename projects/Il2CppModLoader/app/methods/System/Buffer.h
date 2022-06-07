#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Buffer {
    IL2CPP_REGISTER_METHOD(0x0229E780, bool, InternalBlockCopy, (app::Array * src, int32_t src_offset_bytes, app::Array * dst, int32_t dst_offset_bytes, int32_t byte_count))
    IL2CPP_REGISTER_METHOD(0x0229E840, int32_t, IndexOfByte, (uint8_t * src, uint8_t value, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0229E900, int32_t, _ByteLength, (app::Array * array))
    IL2CPP_REGISTER_METHOD(0x0229E950, void, ZeroMemory, (uint8_t * src, int64_t len))
    IL2CPP_REGISTER_METHOD(0x0229E970, void, Memcpy_1, (app::Byte__Array * dest, int32_t dest_index, uint8_t * src, int32_t src_index, int32_t len))
    IL2CPP_REGISTER_METHOD(0x0229E9B0, void, Memcpy_2, (uint8_t * p_dest, int32_t dest_index, app::Byte__Array * src, int32_t src_index, int32_t len))
    IL2CPP_REGISTER_METHOD(0x0229E9F0, int32_t, ByteLength, (app::Array * array))
    IL2CPP_REGISTER_METHODINFO(0x04771448, Buffer_ByteLength__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0229EB30, void, BlockCopy, (app::Array * src, int32_t src_offset, app::Array * dst, int32_t dst_offset, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x0475F0A8, Buffer_BlockCopy__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0229EDB0, void, MemoryCopy, (app::Void * source, app::Void * destination, int64_t destination_size_in_bytes, int64_t source_bytes_to_copy))
    IL2CPP_REGISTER_METHOD(0x0229EF00, void, memcpy4, (uint8_t * dest, uint8_t * src, int32_t size))
    IL2CPP_REGISTER_METHOD(0x0229EFA0, void, memcpy2, (uint8_t * dest, uint8_t * src, int32_t size))
    IL2CPP_REGISTER_METHOD(0x0229F020, void, memcpy1, (uint8_t * dest, uint8_t * src, int32_t size))
    IL2CPP_REGISTER_METHOD(0x0229F0D0, void, Memcpy_3, (uint8_t * dest, uint8_t * src, int32_t size))
}
