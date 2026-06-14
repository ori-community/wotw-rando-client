#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_TimeZoneInfo_AdjustmentRule_.h>
#include <Modloader/app/structs/IEnumerable_1_System_TimeZoneInfo_AdjustmentRule_.h>
#include <Modloader/app/structs/List_1_System_TimeZoneInfo_AdjustmentRule_.h>
#include <Modloader/app/structs/TimeZoneInfo_AdjustmentRule.h>
#include <Modloader/app/structs/TimeZoneInfo_AdjustmentRule__Array.h>

namespace app::classes::System::Collections::Generic::List_1_System_TimeZoneInfo_AdjustmentRule_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_System_TimeZoneInfo_AdjustmentRule_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_System_TimeZoneInfo_AdjustmentRule_* this_ptr, app::TimeZoneInfo_AdjustmentRule* item)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_System_TimeZoneInfo_AdjustmentRule_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E9020,
        void,
        AddRange,
        app::List_1_System_TimeZoneInfo_AdjustmentRule_* this_ptr,
        app::IEnumerable_1_System_TimeZoneInfo_AdjustmentRule_* collection
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAEA0,
        void,
        Sort,
        app::List_1_System_TimeZoneInfo_AdjustmentRule_* this_ptr,
        app::Comparison_1_TimeZoneInfo_AdjustmentRule_* comparison
    )
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::TimeZoneInfo_AdjustmentRule__Array*, ToArray, app::List_1_System_TimeZoneInfo_AdjustmentRule_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, app::List_1_System_TimeZoneInfo_AdjustmentRule_* this_ptr, app::TimeZoneInfo_AdjustmentRule* item)
} // namespace app::classes::System::Collections::Generic::List_1_System_TimeZoneInfo_AdjustmentRule_
