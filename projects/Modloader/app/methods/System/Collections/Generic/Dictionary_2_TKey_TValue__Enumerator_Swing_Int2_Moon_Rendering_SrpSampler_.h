#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Dictionary_2_Swing_Int2_Moon_Rendering_SrpSampler_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_Swing_Int2_Moon_Rendering_SrpSampler___Boxed.h>
#include <Modloader/app/structs/KeyValuePair_2_Swing_Int2_Moon_Rendering_SrpSampler_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_Swing_Int2_Moon_Rendering_SrpSampler_ {
    IL2CPP_REGISTER_METHOD(
        0x00135060,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_Enumerator_Swing_Int2_Moon_Rendering_SrpSampler___Boxed* this_ptr,
        app::Dictionary_2_Swing_Int2_Moon_Rendering_SrpSampler_* dictionary,
        int32_t get_enumerator_ret_type
    )
    IL2CPP_REGISTER_METHOD(0x001350B0, bool, MoveNext, app::Dictionary_2_TKey_TValue_Enumerator_Swing_Int2_Moon_Rendering_SrpSampler___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001350C0,
        app::KeyValuePair_2_Swing_Int2_Moon_Rendering_SrpSampler_,
        get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_Swing_Int2_Moon_Rendering_SrpSampler___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::Dictionary_2_TKey_TValue_Enumerator_Swing_Int2_Moon_Rendering_SrpSampler___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001350E0,
        app::Object*,
        IEnumerator_get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_Swing_Int2_Moon_Rendering_SrpSampler___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x001350F0, void, IEnumerator_Reset, app::Dictionary_2_TKey_TValue_Enumerator_Swing_Int2_Moon_Rendering_SrpSampler___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001351D0,
        app::DictionaryEntry,
        IDictionaryEnumerator_get_Entry,
        app::Dictionary_2_TKey_TValue_Enumerator_Swing_Int2_Moon_Rendering_SrpSampler___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00135200,
        app::Object*,
        IDictionaryEnumerator_get_Key,
        app::Dictionary_2_TKey_TValue_Enumerator_Swing_Int2_Moon_Rendering_SrpSampler___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00135340,
        app::Object*,
        IDictionaryEnumerator_get_Value,
        app::Dictionary_2_TKey_TValue_Enumerator_Swing_Int2_Moon_Rendering_SrpSampler___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_Swing_Int2_Moon_Rendering_SrpSampler_
