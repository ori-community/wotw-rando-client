#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_System_Resources_ResourceLocator_.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TVal_ValueCollecti_TK_TVal_Enumerat_Syst_Obje_Syst_Resourc_ResourceLocat_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Resources_ResourceLocator_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Resources_ResourceLocator_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ResourceLocator.h>
#include <Modloader/app/structs/ResourceLocator__Array.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Object_System_Resources_ResourceLocator_ {
    IL2CPP_REGISTER_METHOD(
        0x026C0880,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Resources_ResourceLocator_* this_ptr,
        app::Dictionary_2_System_Object_System_Resources_ResourceLocator_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x01A7A830,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Resources_ResourceLocator_,
        GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Resources_ResourceLocator_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x026C0950,
        void,
        CopyTo,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Resources_ResourceLocator_* this_ptr,
        app::ResourceLocator__Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x01A72C10,
        int32_t,
        get_Count,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Resources_ResourceLocator_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_TValue__get_IsReadOnly,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Resources_ResourceLocator_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x026C0B80,
        void,
        System_Collections_Generic_ICollection_TValue__Add,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Resources_ResourceLocator_* this_ptr,
        app::ResourceLocator item
    )
    IL2CPP_REGISTER_METHOD(
        0x026C0BE0,
        bool,
        System_Collections_Generic_ICollection_TValue__Remove,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Resources_ResourceLocator_* this_ptr,
        app::ResourceLocator item
    )
    IL2CPP_REGISTER_METHOD(
        0x026C0C40,
        void,
        System_Collections_Generic_ICollection_TValue__Clear,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Resources_ResourceLocator_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A7AB60,
        bool,
        System_Collections_Generic_ICollection_TValue__Contains,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Resources_ResourceLocator_* this_ptr,
        app::ResourceLocator item
    )
    IL2CPP_REGISTER_METHOD(
        0x01A7AC00,
        app::IEnumerator_1_System_Resources_ResourceLocator_*,
        System_Collections_Generic_IEnumerable_TValue__GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Resources_ResourceLocator_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A7AC00,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Resources_ResourceLocator_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x026C0CA0,
        void,
        ICollection_CopyTo,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Resources_ResourceLocator_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        ICollection_get_IsSynchronized,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Resources_ResourceLocator_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x026C10E0,
        app::Object*,
        ICollection_get_SyncRoot,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Resources_ResourceLocator_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Object_System_Resources_ResourceLocator_
