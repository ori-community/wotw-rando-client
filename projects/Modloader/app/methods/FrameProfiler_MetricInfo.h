#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FrameProfiler_MetricInfo.h>

namespace app::classes::FrameProfiler_MetricInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::FrameProfiler_MetricInfo * this_ptr))
}
