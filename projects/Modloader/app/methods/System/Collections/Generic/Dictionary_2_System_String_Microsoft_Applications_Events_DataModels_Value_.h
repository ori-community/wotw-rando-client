#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_Microsoft_Applications_Events_DataModels_Value_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_Syste_Strin_Microsof_Application_Event_DataModel_Valu_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Value.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_Microsoft_Applications_Events_DataModels_Value_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_String_Microsoft_Applications_Events_DataModels_Value_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_System_String_Microsoft_Applications_Events_DataModels_Value_, GetEnumerator, (app::Dictionary_2_System_String_Microsoft_Applications_Events_DataModels_Value_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_String_Microsoft_Applications_Events_DataModels_Value_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_String_Microsoft_Applications_Events_DataModels_Value_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_String_Microsoft_Applications_Events_DataModels_Value_ * this_ptr, app::String* key, app::Value* value))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_Microsoft_Applications_Events_DataModels_Value_
