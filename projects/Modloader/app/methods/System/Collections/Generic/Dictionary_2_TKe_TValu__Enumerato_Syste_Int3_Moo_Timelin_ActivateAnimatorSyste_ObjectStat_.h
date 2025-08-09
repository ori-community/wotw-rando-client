#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState___Boxed.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ {
    IL2CPP_REGISTER_METHOD(
        0x00133F40,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState___Boxed* this_ptr,
        app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_* dictionary,
        int32_t get_enumerator_ret_type
    )
    IL2CPP_REGISTER_METHOD(
        0x00137990,
        bool,
        MoveNext,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00133F90,
        app::KeyValuePair_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_,
        get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00002890,
        void,
        Dispose,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001379A0,
        app::Object*,
        IEnumerator_get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001379B0,
        void,
        IEnumerator_Reset,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00137A90,
        app::DictionaryEntry,
        IDictionaryEnumerator_get_Entry,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00137AC0,
        app::Object*,
        IDictionaryEnumerator_get_Key,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00137C00,
        app::Object*,
        IDictionaryEnumerator_get_Value,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_
