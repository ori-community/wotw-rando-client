#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_System_Data_DataColumn_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::DataColumn*, get_Item, (app::List_1_System_Data_DataColumn_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0473FD08, List_1_System_Data_DataColumn__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_System_Data_DataColumn_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04707F98, List_1_System_Data_DataColumn__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_Data_DataColumn_ * this_ptr, app::DataColumn* item))
    IL2CPP_REGISTER_METHODINFO(0x047092C8, List_1_System_Data_DataColumn__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_System_Data_DataColumn_ * this_ptr, app::DataColumn* item))
    IL2CPP_REGISTER_METHODINFO(0x0475DAB8, List_1_System_Data_DataColumn__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_System_Data_DataColumn_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04713B60, List_1_System_Data_DataColumn___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_System_Data_DataColumn_ * this_ptr, app::DataColumn* item))
    IL2CPP_REGISTER_METHODINFO(0x0475E318, List_1_System_Data_DataColumn__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::DataColumn__Array*, ToArray, (app::List_1_System_Data_DataColumn_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04732318, List_1_System_Data_DataColumn__ToArray__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_System_Data_DataColumn_, GetEnumerator, (app::List_1_System_Data_DataColumn_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477B0D0, List_1_System_Data_DataColumn__GetEnumerator__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_System_Data_DataColumn_
