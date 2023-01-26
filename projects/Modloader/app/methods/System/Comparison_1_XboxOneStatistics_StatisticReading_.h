#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_XboxOneStatistics_StatisticReading_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XboxOneStatistics_StatisticReading.h>

namespace app::classes::System::Comparison_1_XboxOneStatistics_StatisticReading_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_XboxOneStatistics_StatisticReading_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B847C0, int32_t, Invoke, (app::Comparison_1_XboxOneStatistics_StatisticReading_ * this_ptr, app::XboxOneStatistics_StatisticReading x, app::XboxOneStatistics_StatisticReading y))
    IL2CPP_REGISTER_METHOD(0x02C86230, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_XboxOneStatistics_StatisticReading_ * this_ptr, app::XboxOneStatistics_StatisticReading x, app::XboxOneStatistics_StatisticReading y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_XboxOneStatistics_StatisticReading_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_XboxOneStatistics_StatisticReading_
