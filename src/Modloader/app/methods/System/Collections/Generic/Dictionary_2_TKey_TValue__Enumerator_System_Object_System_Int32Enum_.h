#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_System_Int32Enum_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum___Boxed.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Int32Enum_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Object_System_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(
        0x001363F0,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum___Boxed* this_ptr,
        app::Dictionary_2_System_Object_System_Int32Enum_* dictionary,
        int32_t get_enumerator_ret_type
    )
    IL2CPP_REGISTER_METHOD(0x001BD000, bool, MoveNext, app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00136440,
        app::KeyValuePair_2_System_Object_System_Int32Enum_,
        get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001BD010,
        app::Object*,
        IEnumerator_get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x001BD020, void, IEnumerator_Reset, app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001BD0F0,
        app::DictionaryEntry,
        IDictionaryEnumerator_get_Entry,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001BD120,
        app::Object*,
        IDictionaryEnumerator_get_Key,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001BD210,
        app::Object*,
        IDictionaryEnumerator_get_Value,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Object_System_Int32Enum_
