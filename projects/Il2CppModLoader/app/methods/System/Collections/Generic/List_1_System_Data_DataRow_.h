#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_System_Data_DataRow_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_System_Data_DataRow_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477A410, List_1_System_Data_DataRow___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_System_Data_DataRow_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04790B60, List_1_System_Data_DataRow__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE94A0, void, InsertRange, (app::List_1_System_Data_DataRow_ * this_ptr, int32_t index, app::IEnumerable_1_System_Data_DataRow_ * collection))
    IL2CPP_REGISTER_METHODINFO(0x0473D750, List_1_System_Data_DataRow__InsertRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_System_Data_DataRow_, GetEnumerator, (app::List_1_System_Data_DataRow_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477B9F8, List_1_System_Data_DataRow__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_System_Data_DataRow_ * this_ptr, app::DataRow * item))
    IL2CPP_REGISTER_METHODINFO(0x04765BC8, List_1_System_Data_DataRow__Contains__MethodInfo)
}
