#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_System_Data_DataTable_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_System_Data_DataTable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471DB80, List_1_System_Data_DataTable___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_Data_DataTable_ * this_ptr, app::DataTable * item))
    IL2CPP_REGISTER_METHODINFO(0x0474A328, List_1_System_Data_DataTable__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::DataTable *, get_Item, (app::List_1_System_Data_DataTable_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04788CA8, List_1_System_Data_DataTable__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_System_Data_DataTable_ * this_ptr, app::DataTable * item))
    IL2CPP_REGISTER_METHODINFO(0x04700BE0, List_1_System_Data_DataTable__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_System_Data_DataTable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04771EB0, List_1_System_Data_DataTable__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::DataTable__Array *, ToArray, (app::List_1_System_Data_DataTable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04702078, List_1_System_Data_DataTable__ToArray__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_System_Data_DataTable_, GetEnumerator, (app::List_1_System_Data_DataTable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04715CE0, List_1_System_Data_DataTable__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, (app::List_1_System_Data_DataTable_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x0475ABB8, List_1_System_Data_DataTable___ctor_1__MethodInfo)
}
