#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_.h>
#include <Modloader/app/structs/Dictionary_2_TK_TVa_ValueCollect_Sys_Obj_ZenFulc_EmbeddedBrow_StandaloneWebResour_IndexEn_.h>
#include <Modloader/app/structs/Dictionary_2_TK_TVal_Enumerat_Syst_Obje_ZenFulcr_EmbeddedBrow_StandaloneWebResour_IndexEn_.h>
#include <Modloader/app/structs/Dictionary_2_TK_TVal_KeyCollecti_Sys_Obj_ZenFulc_EmbeddedBrow_StandaloneWebResour_IndexEn_.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/ICollection_1_System_Object_.h>
#include <Modloader/app/structs/ICollection_1_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#include <Modloader/app/structs/IDictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePa_2_Syst_Obje_ZenFulcr_EmbeddedBrows_StandaloneWebResourc_IndexEnt_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_Object_.h>
#include <Modloader/app/structs/InsertionBehavior__Enum.h>
#include <Modloader/app/structs/KeyValuePair_2_Syste_Objec_ZenFulcru_EmbeddedBrowse_StandaloneWebResource_IndexEntr___Arra.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StandaloneWebResources_IndexEntry.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02259DF0,
        void,
        ctor_2,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        int32_t capacity
    )
    IL2CPP_REGISTER_METHOD(
        0x0283AC50,
        void,
        ctor_3,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::IEqualityComparer_1_System_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02EF8930,
        void,
        ctor_4,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        int32_t capacity,
        app::IEqualityComparer_1_System_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x0283ADC0,
        void,
        ctor_5,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::IDictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x02EF8A70,
        void,
        ctor_6,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::IDictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* dictionary,
        app::IEqualityComparer_1_System_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02EF8E60,
        void,
        ctor_7,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(
        0x002FB990,
        app::IEqualityComparer_1_System_Object_*,
        get_Comparer,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B2A0,
        int32_t,
        get_Count,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_*,
        get_Keys,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::ICollection_1_System_Object_*,
        System_Collections_Generic_IDictionary_TKey_TValue__get_Keys,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::IEnumerable_1_System_Object_*,
        System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_*,
        get_Values,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::ICollection_1_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_*,
        System_Collections_Generic_IDictionary_TKey_TValue__get_Values,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::IEnumerable_1_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_*,
        System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02EF8F30,
        app::StandaloneWebResources_IndexEntry,
        get_Item,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::Object* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02DB6430,
        void,
        set_Item,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::Object* key,
        app::StandaloneWebResources_IndexEntry value
    )
    IL2CPP_REGISTER_METHOD(
        0x02DB6480,
        void,
        Add,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::Object* key,
        app::StandaloneWebResources_IndexEntry value
    )
    IL2CPP_REGISTER_METHOD(
        0x02DD95C0,
        void,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::KeyValuePair_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_ key_value_pair
    )
    IL2CPP_REGISTER_METHOD(
        0x02DD9610,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::KeyValuePair_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_ key_value_pair
    )
    IL2CPP_REGISTER_METHOD(
        0x02DD9730,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::KeyValuePair_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_ key_value_pair
    )
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BA5090,
        bool,
        ContainsKey,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::Object* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02DB6780,
        bool,
        ContainsValue,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::StandaloneWebResources_IndexEntry value
    )
    IL2CPP_REGISTER_METHOD(
        0x02EF9060,
        void,
        CopyTo,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::KeyValuePair_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x0283F7F0,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_,
        GetEnumerator,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283F850,
        app::IEnumerator_1_KeyValuePair_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_*,
        System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02EF92B0,
        void,
        GetObjectData,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(
        0x02EF94F0,
        int32_t,
        FindEntry,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::Object* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02EF9760,
        void,
        Initialize,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        int32_t capacity
    )
    IL2CPP_REGISTER_METHOD(
        0x02EF98C0,
        bool,
        TryInsert,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::Object* key,
        app::StandaloneWebResources_IndexEntry value,
        app::InsertionBehavior__Enum behavior
    )
    IL2CPP_REGISTER_METHOD(
        0x02EF9F90,
        void,
        OnDeserialization,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::Object* sender
    )
    IL2CPP_REGISTER_METHOD(0x02EFA3E0, void, Resize_1, app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02EFA4B0,
        void,
        Resize_2,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        int32_t new_size,
        bool force_new_hash_codes
    )
    IL2CPP_REGISTER_METHOD(
        0x02EFA780,
        bool,
        Remove,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::Object* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02DB8340,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::Object* key,
        app::StandaloneWebResources_IndexEntry* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02DB83E0,
        bool,
        TryAdd,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::Object* key,
        app::StandaloneWebResources_IndexEntry value
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283D900,
        void,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::KeyValuePair_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02EFABC0,
        void,
        ICollection_CopyTo,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x0283F850,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        ICollection_get_IsSynchronized,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02EFB150,
        app::Object*,
        ICollection_get_SyncRoot,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IDictionary_get_IsFixedSize,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IDictionary_get_IsReadOnly,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283E020,
        app::ICollection*,
        IDictionary_get_Keys,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283E050,
        app::ICollection*,
        IDictionary_get_Values,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02DDBAC0,
        app::Object*,
        IDictionary_get_Item,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::Object* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02EFB2B0,
        void,
        IDictionary_set_Item,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::Object* key,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02EFB5B0, bool, IsCompatibleKey, app::Object* key)
    IL2CPP_REGISTER_METHOD(
        0x02EFB6B0,
        void,
        IDictionary_Add,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::Object* key,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BC1F30,
        bool,
        IDictionary_Contains,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::Object* key
    )
    IL2CPP_REGISTER_METHOD(
        0x028423A0,
        app::IDictionaryEnumerator*,
        IDictionary_GetEnumerator,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BC2000,
        void,
        IDictionary_Remove,
        app::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::Object* key
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_
