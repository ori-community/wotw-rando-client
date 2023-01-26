#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FrameProfiler_FrameSample.h>

namespace app::classes::FrameProfiler_FrameSample {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::FrameProfiler_FrameSample * this_ptr))
}
