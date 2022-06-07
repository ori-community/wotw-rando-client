#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberShaderDictionary_2_System_Object_UnityEngine_Color_ {
    IL2CPP_REGISTER_METHOD(0x0225FD40, void, OnBeforeSerialize, (app::UberShaderDictionary_2_System_Object_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02260000, void, OnAfterDeserialize, (app::UberShaderDictionary_2_System_Object_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225D7A0, app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Color_ *, get_Values, (app::UberShaderDictionary_2_System_Object_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225D7D0, app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_UnityEngine_Color_ *, get_Keys, (app::UberShaderDictionary_2_System_Object_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02260590, app::IEnumerator_1_KeyValuePair_2_System_Object_UnityEngine_Color_ *, System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TK_TV___GetEnumerator, (app::UberShaderDictionary_2_System_Object_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02260590, app::IEnumerator *, IEnumerable_GetEnumerator, (app::UberShaderDictionary_2_System_Object_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225D880, int32_t, get_Count, (app::UberShaderDictionary_2_System_Object_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225D8B0, void, Clear, (app::UberShaderDictionary_2_System_Object_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02260620, app::Color, get_Item, (app::UberShaderDictionary_2_System_Object_UnityEngine_Color_ * this_ptr, app::Object * index))
    IL2CPP_REGISTER_METHOD(0x02260670, void, set_Item, (app::UberShaderDictionary_2_System_Object_UnityEngine_Color_ * this_ptr, app::Object * index, app::Color value))
    IL2CPP_REGISTER_METHOD(0x0225D940, bool, ContainsKey, (app::UberShaderDictionary_2_System_Object_UnityEngine_Color_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHOD(0x0225D970, bool, TryGetValue, (app::UberShaderDictionary_2_System_Object_UnityEngine_Color_ * this_ptr, app::Object * key, app::Color * value))
    IL2CPP_REGISTER_METHOD(0x022606B0, void, Add, (app::UberShaderDictionary_2_System_Object_UnityEngine_Color_ * this_ptr, app::Object * key, app::Color value))
    IL2CPP_REGISTER_METHOD(0x0225DAE0, void, Remove, (app::UberShaderDictionary_2_System_Object_UnityEngine_Color_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHOD(0x022607F0, void, SetOrReplace, (app::UberShaderDictionary_2_System_Object_UnityEngine_Color_ * this_ptr, app::Object * key, app::Color value))
    IL2CPP_REGISTER_METHOD(0x0225DBC0, void, ctor, (app::UberShaderDictionary_2_System_Object_UnityEngine_Color_ * this_ptr))
}
