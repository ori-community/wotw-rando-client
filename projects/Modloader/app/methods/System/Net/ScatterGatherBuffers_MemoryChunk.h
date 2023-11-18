#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ScatterGatherBuffers_MemoryChunk.h>

namespace app::classes::System::Net::ScatterGatherBuffers_MemoryChunk {
    IL2CPP_REGISTER_METHOD(0x01BD0BD0, void, ctor, (app::ScatterGatherBuffers_MemoryChunk * this_ptr, int32_t buffer_size))
}
