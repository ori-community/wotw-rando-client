#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array_EmptyInternalEnumerator_1_XboxOneStatistics_StatisticReading_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XboxOneStatistics_StatisticReading.h>

namespace app::classes::System::Array_EmptyInternalEnumerator_1_XboxOneStatistics_StatisticReading_ {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (app::Array_EmptyInternalEnumerator_1_XboxOneStatistics_StatisticReading_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, MoveNext, (app::Array_EmptyInternalEnumerator_1_XboxOneStatistics_StatisticReading_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D036B0, app::XboxOneStatistics_StatisticReading, get_Current, (app::Array_EmptyInternalEnumerator_1_XboxOneStatistics_StatisticReading_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CFF500, app::Object*, IEnumerator_get_Current, (app::Array_EmptyInternalEnumerator_1_XboxOneStatistics_StatisticReading_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IEnumerator_Reset, (app::Array_EmptyInternalEnumerator_1_XboxOneStatistics_StatisticReading_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Array_EmptyInternalEnumerator_1_XboxOneStatistics_StatisticReading_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CFEB90, void, cctor, ())
} // namespace app::classes::System::Array_EmptyInternalEnumerator_1_XboxOneStatistics_StatisticReading_
