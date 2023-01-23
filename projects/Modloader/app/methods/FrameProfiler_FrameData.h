#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FrameProfiler_FrameData.h>

namespace app::classes::FrameProfiler_FrameData {
    IL2CPP_REGISTER_METHOD(0x03152BE0, void, ctor, (app::FrameProfiler_FrameData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03152EA0, void, Reset, (app::FrameProfiler_FrameData * this_ptr))
} // namespace app::classes::FrameProfiler_FrameData
