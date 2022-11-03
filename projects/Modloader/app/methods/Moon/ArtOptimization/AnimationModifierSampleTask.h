#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::ArtOptimization::AnimationModifierSampleTask {
    IL2CPP_REGISTER_METHOD(0x0133CF00, app::RenderTexture*, get_RenderTex, ())
    IL2CPP_REGISTER_METHOD(0x0133D1F0, void, ctor, (app::AnimationModifierSampleTask * this_ptr, int32_t index, int32_t anim_sample_index, float progress, app::ArtOptimizationDataModel* data_model, app::UberShaderComponent* uber_shader, app::UberShaderModifier* modifier))
    IL2CPP_REGISTER_METHOD(0x0133D220, bool, IsModifierTypeIgnored, (app::AnimationModifierSampleTask * this_ptr, app::Type* modifier_type))
    IL2CPP_REGISTER_METHOD(0x0133D2C0, void, OnEnterContext, (app::AnimationModifierSampleTask * this_ptr, app::IOptimizationTask* antecedent, app::Object* context_data))
    IL2CPP_REGISTER_METHOD(0x0133D2D0, void, Update, (app::AnimationModifierSampleTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0133E290, void, SaveSample, (app::AnimationModifierSampleTask * this_ptr, app::Texture2D* sample, app::String* sample_name))
    IL2CPP_REGISTER_METHOD(0x0133E430, void, cctor, ())
} // namespace app::classes::Moon::ArtOptimization::AnimationModifierSampleTask
