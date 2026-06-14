#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Data.h>
#include <Modloader/app/structs/List_1_Microsoft_Applications_Events_DataModels_Data_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Microsoft_Applications_Events_DataModels_Data_.h>

namespace app::classes::System::Collections::Generic::List_1_Microsoft_Applications_Events_DataModels_Data_ {
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_Microsoft_Applications_Events_DataModels_Data_,
        GetEnumerator,
        app::List_1_Microsoft_Applications_Events_DataModels_Data_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_Microsoft_Applications_Events_DataModels_Data_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_Microsoft_Applications_Events_DataModels_Data_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_Microsoft_Applications_Events_DataModels_Data_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_Microsoft_Applications_Events_DataModels_Data_* this_ptr, app::Data* item)
} // namespace app::classes::System::Collections::Generic::List_1_Microsoft_Applications_Events_DataModels_Data_
