#pragma once
#include <Modloader/app/structs/IDictionary_2_System_Reflectio_MemberInf_PlayFa_Jso_ReflectionUtil_GetDelegat___Arra__Clas.h>
#include <Modloader/app/structs/IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___Arra.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___Array {
        inline app::IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___Array__Class** type_info() {
            static app::IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___Array__Class* get_class() {
            return il2cpp::get_class<app::IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___Array__Class>(type_info(), "System.Collections.Generic", "IDictionary`2[System.Reflection.MemberInfo,PlayFab.Json.ReflectionUtils+GetDelegate][]");
        }
        inline app::IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___Array* create() {
            return il2cpp::create_object<app::IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___Array>(get_class());
        }
    } // namespace IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___Array
} // namespace app::classes::types
