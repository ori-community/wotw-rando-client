#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Dictionary_2_Swing_Int2_Moon_Rendering_SrpSampler_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollectio_TKe_TValu_Enumerato_Swin_Int_Moo_Renderin_SrpSample_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_Swing_Int2_Moon_Rendering_SrpSampler_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_Swing_Int2_.h>
#include <Modloader/app/structs/Int2.h>
#include <Modloader/app/structs/Int2__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_Swing_Int2_Moon_Rendering_SrpSampler_ {
    IL2CPP_REGISTER_METHOD(
        0x01D52BA0,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_KeyCollection_Swing_Int2_Moon_Rendering_SrpSampler_* this_ptr,
        app::Dictionary_2_Swing_Int2_Moon_Rendering_SrpSampler_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x01A729A0,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_Swing_Int2_Moon_Rendering_SrpSampler_,
        GetEnumerator,
        app::Dictionary_2_TKey_TValue_KeyCollection_Swing_Int2_Moon_Rendering_SrpSampler_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01D52C70,
        void,
        CopyTo,
        app::Dictionary_2_TKey_TValue_KeyCollection_Swing_Int2_Moon_Rendering_SrpSampler_* this_ptr,
        app::Int2__Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x01A72C10, int32_t, get_Count, app::Dictionary_2_TKey_TValue_KeyCollection_Swing_Int2_Moon_Rendering_SrpSampler_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_TKey__get_IsReadOnly,
        app::Dictionary_2_TKey_TValue_KeyCollection_Swing_Int2_Moon_Rendering_SrpSampler_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01D52EA0,
        void,
        System_Collections_Generic_ICollection_TKey__Add,
        app::Dictionary_2_TKey_TValue_KeyCollection_Swing_Int2_Moon_Rendering_SrpSampler_* this_ptr,
        app::Int2 item
    )
    IL2CPP_REGISTER_METHOD(
        0x01D52F00,
        void,
        System_Collections_Generic_ICollection_TKey__Clear,
        app::Dictionary_2_TKey_TValue_KeyCollection_Swing_Int2_Moon_Rendering_SrpSampler_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A72D00,
        bool,
        System_Collections_Generic_ICollection_TKey__Contains,
        app::Dictionary_2_TKey_TValue_KeyCollection_Swing_Int2_Moon_Rendering_SrpSampler_* this_ptr,
        app::Int2 item
    )
    IL2CPP_REGISTER_METHOD(
        0x01D52F60,
        bool,
        System_Collections_Generic_ICollection_TKey__Remove,
        app::Dictionary_2_TKey_TValue_KeyCollection_Swing_Int2_Moon_Rendering_SrpSampler_* this_ptr,
        app::Int2 item
    )
    IL2CPP_REGISTER_METHOD(
        0x01A72D90,
        app::IEnumerator_1_Swing_Int2_*,
        System_Collections_Generic_IEnumerable_TKey__GetEnumerator,
        app::Dictionary_2_TKey_TValue_KeyCollection_Swing_Int2_Moon_Rendering_SrpSampler_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A72D90,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::Dictionary_2_TKey_TValue_KeyCollection_Swing_Int2_Moon_Rendering_SrpSampler_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01D52FC0,
        void,
        ICollection_CopyTo,
        app::Dictionary_2_TKey_TValue_KeyCollection_Swing_Int2_Moon_Rendering_SrpSampler_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        ICollection_get_IsSynchronized,
        app::Dictionary_2_TKey_TValue_KeyCollection_Swing_Int2_Moon_Rendering_SrpSampler_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01D53410,
        app::Object*,
        ICollection_get_SyncRoot,
        app::Dictionary_2_TKey_TValue_KeyCollection_Swing_Int2_Moon_Rendering_SrpSampler_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_Swing_Int2_Moon_Rendering_SrpSampler_
