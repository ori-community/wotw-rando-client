#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_System_Data_Index_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_String_System_Data_Index_.h>
#include <Modloader/app/structs/Index.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Data_Index_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_String_System_Data_Index_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, app::Dictionary_2_System_String_System_Data_Index_* this_ptr, app::String* key, app::Index** value)
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, app::Dictionary_2_System_String_System_Data_Index_* this_ptr, app::String* key)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, app::Dictionary_2_System_String_System_Data_Index_* this_ptr, app::String* key, app::Index* value)
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_System_String_System_Data_Index_,
        GetEnumerator,
        app::Dictionary_2_System_String_System_Data_Index_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Data_Index_
