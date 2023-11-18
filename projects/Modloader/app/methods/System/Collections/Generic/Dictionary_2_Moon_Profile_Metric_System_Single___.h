#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_Moon_Profile_Metric_System_Single__1.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_Moon_Profile_Metric_System_Single_.h>
#include <Modloader/app/structs/Metric__Enum.h>
#include <Modloader/app/structs/Single__Array.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_Profile_Metric_System_Single___ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_Moon_Profile_Metric_System_Single__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_Moon_Profile_Metric_System_Single__1 * this_ptr, app::Metric__Enum key, app::Single__Array* value))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_Moon_Profile_Metric_System_Single__1 * this_ptr, app::Metric__Enum key, app::Single__Array* value))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_Moon_Profile_Metric_System_Single__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_Moon_Profile_Metric_System_Single_, GetEnumerator, (app::Dictionary_2_Moon_Profile_Metric_System_Single__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C35530, app::Single__Array*, get_Item, (app::Dictionary_2_Moon_Profile_Metric_System_Single__1 * this_ptr, app::Metric__Enum key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_Profile_Metric_System_Single___
