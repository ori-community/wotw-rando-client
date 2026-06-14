#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Microsoft_Applications_Events_DataModels_Device_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Microsoft_Applications_Events_DataModels_Device_.h>

namespace app::classes::System::Collections::Generic::List_1_Microsoft_Applications_Events_DataModels_Device_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_Microsoft_Applications_Events_DataModels_Device_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_Microsoft_Applications_Events_DataModels_Device_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_Microsoft_Applications_Events_DataModels_Device_,
        GetEnumerator,
        app::List_1_Microsoft_Applications_Events_DataModels_Device_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::List_1_Microsoft_Applications_Events_DataModels_Device_
