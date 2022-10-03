#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Rendering::MoonRenderPipelineView_SrpProfilerSample {
    IL2CPP_REGISTER_METHOD(0x00120070, float, get_totalTime, (app::MoonRenderPipelineView_SrpProfilerSample__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EB0BE0, app::MoonRenderPipelineView_SrpProfilerSample, op_Implicit, (app::SrpSampler sampler))
    IL2CPP_REGISTER_METHOD(0x00EB0C50, app::MoonRenderPipelineView_SrpProfilerSample, op_Addition, (app::MoonRenderPipelineView_SrpProfilerSample a, app::MoonRenderPipelineView_SrpProfilerSample b))
    IL2CPP_REGISTER_METHOD(0x00EB0C90, app::MoonRenderPipelineView_SrpProfilerSample, op_Division, (app::MoonRenderPipelineView_SrpProfilerSample a, int32_t b))
    inline app::MoonRenderPipelineView_SrpProfilerSample operator+(app::MoonRenderPipelineView_SrpProfilerSample a, app::MoonRenderPipelineView_SrpProfilerSample b) {
        return op_Addition(a, b);
    }
    inline app::MoonRenderPipelineView_SrpProfilerSample operator/(app::MoonRenderPipelineView_SrpProfilerSample a, int32_t b) {
        return op_Division(a, b);
    }
} // namespace app::classes::Moon::Rendering::MoonRenderPipelineView_SrpProfilerSample
