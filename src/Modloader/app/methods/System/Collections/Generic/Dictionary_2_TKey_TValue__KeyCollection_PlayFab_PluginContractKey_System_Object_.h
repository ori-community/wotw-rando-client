#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Dictionary_2_PlayFab_PluginContractKey_System_Object_.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_KeyCollectio_TKe_TValu_Enumerato_PlayFa_PluginContractKe_Syst_Obje_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_PlayFab_PluginContractKey_System_Object_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_PlayFab_PluginContractKey_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PluginContractKey.h>
#include <Modloader/app/structs/PluginContractKey__Array.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_PlayFab_PluginContractKey_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x01D522B0,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_KeyCollection_PlayFab_PluginContractKey_System_Object_* this_ptr,
        app::Dictionary_2_PlayFab_PluginContractKey_System_Object_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x01A7A830,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_PlayFab_PluginContractKey_System_Object_,
        GetEnumerator,
        app::Dictionary_2_TKey_TValue_KeyCollection_PlayFab_PluginContractKey_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01D52380,
        void,
        CopyTo,
        app::Dictionary_2_TKey_TValue_KeyCollection_PlayFab_PluginContractKey_System_Object_* this_ptr,
        app::PluginContractKey__Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x01A72C10, int32_t, get_Count, app::Dictionary_2_TKey_TValue_KeyCollection_PlayFab_PluginContractKey_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_TKey__get_IsReadOnly,
        app::Dictionary_2_TKey_TValue_KeyCollection_PlayFab_PluginContractKey_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01D525B0,
        void,
        System_Collections_Generic_ICollection_TKey__Add,
        app::Dictionary_2_TKey_TValue_KeyCollection_PlayFab_PluginContractKey_System_Object_* this_ptr,
        app::PluginContractKey item
    )
    IL2CPP_REGISTER_METHOD(
        0x01D52610,
        void,
        System_Collections_Generic_ICollection_TKey__Clear,
        app::Dictionary_2_TKey_TValue_KeyCollection_PlayFab_PluginContractKey_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A7AB60,
        bool,
        System_Collections_Generic_ICollection_TKey__Contains,
        app::Dictionary_2_TKey_TValue_KeyCollection_PlayFab_PluginContractKey_System_Object_* this_ptr,
        app::PluginContractKey item
    )
    IL2CPP_REGISTER_METHOD(
        0x01D52670,
        bool,
        System_Collections_Generic_ICollection_TKey__Remove,
        app::Dictionary_2_TKey_TValue_KeyCollection_PlayFab_PluginContractKey_System_Object_* this_ptr,
        app::PluginContractKey item
    )
    IL2CPP_REGISTER_METHOD(
        0x01A7AC00,
        app::IEnumerator_1_PlayFab_PluginContractKey_*,
        System_Collections_Generic_IEnumerable_TKey__GetEnumerator,
        app::Dictionary_2_TKey_TValue_KeyCollection_PlayFab_PluginContractKey_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A7AC00,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::Dictionary_2_TKey_TValue_KeyCollection_PlayFab_PluginContractKey_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01D526D0,
        void,
        ICollection_CopyTo,
        app::Dictionary_2_TKey_TValue_KeyCollection_PlayFab_PluginContractKey_System_Object_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        ICollection_get_IsSynchronized,
        app::Dictionary_2_TKey_TValue_KeyCollection_PlayFab_PluginContractKey_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01D52B10,
        app::Object*,
        ICollection_get_SyncRoot,
        app::Dictionary_2_TKey_TValue_KeyCollection_PlayFab_PluginContractKey_System_Object_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_PlayFab_PluginContractKey_System_Object_
