#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_Moon_MoonAnimator_AnimatorPostprocessData_.h>
#include <Modloader/app/structs/Comparison_1_Moon_MoonAnimator_AnimatorPostprocessData_.h>
#include <Modloader/app/structs/MoonAnimator_AnimatorPostprocessData.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_MoonAnimator_AnimatorPostprocessData_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_Moon_MoonAnimator_AnimatorPostprocessData_* this_ptr,
        app::Comparison_1_Moon_MoonAnimator_AnimatorPostprocessData_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A270,
        int32_t,
        Compare,
        app::ComparisonComparer_1_Moon_MoonAnimator_AnimatorPostprocessData_* this_ptr,
        app::MoonAnimator_AnimatorPostprocessData x,
        app::MoonAnimator_AnimatorPostprocessData y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_MoonAnimator_AnimatorPostprocessData_
