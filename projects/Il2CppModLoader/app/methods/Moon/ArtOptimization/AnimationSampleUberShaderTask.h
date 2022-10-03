#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::ArtOptimization::AnimationSampleUberShaderTask {
    IL2CPP_REGISTER_METHOD(0x0133EB10, app::RenderTexture*, get_RenderTex, ())
    IL2CPP_REGISTER_METHOD(0x0133EE00, void, ctor, (app::AnimationSampleUberShaderTask * this_ptr, int32_t sample_index, int32_t anim_sample_index, float progress, app::ArtOptimizationDataModel* data_model, app::UberShaderComponent* uber_shader, app::Bounds bounds))
    IL2CPP_REGISTER_METHOD(0x0133EE40, void, OnEnterContext, (app::AnimationSampleUberShaderTask * this_ptr, app::IOptimizationTask* antecedent, app::Object* context_data))
    IL2CPP_REGISTER_METHOD(0x0133EE50, void, Update, (app::AnimationSampleUberShaderTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0133FDC0, void, SaveSample, (app::AnimationSampleUberShaderTask * this_ptr, app::Texture2D* sample, app::String* sample_name))
    IL2CPP_REGISTER_METHOD(0x0133FF60, void, cctor, ())
} // namespace app::classes::Moon::ArtOptimization::AnimationSampleUberShaderTask
