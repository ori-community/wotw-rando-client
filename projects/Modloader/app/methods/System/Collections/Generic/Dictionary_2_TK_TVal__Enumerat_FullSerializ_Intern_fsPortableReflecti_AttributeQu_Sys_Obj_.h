#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Dictionary_2_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Object_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Object___Boxed.h>
#include <Modloader/app/structs/KeyValuePair_2_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::
    Dictionary_2_TKey_TValue__Enumerator_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x00133A30,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_Enumerator_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Object___Boxed* this_ptr,
        app::Dictionary_2_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Object_* dictionary,
        int32_t get_enumerator_ret_type
    )
    IL2CPP_REGISTER_METHOD(
        0x00133A70,
        bool,
        MoveNext,
        app::Dictionary_2_TKey_TValue_Enumerator_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00133A80,
        app::KeyValuePair_2_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Object_,
        get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00002890,
        void,
        Dispose,
        app::Dictionary_2_TKey_TValue_Enumerator_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00133AA0,
        app::Object*,
        IEnumerator_get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00133AB0,
        void,
        IEnumerator_Reset,
        app::Dictionary_2_TKey_TValue_Enumerator_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00133B90,
        app::DictionaryEntry,
        IDictionaryEnumerator_get_Entry,
        app::Dictionary_2_TKey_TValue_Enumerator_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00133D10,
        app::Object*,
        IDictionaryEnumerator_get_Key,
        app::Dictionary_2_TKey_TValue_Enumerator_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00133E50,
        app::Object*,
        IDictionaryEnumerator_get_Value,
        app::Dictionary_2_TKey_TValue_Enumerator_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Object___Boxed* this_ptr
    )
} // namespace
  // app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Object_
