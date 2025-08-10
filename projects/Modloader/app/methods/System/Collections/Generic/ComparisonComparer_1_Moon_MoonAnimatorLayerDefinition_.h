#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_Moon_MoonAnimatorLayerDefinition_.h>
#include <Modloader/app/structs/Comparison_1_Moon_MoonAnimatorLayerDefinition_.h>
#include <Modloader/app/structs/MoonAnimatorLayerDefinition.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_MoonAnimatorLayerDefinition_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_Moon_MoonAnimatorLayerDefinition_* this_ptr,
        app::Comparison_1_Moon_MoonAnimatorLayerDefinition_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A210,
        int32_t,
        Compare,
        app::ComparisonComparer_1_Moon_MoonAnimatorLayerDefinition_* this_ptr,
        app::MoonAnimatorLayerDefinition x,
        app::MoonAnimatorLayerDefinition y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_MoonAnimatorLayerDefinition_
