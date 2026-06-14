#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_NearbySceneData_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Object_NearbySceneData___Boxed.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_NearbySceneData_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Object_NearbySceneData_ {
    IL2CPP_REGISTER_METHOD(
        0x00133F40,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_NearbySceneData___Boxed* this_ptr,
        app::Dictionary_2_System_Object_NearbySceneData_* dictionary,
        int32_t get_enumerator_ret_type
    )
    IL2CPP_REGISTER_METHOD(0x001BAE80, bool, MoveNext, app::Dictionary_2_TKey_TValue_Enumerator_System_Object_NearbySceneData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00133F90,
        app::KeyValuePair_2_System_Object_NearbySceneData_,
        get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_NearbySceneData___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::Dictionary_2_TKey_TValue_Enumerator_System_Object_NearbySceneData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001BAE90,
        app::Object*,
        IEnumerator_get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_NearbySceneData___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x001BAEA0, void, IEnumerator_Reset, app::Dictionary_2_TKey_TValue_Enumerator_System_Object_NearbySceneData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001BAF80,
        app::DictionaryEntry,
        IDictionaryEnumerator_get_Entry,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_NearbySceneData___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001BB110,
        app::Object*,
        IDictionaryEnumerator_get_Key,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_NearbySceneData___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001BB200,
        app::Object*,
        IDictionaryEnumerator_get_Value,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_NearbySceneData___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Object_NearbySceneData_
