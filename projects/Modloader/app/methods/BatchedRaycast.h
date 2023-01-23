#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BatchedRaycast.h>
#include <Modloader/app/structs/JobHandle.h>

namespace app::classes::BatchedRaycast {
    IL2CPP_REGISTER_METHOD(0x00F97A30, void, ctor, (app::BatchedRaycast * this_ptr, int32_t batch_size))
    IL2CPP_REGISTER_METHOD(0x00F97BA0, app::JobHandle, ScheduleBatch, (app::BatchedRaycast * this_ptr))
} // namespace app::classes::BatchedRaycast
