#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::MonoChunkStream_Chunk {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::MonoChunkStream_Chunk * this_ptr, app::Byte__Array* chunk))
    IL2CPP_REGISTER_METHOD(0x01E70870, int32_t, Read, (app::MonoChunkStream_Chunk * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size))
} // namespace app::classes::System::Net::MonoChunkStream_Chunk
