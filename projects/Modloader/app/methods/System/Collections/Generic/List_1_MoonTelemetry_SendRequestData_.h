#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonTelemetry_SendRequestData.h>
#include <Modloader/app/structs/List_1_MoonTelemetry_SendRequestData_.h>

namespace app::classes::System::Collections::Generic::List_1_MoonTelemetry_SendRequestData_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MoonTelemetry_SendRequestData*, get_Item, (app::List_1_MoonTelemetry_SendRequestData_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04778E20, List_1_MoonTelemetry_SendRequestData__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_MoonTelemetry_SendRequestData_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04739CE0, List_1_MoonTelemetry_SendRequestData__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_MoonTelemetry_SendRequestData_ * this_ptr, app::MoonTelemetry_SendRequestData* item))
    IL2CPP_REGISTER_METHODINFO(0x0474D278, List_1_MoonTelemetry_SendRequestData__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_MoonTelemetry_SendRequestData_ * this_ptr, app::MoonTelemetry_SendRequestData* item))
    IL2CPP_REGISTER_METHODINFO(0x04781418, List_1_MoonTelemetry_SendRequestData__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, (app::List_1_MoonTelemetry_SendRequestData_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x047772C0, List_1_MoonTelemetry_SendRequestData___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_MoonTelemetry_SendRequestData_
