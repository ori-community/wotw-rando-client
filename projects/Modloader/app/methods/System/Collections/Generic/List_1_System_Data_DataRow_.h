#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/IEnumerable_1_System_Data_DataRow_.h>
#include <Modloader/app/structs/List_1_System_Data_DataRow_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Data_DataRow_.h>

namespace app::classes::System::Collections::Generic::List_1_System_Data_DataRow_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_System_Data_DataRow_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_System_Data_DataRow_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02FE94A0,
        void,
        InsertRange,
        app::List_1_System_Data_DataRow_* this_ptr,
        int32_t index,
        app::IEnumerable_1_System_Data_DataRow_* collection
    )
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_System_Data_DataRow_, GetEnumerator, app::List_1_System_Data_DataRow_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, app::List_1_System_Data_DataRow_* this_ptr, app::DataRow* item)
} // namespace app::classes::System::Collections::Generic::List_1_System_Data_DataRow_
