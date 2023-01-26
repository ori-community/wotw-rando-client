#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Data_DataTable_.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/DataTable__Array.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Data_DataTable_.h>

namespace app::classes::System::Collections::Generic::List_1_System_Data_DataTable_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_System_Data_DataTable_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_Data_DataTable_ * this_ptr, app::DataTable* item))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::DataTable*, get_Item, (app::List_1_System_Data_DataTable_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_System_Data_DataTable_ * this_ptr, app::DataTable* item))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_System_Data_DataTable_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::DataTable__Array*, ToArray, (app::List_1_System_Data_DataTable_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_System_Data_DataTable_, GetEnumerator, (app::List_1_System_Data_DataTable_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, (app::List_1_System_Data_DataTable_ * this_ptr, int32_t capacity))
} // namespace app::classes::System::Collections::Generic::List_1_System_Data_DataTable_
