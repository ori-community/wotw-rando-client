#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Data_DataRow_System_Data_DataRowView_.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataRowView.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_Data_DataRow_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Data_DataRow_System_Data_DataRowView_ {
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, ctor_1, (app::Dictionary_2_System_Data_DataRow_System_Data_DataRowView_ * this_ptr, app::IEqualityComparer_1_System_Data_DataRow_* comparer))
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_Data_DataRow_System_Data_DataRowView_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::DataRowView*, get_Item, (app::Dictionary_2_System_Data_DataRow_System_Data_DataRowView_ * this_ptr, app::DataRow* key))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Data_DataRow_System_Data_DataRowView_ * this_ptr, app::DataRow* key, app::DataRowView* value))
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, (app::Dictionary_2_System_Data_DataRow_System_Data_DataRowView_ * this_ptr, app::DataRow* key))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Data_DataRow_System_Data_DataRowView_ * this_ptr, app::DataRow* key, app::DataRowView** value))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Data_DataRow_System_Data_DataRowView_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Data_DataRow_System_Data_DataRowView_ * this_ptr, app::DataRow* key))
    IL2CPP_REGISTER_METHOD(0x02BD1F00, void, ctor_2, (app::Dictionary_2_System_Data_DataRow_System_Data_DataRowView_ * this_ptr, int32_t capacity, app::IEqualityComparer_1_System_Data_DataRow_* comparer))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Data_DataRow_System_Data_DataRowView_
