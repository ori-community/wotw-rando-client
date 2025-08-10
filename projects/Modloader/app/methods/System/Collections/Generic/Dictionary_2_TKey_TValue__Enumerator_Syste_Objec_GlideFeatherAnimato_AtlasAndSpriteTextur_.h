#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_GlideFeatherAnimator_AtlasAndSpriteTexture_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Object_GlideFeatherAnimator_AtlasAndSpriteTexture___Boxed.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_GlideFeatherAnimator_AtlasAndSpriteTexture_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Object_GlideFeatherAnimator_AtlasAndSpriteTexture_ {
    IL2CPP_REGISTER_METHOD(
        0x00133A30,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_GlideFeatherAnimator_AtlasAndSpriteTexture___Boxed* this_ptr,
        app::Dictionary_2_System_Object_GlideFeatherAnimator_AtlasAndSpriteTexture_* dictionary,
        int32_t get_enumerator_ret_type
    )
    IL2CPP_REGISTER_METHOD(
        0x001BA020,
        bool,
        MoveNext,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_GlideFeatherAnimator_AtlasAndSpriteTexture___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00133A80,
        app::KeyValuePair_2_System_Object_GlideFeatherAnimator_AtlasAndSpriteTexture_,
        get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_GlideFeatherAnimator_AtlasAndSpriteTexture___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00002890,
        void,
        Dispose,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_GlideFeatherAnimator_AtlasAndSpriteTexture___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001BA030,
        app::Object*,
        IEnumerator_get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_GlideFeatherAnimator_AtlasAndSpriteTexture___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001BA040,
        void,
        IEnumerator_Reset,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_GlideFeatherAnimator_AtlasAndSpriteTexture___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001BA120,
        app::DictionaryEntry,
        IDictionaryEnumerator_get_Entry,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_GlideFeatherAnimator_AtlasAndSpriteTexture___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001BA2B0,
        app::Object*,
        IDictionaryEnumerator_get_Key,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_GlideFeatherAnimator_AtlasAndSpriteTexture___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001BA3A0,
        app::Object*,
        IDictionaryEnumerator_get_Value,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_GlideFeatherAnimator_AtlasAndSpriteTexture___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Object_GlideFeatherAnimator_AtlasAndSpriteTexture_
