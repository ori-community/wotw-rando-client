#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ScatterGatherBuffers.h>
#include <Modloader/app/structs/BufferOffsetSize_1__Array.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/ScatterGatherBuffers_MemoryChunk.h>

namespace app::classes::System::Net::ScatterGatherBuffers {
    IL2CPP_REGISTER_METHOD(0x01BD0570, void, ctor_1, (app::ScatterGatherBuffers * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BD0580, void, ctor_2, (app::ScatterGatherBuffers * this_ptr, int64_t total_size))
    IL2CPP_REGISTER_METHOD(0x01BD05C0, app::BufferOffsetSize_1__Array*, GetBuffers, (app::ScatterGatherBuffers * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BD08B0, bool, get_Empty, (app::ScatterGatherBuffers * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529E80, int32_t, get_Length, (app::ScatterGatherBuffers * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BD08D0, void, Write, (app::ScatterGatherBuffers * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01BD09F0, app::ScatterGatherBuffers_MemoryChunk*, AllocateMemoryChunk, (app::ScatterGatherBuffers * this_ptr, int32_t new_size))
} // namespace app::classes::System::Net::ScatterGatherBuffers
