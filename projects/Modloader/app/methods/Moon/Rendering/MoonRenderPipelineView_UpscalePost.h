#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Rendering::MoonRenderPipelineView_UpscalePost {
    IL2CPP_REGISTER_METHOD(0x00EB0CC0, void, IRenderPostprocessor_OnRenderImage, (app::MoonRenderPipelineView_UpscalePost * this_ptr, app::PostProcessRenderContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IRenderPostprocessor_get_enabled, (app::MoonRenderPipelineView_UpscalePost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoonRenderPipelineView_UpscalePost * this_ptr))
} // namespace app::classes::Moon::Rendering::MoonRenderPipelineView_UpscalePost
