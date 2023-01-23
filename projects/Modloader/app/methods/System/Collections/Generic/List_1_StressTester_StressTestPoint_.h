#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/StressTester_StressTestPoint.h>
#include <Modloader/app/structs/List_1_StressTester_StressTestPoint_.h>

namespace app::classes::System::Collections::Generic::List_1_StressTester_StressTestPoint_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::StressTester_StressTestPoint*, get_Item, (app::List_1_StressTester_StressTestPoint_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04727170, List_1_StressTester_StressTestPoint__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_StressTester_StressTestPoint_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047410A8, List_1_StressTester_StressTestPoint___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_StressTester_StressTestPoint_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047389B0, List_1_StressTester_StressTestPoint__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_StressTester_StressTestPoint_ * this_ptr, app::StressTester_StressTestPoint* item))
    IL2CPP_REGISTER_METHODINFO(0x04729070, List_1_StressTester_StressTestPoint__Add__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_StressTester_StressTestPoint_
