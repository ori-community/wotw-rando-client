#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_TransformRecorderData_Data_.h>
#include <Modloader/app/structs/TransformRecorderData_Data.h>
#include <Modloader/app/structs/List_1_T_Enumerator_TransformRecorderData_Data_.h>

namespace app::classes::System::Collections::Generic::List_1_TransformRecorderData_Data_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_TransformRecorderData_Data_ * this_ptr, app::TransformRecorderData_Data* item))
    IL2CPP_REGISTER_METHODINFO(0x047557E8, List_1_TransformRecorderData_Data__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_TransformRecorderData_Data_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04737060, List_1_TransformRecorderData_Data__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_TransformRecorderData_Data_, GetEnumerator, (app::List_1_TransformRecorderData_Data_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04703560, List_1_TransformRecorderData_Data__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_TransformRecorderData_Data_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04779FB8, List_1_TransformRecorderData_Data__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_TransformRecorderData_Data_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472B370, List_1_TransformRecorderData_Data___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_TransformRecorderData_Data_
