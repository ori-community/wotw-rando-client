#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_String_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/UberShaderDictionary_2_System_String_UnityEngine_Vector3_.h>

namespace app::classes::UberShaderDictionary_2_System_String_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(0x0225DBC0, void, ctor, app::UberShaderDictionary_2_System_String_UnityEngine_Vector3_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02261CE0, void, OnBeforeSerialize, app::UberShaderDictionary_2_System_String_UnityEngine_Vector3_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02261FB0, void, OnAfterDeserialize, app::UberShaderDictionary_2_System_String_UnityEngine_Vector3_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02260590,
        app::IEnumerator_1_KeyValuePair_2_System_String_UnityEngine_Vector3_*,
        System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TK_TV___GetEnumerator,
        app::UberShaderDictionary_2_System_String_UnityEngine_Vector3_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02260590, app::IEnumerator*, IEnumerable_GetEnumerator, app::UberShaderDictionary_2_System_String_UnityEngine_Vector3_* this_ptr)
} // namespace app::classes::UberShaderDictionary_2_System_String_UnityEngine_Vector3_
