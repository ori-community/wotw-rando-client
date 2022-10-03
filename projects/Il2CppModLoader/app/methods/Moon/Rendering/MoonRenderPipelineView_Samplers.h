#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Rendering::MoonRenderPipelineView_Samplers {
    IL2CPP_REGISTER_METHOD(0x00EAEA20, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x00EAFC60, app::SrpSampler, root, (app::MoonRenderPipelineViewType__Enum view_type, bool append_frame_number))
    IL2CPP_REGISTER_METHOD(0x00EAFD60, app::SrpSampler, post, (app::IRenderPostprocessor * post))
    IL2CPP_REGISTER_METHOD(0x00EAFFF0, app::String*, releaseRT, (app::RenderTarget * rt))
    IL2CPP_REGISTER_METHOD(0x00EB01F0, void, initSlices, (int32_t slice_count))
    IL2CPP_REGISTER_METHOD(0x00EB05D0, app::SrpSampler, slice_1, (int32_t index))
    IL2CPP_REGISTER_METHOD(0x00EB06D0, app::SrpSampler, slice_2, (int32_t index, app::Int2 size))
} // namespace app::classes::Moon::Rendering::MoonRenderPipelineView_Samplers
