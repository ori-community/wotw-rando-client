#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_UberAtlasExclusions_SceneExclusion_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Object_UberAtlasExclusions_SceneExclusion___Boxed.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_UberAtlasExclusions_SceneExclusion_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Object_UberAtlasExclusions_SceneExclusion_ {
    IL2CPP_REGISTER_METHOD(
        0x00133A30,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UberAtlasExclusions_SceneExclusion___Boxed* this_ptr,
        app::Dictionary_2_System_Object_UberAtlasExclusions_SceneExclusion_* dictionary,
        int32_t get_enumerator_ret_type
    )
    IL2CPP_REGISTER_METHOD(
        0x001BED50,
        bool,
        MoveNext,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UberAtlasExclusions_SceneExclusion___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00133A80,
        app::KeyValuePair_2_System_Object_UberAtlasExclusions_SceneExclusion_,
        get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UberAtlasExclusions_SceneExclusion___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00002890,
        void,
        Dispose,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UberAtlasExclusions_SceneExclusion___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001BED60,
        app::Object*,
        IEnumerator_get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UberAtlasExclusions_SceneExclusion___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001BED70,
        void,
        IEnumerator_Reset,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UberAtlasExclusions_SceneExclusion___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001BEE50,
        app::DictionaryEntry,
        IDictionaryEnumerator_get_Entry,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UberAtlasExclusions_SceneExclusion___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001BEFE0,
        app::Object*,
        IDictionaryEnumerator_get_Key,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UberAtlasExclusions_SceneExclusion___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001BF0D0,
        app::Object*,
        IDictionaryEnumerator_get_Value,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UberAtlasExclusions_SceneExclusion___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Object_UberAtlasExclusions_SceneExclusion_
