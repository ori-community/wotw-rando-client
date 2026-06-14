#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Dictionary_2_Moon_CrossSceneReferenceId_System_Object_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_Moon_CrossSceneReferenceId_System_Object___Boxed.h>
#include <Modloader/app/structs/KeyValuePair_2_Moon_CrossSceneReferenceId_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_Moon_CrossSceneReferenceId_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x00133F40,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_Enumerator_Moon_CrossSceneReferenceId_System_Object___Boxed* this_ptr,
        app::Dictionary_2_Moon_CrossSceneReferenceId_System_Object_* dictionary,
        int32_t get_enumerator_ret_type
    )
    IL2CPP_REGISTER_METHOD(0x00134700, bool, MoveNext, app::Dictionary_2_TKey_TValue_Enumerator_Moon_CrossSceneReferenceId_System_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00133F90,
        app::KeyValuePair_2_Moon_CrossSceneReferenceId_System_Object_,
        get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_Moon_CrossSceneReferenceId_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::Dictionary_2_TKey_TValue_Enumerator_Moon_CrossSceneReferenceId_System_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00134710,
        app::Object*,
        IEnumerator_get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_Moon_CrossSceneReferenceId_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00134720,
        void,
        IEnumerator_Reset,
        app::Dictionary_2_TKey_TValue_Enumerator_Moon_CrossSceneReferenceId_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00134800,
        app::DictionaryEntry,
        IDictionaryEnumerator_get_Entry,
        app::Dictionary_2_TKey_TValue_Enumerator_Moon_CrossSceneReferenceId_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00134980,
        app::Object*,
        IDictionaryEnumerator_get_Key,
        app::Dictionary_2_TKey_TValue_Enumerator_Moon_CrossSceneReferenceId_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00134AC0,
        app::Object*,
        IDictionaryEnumerator_get_Value,
        app::Dictionary_2_TKey_TValue_Enumerator_Moon_CrossSceneReferenceId_System_Object___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_Moon_CrossSceneReferenceId_System_Object_
