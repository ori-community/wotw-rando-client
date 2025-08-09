#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_DistortionAnimator_RendererData_.h>
#include <Modloader/app/structs/Comparison_1_DistortionAnimator_RendererData_.h>
#include <Modloader/app/structs/DistortionAnimator_RendererData.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_DistortionAnimator_RendererData_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_DistortionAnimator_RendererData_* this_ptr,
        app::Comparison_1_DistortionAnimator_RendererData_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A0E0,
        int32_t,
        Compare,
        app::ComparisonComparer_1_DistortionAnimator_RendererData_* this_ptr,
        app::DistortionAnimator_RendererData x,
        app::DistortionAnimator_RendererData y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_DistortionAnimator_RendererData_
