#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_Moon_UberStateVisualization_UberStateGroupData_.h>
#include <Modloader/app/structs/Comparison_1_Moon_UberStateVisualization_UberStateGroupData_.h>
#include <Modloader/app/structs/UberStateGroupData.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_UberStateVisualization_UberStateGroupData_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_Moon_UberStateVisualization_UberStateGroupData_* this_ptr,
        app::Comparison_1_Moon_UberStateVisualization_UberStateGroupData_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A5C0,
        int32_t,
        Compare,
        app::ComparisonComparer_1_Moon_UberStateVisualization_UberStateGroupData_* this_ptr,
        app::UberStateGroupData x,
        app::UberStateGroupData y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_UberStateVisualization_UberStateGroupData_
