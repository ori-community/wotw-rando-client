#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::MonoChunkStream {
    IL2CPP_REGISTER_METHOD(0x01E6F210, void, ctor_1, (app::MonoChunkStream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t size, app::WebHeaderCollection * headers))
    IL2CPP_REGISTER_METHOD(0x01E6F280, void, ctor_2, (app::MonoChunkStream * this_ptr, app::WebHeaderCollection * headers))
    IL2CPP_REGISTER_METHOD(0x01E6F4B0, void, ResetBuffer, (app::MonoChunkStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E6F4F0, void, WriteAndReadBack, (app::MonoChunkStream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t size, int32_t * read))
    IL2CPP_REGISTER_METHOD(0x01E6F570, int32_t, Read, (app::MonoChunkStream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t size))
    IL2CPP_REGISTER_METHOD(0x01E6F580, int32_t, ReadFromChunks, (app::MonoChunkStream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t size))
    IL2CPP_REGISTER_METHOD(0x01E6F930, void, Write, (app::MonoChunkStream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t size))
    IL2CPP_REGISTER_METHOD(0x01E6F960, void, InternalWrite, (app::MonoChunkStream * this_ptr, app::Byte__Array * buffer, int32_t * offset, int32_t size))
    IL2CPP_REGISTER_METHOD(0x01E6FBA0, bool, get_WantMore, (app::MonoChunkStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E6FBC0, bool, get_DataAvailable, (app::MonoChunkStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_TotalDataSize, (app::MonoChunkStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E6FD30, int32_t, get_ChunkLeft, (app::MonoChunkStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E6FD40, app::MonoChunkStream_State__Enum, ReadBody, (app::MonoChunkStream * this_ptr, app::Byte__Array * buffer, int32_t * offset, int32_t size))
    IL2CPP_REGISTER_METHOD(0x01E6FF40, app::MonoChunkStream_State__Enum, GetChunkSize, (app::MonoChunkStream * this_ptr, app::Byte__Array * buffer, int32_t * offset, int32_t size))
    IL2CPP_REGISTER_METHOD(0x01E70220, app::String *, RemoveChunkExtension, (app::String * input))
    IL2CPP_REGISTER_METHOD(0x01E70280, app::MonoChunkStream_State__Enum, ReadCRLF, (app::MonoChunkStream * this_ptr, app::Byte__Array * buffer, int32_t * offset, int32_t size))
    IL2CPP_REGISTER_METHOD(0x01E703B0, app::MonoChunkStream_State__Enum, ReadTrailer, (app::MonoChunkStream * this_ptr, app::Byte__Array * buffer, int32_t * offset, int32_t size))
    IL2CPP_REGISTER_METHOD(0x01E70800, void, ThrowProtocolViolation, (app::String * message))
    IL2CPP_REGISTER_METHODINFO(0x04721CE0, MonoChunkStream_ThrowProtocolViolation__MethodInfo)
}
