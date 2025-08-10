#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_Moon_Profile_Metric_List_1_System_Single_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_Moon_Profile_Metric_List_1_System_Single_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_Moon_Profile_Metric_List_1_System_Single_.h>
#include <Modloader/app/structs/List_1_System_Single_.h>
#include <Modloader/app/structs/Metric__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_Profile_Metric_List_1_System_Single__ {
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_Moon_Profile_Metric_List_1_System_Single_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_Moon_Profile_Metric_List_1_System_Single_* this_ptr,
        app::Metric__Enum key,
        app::List_1_System_Single_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_Moon_Profile_Metric_List_1_System_Single_,
        GetEnumerator,
        app::Dictionary_2_Moon_Profile_Metric_List_1_System_Single_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02C35530,
        app::List_1_System_Single_*,
        get_Item,
        app::Dictionary_2_Moon_Profile_Metric_List_1_System_Single_* this_ptr,
        app::Metric__Enum key
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, app::Dictionary_2_Moon_Profile_Metric_List_1_System_Single_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::Dictionary_2_TKey_TValue_ValueCollection_Moon_Profile_Metric_List_1_System_Single_*,
        get_Values,
        app::Dictionary_2_Moon_Profile_Metric_List_1_System_Single_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor_2, app::Dictionary_2_Moon_Profile_Metric_List_1_System_Single_* this_ptr, int32_t capacity)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_Profile_Metric_List_1_System_Single__
