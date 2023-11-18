#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_Datadog_ThresholdItem_.h>
#include <Modloader/app/structs/Comparison_1_Datadog_ThresholdItem_.h>
#include <Modloader/app/structs/Datadog_ThresholdItem.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Datadog_ThresholdItem_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, (app::ComparisonComparer_1_Datadog_ThresholdItem_ * this_ptr, app::Comparison_1_Datadog_ThresholdItem_* comparison))
    IL2CPP_REGISTER_METHOD(0x0162A050, int32_t, Compare, (app::ComparisonComparer_1_Datadog_ThresholdItem_ * this_ptr, app::Datadog_ThresholdItem x, app::Datadog_ThresholdItem y))
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Datadog_ThresholdItem_
