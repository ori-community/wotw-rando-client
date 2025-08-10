#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArtOptimizationDataModel.h>
#include <Modloader/app/structs/ModifierSampleTask.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/UberShaderComponent.h>
#include <Modloader/app/structs/UberShaderModifier.h>

namespace app::classes::Moon::ArtOptimization::ModifierSampleTask {
    IL2CPP_REGISTER_METHOD(0x0134BD60, app::RenderTexture*, get_RenderTex, )
    IL2CPP_REGISTER_METHOD(
        0x0134C050,
        void,
        ctor,
        app::ModifierSampleTask* this_ptr,
        int32_t index,
        float progress,
        app::ArtOptimizationDataModel* data_model,
        app::UberShaderComponent* uber_shader,
        app::UberShaderModifier* modifier
    )
    IL2CPP_REGISTER_METHOD(0x0134C070, bool, IsModifierTypeIgnored, app::ModifierSampleTask* this_ptr, app::Type* modifier_type)
    IL2CPP_REGISTER_METHOD(0x0134C110, void, Update, app::ModifierSampleTask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0134CCC0, void, SaveSample, app::ModifierSampleTask* this_ptr, app::Texture2D* sample, app::String* sample_name)
    IL2CPP_REGISTER_METHOD(0x0134CE60, void, cctor, )
} // namespace app::classes::Moon::ArtOptimization::ModifierSampleTask
