#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XboxOneFlow_c.h>
#include <Modloader/app/structs/List_1_XboxOneStatistics_StatisticReading_.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/Task_1_System_Collections_Generic_IEnumerable_1_.h>

namespace app::classes::XboxOneFlow___c {
    IL2CPP_REGISTER_METHOD(0x01C584F0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XboxOneFlow_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C58630, void, _UpdateNextSaveSlot_b__39_0, (app::XboxOneFlow_c * this_ptr, app::Task_1_System_Collections_Generic_IEnumerable_1_* t))
    IL2CPP_REGISTER_METHOD(0x01C58790, void, _UpdateNextSaveSlot_b__39_1, (app::XboxOneFlow_c * this_ptr, app::Task* t))
    IL2CPP_REGISTER_METHOD(0x01C588A0, void, _StatisticsTest_b__41_0, (app::XboxOneFlow_c * this_ptr, app::List_1_XboxOneStatistics_StatisticReading_* result))
    IL2CPP_REGISTER_METHOD(0x01C58A30, void, _StatisticsTest_b__41_1, (app::XboxOneFlow_c * this_ptr))
} // namespace app::classes::XboxOneFlow___c
