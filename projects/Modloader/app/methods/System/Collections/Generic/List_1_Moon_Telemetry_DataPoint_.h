#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_Moon_Telemetry_DataPoint_.h>
#include <Modloader/app/structs/DataPoint.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_Telemetry_DataPoint_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_Telemetry_DataPoint_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_Telemetry_DataPoint_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475EB60, List_1_Moon_Telemetry_DataPoint__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_Telemetry_DataPoint_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04753B10, List_1_Moon_Telemetry_DataPoint___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::DataPoint*, get_Item, (app::List_1_Moon_Telemetry_DataPoint_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04726F78, List_1_Moon_Telemetry_DataPoint__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_Telemetry_DataPoint_ * this_ptr, app::DataPoint* item))
    IL2CPP_REGISTER_METHODINFO(0x047162E8, List_1_Moon_Telemetry_DataPoint__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_Moon_Telemetry_DataPoint_ * this_ptr, app::IEnumerable_1_Moon_Telemetry_DataPoint_* collection))
    IL2CPP_REGISTER_METHODINFO(0x04762288, List_1_Moon_Telemetry_DataPoint__AddRange__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_Telemetry_DataPoint_
