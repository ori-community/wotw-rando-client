#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_Moon_DesiredStateTransitionInfo_.h>
#include <Modloader/app/structs/Comparison_1_Moon_DesiredStateTransitionInfo_.h>
#include <Modloader/app/structs/DesiredStateTransitionInfo.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_DesiredStateTransitionInfo_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, (app::ComparisonComparer_1_Moon_DesiredStateTransitionInfo_ * this_ptr, app::Comparison_1_Moon_DesiredStateTransitionInfo_* comparison))
    IL2CPP_REGISTER_METHOD(0x0162A270, int32_t, Compare, (app::ComparisonComparer_1_Moon_DesiredStateTransitionInfo_ * this_ptr, app::DesiredStateTransitionInfo x, app::DesiredStateTransitionInfo y))
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_DesiredStateTransitionInfo_
