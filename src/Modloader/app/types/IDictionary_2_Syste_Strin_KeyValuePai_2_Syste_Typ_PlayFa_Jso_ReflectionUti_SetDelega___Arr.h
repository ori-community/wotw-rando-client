#pragma once
#include <Modloader/app/structs/IDictionary_2_Syste_Strin_KeyValuePa_2_Syst_Ty_PlayF_Js_ReflectionUti_SetDelega___Arr__Cla.h>
#include <Modloader/app/structs/IDictionary_2_Syste_Strin_KeyValuePai_2_Syste_Typ_PlayFa_Jso_ReflectionUti_SetDelega___Arr.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___Array {
        inline app::IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___Array__Class** type_info() {
            static app::IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___Array__Class* get_class() {
            return il2cpp::get_class<app::IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___Array__Class>(type_info(), "System.Collections.Generic", "IDictionary`2[System.String,KeyValuePair`2[System.Type,PlayFab.Json.ReflectionUtils+SetDelegate]][]");
        }
        inline app::IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___Array* create() {
            return il2cpp::create_object<app::IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___Array>(get_class());
        }
    } // namespace IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___Array
} // namespace app::classes::types
