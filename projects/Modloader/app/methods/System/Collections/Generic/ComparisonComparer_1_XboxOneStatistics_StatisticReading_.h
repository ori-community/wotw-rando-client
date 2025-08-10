#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_XboxOneStatistics_StatisticReading_.h>
#include <Modloader/app/structs/Comparison_1_XboxOneStatistics_StatisticReading_.h>
#include <Modloader/app/structs/XboxOneStatistics_StatisticReading.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_XboxOneStatistics_StatisticReading_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_XboxOneStatistics_StatisticReading_* this_ptr,
        app::Comparison_1_XboxOneStatistics_StatisticReading_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A0E0,
        int32_t,
        Compare,
        app::ComparisonComparer_1_XboxOneStatistics_StatisticReading_* this_ptr,
        app::XboxOneStatistics_StatisticReading x,
        app::XboxOneStatistics_StatisticReading y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_XboxOneStatistics_StatisticReading_
