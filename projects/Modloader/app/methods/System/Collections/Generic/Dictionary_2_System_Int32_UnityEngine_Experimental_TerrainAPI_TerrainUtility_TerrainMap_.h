#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_.h>
#include <Modloader/app/structs/Dictionary_2_TK_TVal_Enumerat_Syst_Int_UnityEngi_Experiment_TerrainA_TerrainUtili_Terrain_.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/ICollection_1_System_Int32_.h>
#include <Modloader/app/structs/ICollection_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#include <Modloader/app/structs/IEnumerable_1_System_Int32_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePai_2_Syste_Int_UnityEngi_Experiment_TerrainA_TerrainUtili_TerrainM_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int3_UnityEngin_Experimenta_TerrainAP_TerrainUtilit_TerrainMa___Arra.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/TerrainUtility_TerrainMap.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ {
    IL2CPP_REGISTER_METHOD(
        0x02BA5090,
        bool,
        ContainsKey,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr,
        int32_t key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr,
        int32_t key,
        app::TerrainUtility_TerrainMap* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B2A0,
        int32_t,
        get_Count,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_,
        GetEnumerator,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BB8880,
        app::TerrainUtility_TerrainMap*,
        get_Item,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr,
        int32_t key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr,
        int32_t key,
        app::TerrainUtility_TerrainMap* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::ICollection_1_System_Int32_*,
        System_Collections_Generic_IDictionary_TKey_TValue__get_Keys,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::ICollection_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_*,
        System_Collections_Generic_IDictionary_TKey_TValue__get_Values,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BBA360,
        bool,
        Remove,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr,
        int32_t key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr,
        int32_t key,
        app::TerrainUtility_TerrainMap** value
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BB8990,
        void,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr,
        app::KeyValuePair_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ key_value_pair
    )
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BB89C0,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr,
        app::KeyValuePair_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ key_value_pair
    )
    IL2CPP_REGISTER_METHOD(
        0x0283D900,
        void,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr,
        app::KeyValuePair_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02BB8AA0,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr,
        app::KeyValuePair_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ key_value_pair
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA5450,
        app::IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_*,
        System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA5450,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BBAEE0,
        app::Object*,
        IDictionary_get_Item,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr,
        app::Object* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BBAFE0,
        void,
        IDictionary_set_Item,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr,
        app::Object* key,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0283E020,
        app::ICollection*,
        IDictionary_get_Keys,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283E050,
        app::ICollection*,
        IDictionary_get_Values,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA7DD0,
        bool,
        IDictionary_Contains,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr,
        app::Object* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BBB3A0,
        void,
        IDictionary_Add,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr,
        app::Object* key,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IDictionary_get_IsReadOnly,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IDictionary_get_IsFixedSize,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA7EA0,
        app::IDictionaryEnumerator*,
        IDictionary_GetEnumerator,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA7F50,
        void,
        IDictionary_Remove,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr,
        app::Object* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BBA7F0,
        void,
        ICollection_CopyTo,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02BBAD80,
        app::Object*,
        ICollection_get_SyncRoot,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        ICollection_get_IsSynchronized,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::IEnumerable_1_System_Int32_*,
        System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::IEnumerable_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_*,
        System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BB8F40,
        void,
        GetObjectData,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(
        0x02BB9BC0,
        void,
        OnDeserialization,
        app::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_* this_ptr,
        app::Object* sender
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
