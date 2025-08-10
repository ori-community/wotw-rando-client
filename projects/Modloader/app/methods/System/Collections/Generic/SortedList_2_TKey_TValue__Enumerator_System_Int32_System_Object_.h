#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SortedList_2_System_Int32_System_Object_.h>
#include <Modloader/app/structs/SortedList_2_TKey_TValue_Enumerator_System_Int32_System_Object___Boxed.h>

namespace app::classes::System::Collections::Generic::SortedList_2_TKey_TValue__Enumerator_System_Int32_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x0022B5F0,
        void,
        ctor,
        app::SortedList_2_TKey_TValue_Enumerator_System_Int32_System_Object___Boxed* this_ptr,
        app::SortedList_2_System_Int32_System_Object_* sorted_list,
        int32_t get_enumerator_ret_type
    )
    IL2CPP_REGISTER_METHOD(0x0022B630, void, Dispose, app::SortedList_2_TKey_TValue_Enumerator_System_Int32_System_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0022B650,
        app::Object*,
        IDictionaryEnumerator_get_Key,
        app::SortedList_2_TKey_TValue_Enumerator_System_Int32_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0022B7D0, bool, MoveNext, app::SortedList_2_TKey_TValue_Enumerator_System_Int32_System_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0022B7E0,
        app::DictionaryEntry,
        IDictionaryEnumerator_get_Entry,
        app::SortedList_2_TKey_TValue_Enumerator_System_Int32_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0022B810,
        app::KeyValuePair_2_System_Int32_System_Object_,
        get_Current,
        app::SortedList_2_TKey_TValue_Enumerator_System_Int32_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0022B870,
        app::Object*,
        IEnumerator_get_Current,
        app::SortedList_2_TKey_TValue_Enumerator_System_Int32_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0022B880,
        app::Object*,
        IDictionaryEnumerator_get_Value,
        app::SortedList_2_TKey_TValue_Enumerator_System_Int32_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0022B9B0, void, IEnumerator_Reset, app::SortedList_2_TKey_TValue_Enumerator_System_Int32_System_Object___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::SortedList_2_TKey_TValue__Enumerator_System_Int32_System_Object_
