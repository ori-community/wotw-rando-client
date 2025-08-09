#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IComparer_1_System_String_.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_String_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SortedList_2_System_String_System_Object_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::SortedList_2_System_String_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::IComparer_1_System_String_*, get_Comparer, app::SortedList_2_System_String_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02CB1EC0,
        app::IEnumerator_1_KeyValuePair_2_System_String_System_Object_*,
        GetEnumerator,
        app::SortedList_2_System_String_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02CAE670, void, ctor, app::SortedList_2_System_String_System_Object_* this_ptr, app::IComparer_1_System_String_* comparer)
    IL2CPP_REGISTER_METHOD(0x02CF14B0, void, set_Item, app::SortedList_2_System_String_System_Object_* this_ptr, app::String* key, app::Object* value)
} // namespace app::classes::System::Collections::Generic::SortedList_2_System_String_System_Object_
