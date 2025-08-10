#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_Enumerato_M_Interna_Xm_Cach_XPathNodeRe_M_Interna_X_Cac_XPathNodeR_.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_KeyCollectio_M_Interna_Xm_Cac_XPathNodeR_M_Intern_X_Cac_XPathNodeR_.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_ValueCollectio_M_Intern_X_Cac_XPathNodeR_M_Intern_X_Cac_XPathNodeR_.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/ICollection_1_MS_Internal_Xml_Cache_XPathNodeRef_.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#include <Modloader/app/structs/IDictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_.h>
#include <Modloader/app/structs/IEnumerable_1_MS_Internal_Xml_Cache_XPathNodeRef_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_MS_Interna_Xm_Cach_XPathNodeRe_M_Interna_Xm_Cach_XPathNodeRe_.h>
#include <Modloader/app/structs/IEqualityComparer_1_MS_Internal_Xml_Cache_XPathNodeRef_.h>
#include <Modloader/app/structs/InsertionBehavior__Enum.h>
#include <Modloader/app/structs/KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRe___Arra.h>
#include <Modloader/app/structs/KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/XPathNodeRef.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_ {
    IL2CPP_REGISTER_METHOD(
        0x0283B9A0,
        bool,
        ContainsKey,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::XPathNodeRef key
    )
    IL2CPP_REGISTER_METHOD(
        0x0283F070,
        app::XPathNodeRef,
        get_Item,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::XPathNodeRef key
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02259DF0,
        void,
        ctor_2,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        int32_t capacity
    )
    IL2CPP_REGISTER_METHOD(
        0x0283AC50,
        void,
        ctor_3,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::IEqualityComparer_1_MS_Internal_Xml_Cache_XPathNodeRef_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x0283EA80,
        void,
        ctor_4,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        int32_t capacity,
        app::IEqualityComparer_1_MS_Internal_Xml_Cache_XPathNodeRef_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x0283ADC0,
        void,
        ctor_5,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::IDictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x0283EBC0,
        void,
        ctor_6,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::IDictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* dictionary,
        app::IEqualityComparer_1_MS_Internal_Xml_Cache_XPathNodeRef_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x0283EFA0,
        void,
        ctor_7,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(
        0x002FB990,
        app::IEqualityComparer_1_MS_Internal_Xml_Cache_XPathNodeRef_*,
        get_Comparer,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::Dictionary_2_TKey_TValue_KeyCollection_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_*,
        get_Keys,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::ICollection_1_MS_Internal_Xml_Cache_XPathNodeRef_*,
        System_Collections_Generic_IDictionary_TKey_TValue__get_Keys,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::IEnumerable_1_MS_Internal_Xml_Cache_XPathNodeRef_*,
        System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::Dictionary_2_TKey_TValue_ValueCollection_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_*,
        get_Values,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::ICollection_1_MS_Internal_Xml_Cache_XPathNodeRef_*,
        System_Collections_Generic_IDictionary_TKey_TValue__get_Values,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::IEnumerable_1_MS_Internal_Xml_Cache_XPathNodeRef_*,
        System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283F1A0,
        void,
        set_Item,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::XPathNodeRef key,
        app::XPathNodeRef value
    )
    IL2CPP_REGISTER_METHOD(
        0x0283F1F0,
        void,
        Add,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::XPathNodeRef key,
        app::XPathNodeRef value
    )
    IL2CPP_REGISTER_METHOD(
        0x0283F240,
        void,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_ key_value_pair
    )
    IL2CPP_REGISTER_METHOD(
        0x0283F290,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_ key_value_pair
    )
    IL2CPP_REGISTER_METHOD(
        0x0283F390,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_ key_value_pair
    )
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0283F4D0,
        bool,
        ContainsValue,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::XPathNodeRef value
    )
    IL2CPP_REGISTER_METHOD(
        0x0283F5C0,
        void,
        CopyTo,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x0283F7F0,
        app::Dictionary_2_TKey_TValue_Enumerator_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_,
        GetEnumerator,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283F850,
        app::IEnumerator_1_KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_*,
        System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283F920,
        void,
        GetObjectData,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(
        0x0283FB60,
        int32_t,
        FindEntry,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::XPathNodeRef key
    )
    IL2CPP_REGISTER_METHOD(
        0x0283FE10,
        void,
        Initialize,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        int32_t capacity
    )
    IL2CPP_REGISTER_METHOD(
        0x0283FF70,
        bool,
        TryInsert,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::XPathNodeRef key,
        app::XPathNodeRef value,
        app::InsertionBehavior__Enum behavior
    )
    IL2CPP_REGISTER_METHOD(
        0x028406C0,
        void,
        OnDeserialization,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::Object* sender
    )
    IL2CPP_REGISTER_METHOD(0x02840AE0, void, Resize_1, app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02840BB0,
        void,
        Resize_2,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        int32_t new_size,
        bool force_new_hash_codes
    )
    IL2CPP_REGISTER_METHOD(
        0x02840E70,
        bool,
        Remove,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::XPathNodeRef key
    )
    IL2CPP_REGISTER_METHOD(
        0x02841310,
        bool,
        TryGetValue,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::XPathNodeRef key,
        app::XPathNodeRef* value
    )
    IL2CPP_REGISTER_METHOD(
        0x028413B0,
        bool,
        TryAdd,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::XPathNodeRef key,
        app::XPathNodeRef value
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283D900,
        void,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02841400,
        void,
        ICollection_CopyTo,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x0283F850,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        ICollection_get_IsSynchronized,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x028419D0,
        app::Object*,
        ICollection_get_SyncRoot,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IDictionary_get_IsFixedSize,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IDictionary_get_IsReadOnly,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283E020,
        app::ICollection*,
        IDictionary_get_Keys,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283E050,
        app::ICollection*,
        IDictionary_get_Values,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02841B30,
        app::Object*,
        IDictionary_get_Item,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::Object* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02841C80,
        void,
        IDictionary_set_Item,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::Object* key,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02841F90, bool, IsCompatibleKey, app::Object* key)
    IL2CPP_REGISTER_METHOD(
        0x02842090,
        void,
        IDictionary_Add,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::Object* key,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0283E810,
        bool,
        IDictionary_Contains,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::Object* key
    )
    IL2CPP_REGISTER_METHOD(
        0x028423A0,
        app::IDictionaryEnumerator*,
        IDictionary_GetEnumerator,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283E9B0,
        void,
        IDictionary_Remove,
        app::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* this_ptr,
        app::Object* key
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_
