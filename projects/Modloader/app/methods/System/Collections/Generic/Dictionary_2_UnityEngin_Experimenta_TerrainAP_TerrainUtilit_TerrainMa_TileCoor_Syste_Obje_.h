#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Dictionary_2_TK_TVa_Enumera_UnityEng_Experimen_Terrain_TerrainUtil_Terrain_TileCo_Sys_Obj_.h>
#include <Modloader/app/structs/Dictionary_2_T_TVa_KeyCollect_UnityEng_Experimen_Terrain_TerrainUtil_Terrain_TileCo_Sy_Ob_.h>
#include <Modloader/app/structs/Dictionary_2_T_TVa_ValueCollect_UnityEng_Experimen_Terrain_TerrainUtil_Terrai_TileC_Sy_Ob_.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngin_Experimenta_TerrainAP_TerrainUtilit_TerrainMa_TileCoor_Syste_Obje_.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/ICollection_1_System_Object_.h>
#include <Modloader/app/structs/ICollection_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#include <Modloader/app/structs/IDictionary_2_UnityEngin_Experimenta_TerrainAP_TerrainUtilit_TerrainMa_TileCoor_Syst_Obje_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePa_2_UnityEngi_Experimen_Terrain_TerrainUtil_Terrain_TileCo_Sys_Obj_.h>
#include <Modloader/app/structs/IEqualityComparer_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMa_TileCoor_.h>
#include <Modloader/app/structs/InsertionBehavior__Enum.h>
#include <Modloader/app/structs/KeyValuePair_2_UnityEngi_Experiment_TerrainA_TerrainUtili_TerrainM_TileCoo_Syst_Obje___Arr.h>
#include <Modloader/app/structs/KeyValuePair_2_UnityEngin_Experimenta_TerrainAP_TerrainUtilit_TerrainMa_TileCoo_Syst_Obje_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/TerrainUtility_TerrainMap_TileCoord.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x0283AC20,
        void,
        ctor_1,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02259DF0,
        void,
        ctor_2,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        int32_t capacity
    )
    IL2CPP_REGISTER_METHOD(
        0x0283AC50,
        void,
        ctor_3,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::IEqualityComparer_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02CBA170,
        void,
        ctor_4,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        int32_t capacity,
        app::IEqualityComparer_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x0283ADC0,
        void,
        ctor_5,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::IDictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x02CBA2B0,
        void,
        ctor_6,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::IDictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* dictionary,
        app::IEqualityComparer_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02CBA680,
        void,
        ctor_7,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(
        0x002FB990,
        app::IEqualityComparer_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_*,
        get_Comparer,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B2A0,
        int32_t,
        get_Count,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_*,
        get_Keys,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::ICollection_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_*,
        System_Collections_Generic_IDictionary_TKey_TValue__get_Keys,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::IEnumerable_1_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_*,
        System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_*,
        get_Values,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::ICollection_1_System_Object_*,
        System_Collections_Generic_IDictionary_TKey_TValue__get_Values,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::IEnumerable_1_System_Object_*,
        System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02CBA750,
        app::Object*,
        get_Item,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::TerrainUtility_TerrainMap_TileCoord key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::TerrainUtility_TerrainMap_TileCoord key,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::TerrainUtility_TerrainMap_TileCoord key,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BD25E0,
        void,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::KeyValuePair_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_ key_value_pair
    )
    IL2CPP_REGISTER_METHOD(
        0x02BD2610,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::KeyValuePair_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_ key_value_pair
    )
    IL2CPP_REGISTER_METHOD(
        0x02CBA860,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::KeyValuePair_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_ key_value_pair
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B900,
        void,
        Clear,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA5090,
        bool,
        ContainsKey,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::TerrainUtility_TerrainMap_TileCoord key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BB8BA0,
        bool,
        ContainsValue,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02CBA970,
        void,
        CopyTo,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::KeyValuePair_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_,
        GetEnumerator,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA5450,
        app::IEnumerator_1_KeyValuePair_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_*,
        System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02CBABA0,
        void,
        GetObjectData,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(
        0x02CBADE0,
        int32_t,
        FindEntry,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::TerrainUtility_TerrainMap_TileCoord key
    )
    IL2CPP_REGISTER_METHOD(
        0x02CBB000,
        void,
        Initialize,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        int32_t capacity
    )
    IL2CPP_REGISTER_METHOD(
        0x02CBB160,
        bool,
        TryInsert,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::TerrainUtility_TerrainMap_TileCoord key,
        app::Object* value,
        app::InsertionBehavior__Enum behavior
    )
    IL2CPP_REGISTER_METHOD(
        0x02CBB820,
        void,
        OnDeserialization,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::Object* sender
    )
    IL2CPP_REGISTER_METHOD(
        0x02CBBC30,
        void,
        Resize_1,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02CBBD00,
        void,
        Resize_2,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        int32_t new_size,
        bool force_new_hash_codes
    )
    IL2CPP_REGISTER_METHOD(
        0x02CBBFC0,
        bool,
        Remove,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::TerrainUtility_TerrainMap_TileCoord key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::TerrainUtility_TerrainMap_TileCoord key,
        app::Object** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAE050,
        bool,
        TryAdd,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::TerrainUtility_TerrainMap_TileCoord key,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283D900,
        void,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::KeyValuePair_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02CBC3C0,
        void,
        ICollection_CopyTo,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA5450,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        ICollection_get_IsSynchronized,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02CBC960,
        app::Object*,
        ICollection_get_SyncRoot,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IDictionary_get_IsFixedSize,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        IDictionary_get_IsReadOnly,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283E020,
        app::ICollection*,
        IDictionary_get_Keys,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283E050,
        app::ICollection*,
        IDictionary_get_Values,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02C40C10,
        app::Object*,
        IDictionary_get_Item,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::Object* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02CBCAC0,
        void,
        IDictionary_set_Item,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::Object* key,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02CBCD80, bool, IsCompatibleKey, app::Object* key)
    IL2CPP_REGISTER_METHOD(
        0x02CBCE80,
        void,
        IDictionary_Add,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::Object* key,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02C41390,
        bool,
        IDictionary_Contains,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::Object* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA7EA0,
        app::IDictionaryEnumerator*,
        IDictionary_GetEnumerator,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02C41460,
        void,
        IDictionary_Remove,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_* this_ptr,
        app::Object* key
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
