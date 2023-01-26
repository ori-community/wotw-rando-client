#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Renderer_UberShaderWorldProperty_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_UnityEngine_Renderer_UberShaderWorldProperty_.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/UberShaderDictionary_2_UnityEngine_Renderer_UberShaderWorldProperty_.h>
#include <Modloader/app/structs/UberShaderWorldProperty.h>

namespace app::classes::UberShaderDictionary_2_UnityEngine_Renderer_UberShaderWorldProperty_ {
    IL2CPP_REGISTER_METHOD(0x0225D7D0, app::Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Renderer_UberShaderWorldProperty_*, get_Keys, (app::UberShaderDictionary_2_UnityEngine_Renderer_UberShaderWorldProperty_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225D8E0, app::UberShaderWorldProperty*, get_Item, (app::UberShaderDictionary_2_UnityEngine_Renderer_UberShaderWorldProperty_ * this_ptr, app::Renderer* index))
    IL2CPP_REGISTER_METHOD(0x0225DBC0, void, ctor, (app::UberShaderDictionary_2_UnityEngine_Renderer_UberShaderWorldProperty_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225E8D0, void, OnBeforeSerialize, (app::UberShaderDictionary_2_UnityEngine_Renderer_UberShaderWorldProperty_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225EB90, void, OnAfterDeserialize, (app::UberShaderDictionary_2_UnityEngine_Renderer_UberShaderWorldProperty_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225D800, app::IEnumerator_1_KeyValuePair_2_UnityEngine_Renderer_UberShaderWorldProperty_*, System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TK_TV___GetEnumerator, (app::UberShaderDictionary_2_UnityEngine_Renderer_UberShaderWorldProperty_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225D800, app::IEnumerator*, IEnumerable_GetEnumerator, (app::UberShaderDictionary_2_UnityEngine_Renderer_UberShaderWorldProperty_ * this_ptr))
} // namespace app::classes::UberShaderDictionary_2_UnityEngine_Renderer_UberShaderWorldProperty_
