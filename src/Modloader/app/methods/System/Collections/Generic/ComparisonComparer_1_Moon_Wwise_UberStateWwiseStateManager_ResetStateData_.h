#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData_.h>
#include <Modloader/app/structs/Comparison_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData_.h>
#include <Modloader/app/structs/UberStateWwiseStateManager_ResetStateData.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData_* this_ptr,
        app::Comparison_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A050,
        int32_t,
        Compare,
        app::ComparisonComparer_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData_* this_ptr,
        app::UberStateWwiseStateManager_ResetStateData x,
        app::UberStateWwiseStateManager_ResetStateData y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData_
