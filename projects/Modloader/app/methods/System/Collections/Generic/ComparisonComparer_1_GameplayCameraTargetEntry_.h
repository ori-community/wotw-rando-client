#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_GameplayCameraTargetEntry_.h>
#include <Modloader/app/structs/Comparison_1_GameplayCameraTargetEntry_.h>
#include <Modloader/app/structs/GameplayCameraTargetEntry.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_GameplayCameraTargetEntry_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_GameplayCameraTargetEntry_* this_ptr,
        app::Comparison_1_GameplayCameraTargetEntry_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A0E0,
        int32_t,
        Compare,
        app::ComparisonComparer_1_GameplayCameraTargetEntry_* this_ptr,
        app::GameplayCameraTargetEntry x,
        app::GameplayCameraTargetEntry y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_GameplayCameraTargetEntry_
