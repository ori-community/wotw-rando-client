#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_StatisticianIdle_IdleStates_System_Boolean_.h>
#include <Modloader/app/structs/StatisticianIdle_IdleStates__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_StatisticianIdle_IdleStates_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_StatisticianIdle_IdleStates_System_Boolean_* this_ptr,
        app::StatisticianIdle_IdleStates__Enum key,
        bool value
    )
    IL2CPP_REGISTER_METHOD(
        0x02DB99B0,
        bool,
        get_Item,
        app::Dictionary_2_StatisticianIdle_IdleStates_System_Boolean_* this_ptr,
        app::StatisticianIdle_IdleStates__Enum key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_StatisticianIdle_IdleStates_System_Boolean_* this_ptr,
        app::StatisticianIdle_IdleStates__Enum key,
        bool value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_StatisticianIdle_IdleStates_System_Boolean_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_StatisticianIdle_IdleStates_System_Boolean_
