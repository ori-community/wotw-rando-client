#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_String_List_1_System_String_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_List_1_System_String_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_List_1_System_String__ {
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_System_String_List_1_System_String_, GetEnumerator, (app::Dictionary_2_System_String_List_1_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_String_List_1_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_String_List_1_System_String_ * this_ptr, app::String* key, app::List_1_System_String_* value))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_List_1_System_String__
