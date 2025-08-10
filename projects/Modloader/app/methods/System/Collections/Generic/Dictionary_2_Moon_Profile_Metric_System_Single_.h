#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_Moon_Profile_Metric_System_Single_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_Moon_Profile_Metric_System_Single__1.h>
#include <Modloader/app/structs/Metric__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_Profile_Metric_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_Moon_Profile_Metric_System_Single_* this_ptr, app::Metric__Enum key)
    IL2CPP_REGISTER_METHOD(0x02C383F0, float, get_Item, app::Dictionary_2_Moon_Profile_Metric_System_Single_* this_ptr, app::Metric__Enum key)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_Moon_Profile_Metric_System_Single_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BBBD70, void, Add, app::Dictionary_2_Moon_Profile_Metric_System_Single_* this_ptr, app::Metric__Enum key, float value)
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_Moon_Profile_Metric_System_Single_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BBBD40, void, set_Item, app::Dictionary_2_Moon_Profile_Metric_System_Single_* this_ptr, app::Metric__Enum key, float value)
    IL2CPP_REGISTER_METHOD(
        0x02BAC6E0,
        app::Dictionary_2_TKey_TValue_Enumerator_Moon_Profile_Metric_System_Single__1,
        GetEnumerator,
        app::Dictionary_2_Moon_Profile_Metric_System_Single_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_Profile_Metric_System_Single_
