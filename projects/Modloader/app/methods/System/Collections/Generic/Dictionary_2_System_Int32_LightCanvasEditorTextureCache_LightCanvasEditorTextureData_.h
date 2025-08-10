#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_.h>
#include <Modloader/app/structs/Dictionary_2_TK_TVal_Enumerat_Sys_In_LightCanvasEditorTextureCa_LightCanvasEditorTextureD_.h>
#include <Modloader/app/structs/Dictionary_2_T_TVa_KeyCollect_Sys_In_LightCanvasEditorTextureCa_LightCanvasEditorTextureD_.h>
#include <Modloader/app/structs/Dictionary_2_T_TVa_ValueCollect_Sys_In_LightCanvasEditorTextureC_LightCanvasEditorTexture_.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/ICollection_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_.h>
#include <Modloader/app/structs/ICollection_1_System_Int32_.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#include <Modloader/app/structs/IDictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_.h>
#include <Modloader/app/structs/IEnumerable_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Int32_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePa_2_Syst_Int_LightCanvasEditorTextureCac_LightCanvasEditorTextureD_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_Int32_.h>
#include <Modloader/app/structs/InsertionBehavior__Enum.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int3_LightCanvasEditorTextureCach_LightCanvasEditorTextureDat___Arra.h>
#include <Modloader/app/structs/LightCanvasEditorTextureCache_LightCanvasEditorTextureData.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_ {
    IL2CPP_REGISTER_METHOD(
        0x02DCC9C0,
        void,
        set_Item,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        int32_t key,
        app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData value
    )
    IL2CPP_REGISTER_METHOD(
        0x02DCE920,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        int32_t key,
        app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02DCCA10,
        void,
        Add,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        int32_t key,
        app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA5090,
        bool,
        ContainsKey,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        int32_t key
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_*,
        get_Values,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02259DF0,
        void,
        ctor_2,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        int32_t capacity
    )
    IL2CPP_REGISTER_METHOD(
        0x0283AC50,
        void,
        ctor_3,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        app::IEqualityComparer_1_System_Int32_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02EB2A00,
        void,
        ctor_4,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        int32_t capacity,
        app::IEqualityComparer_1_System_Int32_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x0283ADC0,
        void,
        ctor_5,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        app::IDictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x02EB2B40,
        void,
        ctor_6,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        app::IDictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* dictionary,
        app::IEqualityComparer_1_System_Int32_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02EB2F60,
        void,
        ctor_7,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(
        0x002FB990,
        app::IEqualityComparer_1_System_Int32_*,
        get_Comparer,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_*,
        get_Keys,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::ICollection_1_System_Int32_*,
        System_Collections_Generic_IDictionary_TKey_TValue__get_Keys,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::IEnumerable_1_System_Int32_*,
        System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::ICollection_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_*,
        System_Collections_Generic_IDictionary_TKey_TValue__get_Values,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::IEnumerable_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_*,
        System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02EB3030,
        app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData,
        get_Item,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        int32_t key
    )
    IL2CPP_REGISTER_METHOD(
        0x02EB3160,
        void,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        app::KeyValuePair_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_ key_value_pair
    )
    IL2CPP_REGISTER_METHOD(
        0x02EB31B0,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        app::KeyValuePair_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_ key_value_pair
    )
    IL2CPP_REGISTER_METHOD(
        0x02EB32D0,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        app::KeyValuePair_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_ key_value_pair
    )
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02DCCD10,
        bool,
        ContainsValue,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData value
    )
    IL2CPP_REGISTER_METHOD(
        0x02EB3410,
        void,
        CopyTo,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        app::KeyValuePair_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02CB3A80,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_,
        GetEnumerator,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02CB3AE0,
        app::IEnumerator_1_KeyValuePair_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_*,
        System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02EB36B0,
        void,
        GetObjectData,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(
        0x02EB38F0,
        int32_t,
        FindEntry,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        int32_t key
    )
    IL2CPP_REGISTER_METHOD(
        0x02EB3B10,
        void,
        Initialize,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        int32_t capacity
    )
    IL2CPP_REGISTER_METHOD(
        0x02EB3C70,
        bool,
        TryInsert,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        int32_t key,
        app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData value,
        app::InsertionBehavior__Enum behavior
    )
    IL2CPP_REGISTER_METHOD(
        0x02EB4310,
        void,
        OnDeserialization,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        app::Object* sender
    )
    IL2CPP_REGISTER_METHOD(0x02EB4730, void, Resize_1, app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02EB4800,
        void,
        Resize_2,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        int32_t new_size,
        bool force_new_hash_codes
    )
    IL2CPP_REGISTER_METHOD(
        0x02EB4AE0,
        bool,
        Remove,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        int32_t key
    )
    IL2CPP_REGISTER_METHOD(
        0x02DCE9D0,
        bool,
        TryAdd,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        int32_t key,
        app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData value
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283D900,
        void,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        app::KeyValuePair_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02EB4E50,
        void,
        ICollection_CopyTo,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02CB3AE0,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        ICollection_get_IsSynchronized,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02EB5430,
        app::Object*,
        ICollection_get_SyncRoot,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IDictionary_get_IsFixedSize,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IDictionary_get_IsReadOnly,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283E020,
        app::ICollection*,
        IDictionary_get_Keys,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283E050,
        app::ICollection*,
        IDictionary_get_Values,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02EB5590,
        app::Object*,
        IDictionary_get_Item,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        app::Object* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02EB56E0,
        void,
        IDictionary_set_Item,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        app::Object* key,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02EB59E0, bool, IsCompatibleKey, app::Object* key)
    IL2CPP_REGISTER_METHOD(
        0x02EB5AE0,
        void,
        IDictionary_Add,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        app::Object* key,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA7DD0,
        bool,
        IDictionary_Contains,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        app::Object* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02CB6520,
        app::IDictionaryEnumerator*,
        IDictionary_GetEnumerator,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA7F50,
        void,
        IDictionary_Remove,
        app::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        app::Object* key
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_
