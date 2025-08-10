#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Boolean_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Boolean_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Object_System_Boolean_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UberShaderDictionary_2_System_Object_System_Boolean_.h>

namespace app::classes::UberShaderDictionary_2_System_Object_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x0225CF70, void, OnBeforeSerialize, app::UberShaderDictionary_2_System_Object_System_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225D230, void, OnAfterDeserialize, app::UberShaderDictionary_2_System_Object_System_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0225D7A0,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Boolean_*,
        get_Values,
        app::UberShaderDictionary_2_System_Object_System_Boolean_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0225D7D0,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Boolean_*,
        get_Keys,
        app::UberShaderDictionary_2_System_Object_System_Boolean_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0225D800,
        app::IEnumerator_1_KeyValuePair_2_System_Object_System_Boolean_*,
        System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TK_TV___GetEnumerator,
        app::UberShaderDictionary_2_System_Object_System_Boolean_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0225D800, app::IEnumerator*, IEnumerable_GetEnumerator, app::UberShaderDictionary_2_System_Object_System_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225D880, int32_t, get_Count, app::UberShaderDictionary_2_System_Object_System_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225D8B0, void, Clear, app::UberShaderDictionary_2_System_Object_System_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225D8E0, bool, get_Item, app::UberShaderDictionary_2_System_Object_System_Boolean_* this_ptr, app::Object* index)
    IL2CPP_REGISTER_METHOD(0x0225D910, void, set_Item, app::UberShaderDictionary_2_System_Object_System_Boolean_* this_ptr, app::Object* index, bool value)
    IL2CPP_REGISTER_METHOD(0x0225D940, bool, ContainsKey, app::UberShaderDictionary_2_System_Object_System_Boolean_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x0225D970, bool, TryGetValue, app::UberShaderDictionary_2_System_Object_System_Boolean_* this_ptr, app::Object* key, bool* value)
    IL2CPP_REGISTER_METHOD(0x0225D9A0, void, Add, app::UberShaderDictionary_2_System_Object_System_Boolean_* this_ptr, app::Object* key, bool value)
    IL2CPP_REGISTER_METHOD(0x0225DAE0, void, Remove, app::UberShaderDictionary_2_System_Object_System_Boolean_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x0225DB10, void, SetOrReplace, app::UberShaderDictionary_2_System_Object_System_Boolean_* this_ptr, app::Object* key, bool value)
    IL2CPP_REGISTER_METHOD(0x0225DBC0, void, ctor, app::UberShaderDictionary_2_System_Object_System_Boolean_* this_ptr)
} // namespace app::classes::UberShaderDictionary_2_System_Object_System_Boolean_
