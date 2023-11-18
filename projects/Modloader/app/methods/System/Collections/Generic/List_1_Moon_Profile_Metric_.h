#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_Profile_Metric_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_Profile_Metric_.h>
#include <Modloader/app/structs/Metric__Enum.h>
#include <Modloader/app/structs/Metric__Enum__Array.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_Profile_Metric_ {
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_1, (app::List_1_Moon_Profile_Metric_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02F1C970, void, Add, (app::List_1_Moon_Profile_Metric_ * this_ptr, app::Metric__Enum item))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_2, (app::List_1_Moon_Profile_Metric_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1CC20, bool, Contains, (app::List_1_Moon_Profile_Metric_ * this_ptr, app::Metric__Enum item))
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::Metric__Enum__Array*, ToArray, (app::List_1_Moon_Profile_Metric_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Moon_Profile_Metric_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_Profile_Metric_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D1F360, app::Metric__Enum, get_Item, (app::List_1_Moon_Profile_Metric_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02D201B0, app::List_1_T_Enumerator_Moon_Profile_Metric_, GetEnumerator, (app::List_1_Moon_Profile_Metric_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_Moon_Profile_Metric_
