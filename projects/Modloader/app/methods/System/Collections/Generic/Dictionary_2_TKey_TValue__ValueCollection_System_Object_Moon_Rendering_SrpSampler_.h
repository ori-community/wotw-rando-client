#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_Moon_Rendering_SrpSampler_.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_ValueCollectio_TKe_TValu_Enumerato_Syste_Objec_Mo_Renderi_SrpSampl_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_Rendering_SrpSampler_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_Moon_Rendering_SrpSampler_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SrpSampler.h>
#include <Modloader/app/structs/SrpSampler__Array.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Object_Moon_Rendering_SrpSampler_ {
    IL2CPP_REGISTER_METHOD(
        0x026BA5A0,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_Rendering_SrpSampler_* this_ptr,
        app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x01ADB1F0,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_Moon_Rendering_SrpSampler_,
        GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_Rendering_SrpSampler_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x026BA670,
        void,
        CopyTo,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_Rendering_SrpSampler_* this_ptr,
        app::SrpSampler__Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x01A72C10, int32_t, get_Count, app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_Rendering_SrpSampler_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_TValue__get_IsReadOnly,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_Rendering_SrpSampler_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x026BA8B0,
        void,
        System_Collections_Generic_ICollection_TValue__Add,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_Rendering_SrpSampler_* this_ptr,
        app::SrpSampler item
    )
    IL2CPP_REGISTER_METHOD(
        0x026BA910,
        bool,
        System_Collections_Generic_ICollection_TValue__Remove,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_Rendering_SrpSampler_* this_ptr,
        app::SrpSampler item
    )
    IL2CPP_REGISTER_METHOD(
        0x026BA970,
        void,
        System_Collections_Generic_ICollection_TValue__Clear,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_Rendering_SrpSampler_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01ADB5B0,
        bool,
        System_Collections_Generic_ICollection_TValue__Contains,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_Rendering_SrpSampler_* this_ptr,
        app::SrpSampler item
    )
    IL2CPP_REGISTER_METHOD(
        0x01ADB600,
        app::IEnumerator_1_Moon_Rendering_SrpSampler_*,
        System_Collections_Generic_IEnumerable_TValue__GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_Rendering_SrpSampler_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01ADB600,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_Rendering_SrpSampler_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x026BA9D0,
        void,
        ICollection_CopyTo,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_Rendering_SrpSampler_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        ICollection_get_IsSynchronized,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_Rendering_SrpSampler_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x026BAE40,
        app::Object*,
        ICollection_get_SyncRoot,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_Rendering_SrpSampler_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Object_Moon_Rendering_SrpSampler_
