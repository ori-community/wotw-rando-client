#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Single_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Single_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Object_System_Single_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UberShaderDictionary_2_System_Object_System_Single_.h>

namespace app::classes::UberShaderDictionary_2_System_Object_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x0225F2F0, void, OnBeforeSerialize, app::UberShaderDictionary_2_System_Object_System_Single_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225F5B0, void, OnAfterDeserialize, app::UberShaderDictionary_2_System_Object_System_Single_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0225D7A0,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Single_*,
        get_Values,
        app::UberShaderDictionary_2_System_Object_System_Single_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0225D7D0,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Single_*,
        get_Keys,
        app::UberShaderDictionary_2_System_Object_System_Single_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0225D800,
        app::IEnumerator_1_KeyValuePair_2_System_Object_System_Single_*,
        System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TK_TV___GetEnumerator,
        app::UberShaderDictionary_2_System_Object_System_Single_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0225D800, app::IEnumerator*, IEnumerable_GetEnumerator, app::UberShaderDictionary_2_System_Object_System_Single_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225D880, int32_t, get_Count, app::UberShaderDictionary_2_System_Object_System_Single_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225D8B0, void, Clear, app::UberShaderDictionary_2_System_Object_System_Single_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225D8E0, float, get_Item, app::UberShaderDictionary_2_System_Object_System_Single_* this_ptr, app::Object* index)
    IL2CPP_REGISTER_METHOD(0x0225FB20, void, set_Item, app::UberShaderDictionary_2_System_Object_System_Single_* this_ptr, app::Object* index, float value)
    IL2CPP_REGISTER_METHOD(0x0225D940, bool, ContainsKey, app::UberShaderDictionary_2_System_Object_System_Single_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x0225D970, bool, TryGetValue, app::UberShaderDictionary_2_System_Object_System_Single_* this_ptr, app::Object* key, float* value)
    IL2CPP_REGISTER_METHOD(0x0225FB50, void, Add, app::UberShaderDictionary_2_System_Object_System_Single_* this_ptr, app::Object* key, float value)
    IL2CPP_REGISTER_METHOD(0x0225DAE0, void, Remove, app::UberShaderDictionary_2_System_Object_System_Single_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x0225FC90, void, SetOrReplace, app::UberShaderDictionary_2_System_Object_System_Single_* this_ptr, app::Object* key, float value)
    IL2CPP_REGISTER_METHOD(0x0225DBC0, void, ctor, app::UberShaderDictionary_2_System_Object_System_Single_* this_ptr)
} // namespace app::classes::UberShaderDictionary_2_System_Object_System_Single_
