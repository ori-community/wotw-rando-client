#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FrameTiming__Array.h>

namespace app::classes::UnityEngine::FrameTimingManager {
    IL2CPP_REGISTER_METHOD(0x025260C0, void, CaptureFrameTimings, )
    IL2CPP_REGISTER_METHOD(0x02526110, uint32_t, GetLatestTimings, uint32_t num_frames, app::FrameTiming__Array* timings)
} // namespace app::classes::UnityEngine::FrameTimingManager
