#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Data_DataTable_.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/Dictionary_2_System_Data_DataTable_List_1_System_Data_DataTable_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Data_DataTable_List_1_System_Data_DataTable__ {
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::List_1_System_Data_DataTable_*, get_Item, (app::Dictionary_2_System_Data_DataTable_List_1_System_Data_DataTable_ * this_ptr, app::DataTable* key))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Data_DataTable_List_1_System_Data_DataTable_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Data_DataTable_List_1_System_Data_DataTable_ * this_ptr, app::DataTable* key))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Data_DataTable_List_1_System_Data_DataTable_ * this_ptr, app::DataTable* key, app::List_1_System_Data_DataTable_* value))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Data_DataTable_List_1_System_Data_DataTable__
