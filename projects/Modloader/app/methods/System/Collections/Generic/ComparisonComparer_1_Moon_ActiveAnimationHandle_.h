#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/ComparisonComparer_1_Moon_ActiveAnimationHandle_.h>
#include <Modloader/app/structs/Comparison_1_Moon_ActiveAnimationHandle_.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_ActiveAnimationHandle_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_Moon_ActiveAnimationHandle_* this_ptr,
        app::Comparison_1_Moon_ActiveAnimationHandle_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A050,
        int32_t,
        Compare,
        app::ComparisonComparer_1_Moon_ActiveAnimationHandle_* this_ptr,
        app::ActiveAnimationHandle x,
        app::ActiveAnimationHandle y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_ActiveAnimationHandle_
