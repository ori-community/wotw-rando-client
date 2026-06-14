#pragma once
#include <Modloader/app/structs/CacheDict_2_TKe_TValu_Entr_Syste_Reflectio_MethodBas_Syste_Reflecti_ParameterIn___Arr__Cla.h>
#include <Modloader/app/structs/CacheDict_2_TKey_TValue_Entr_Syste_Reflectio_MethodBas_Syste_Reflectio_ParameterInf___Arra.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CacheDict_2_TKey_TValue_Entry_System_Reflection_MethodBase_System_Reflection_ParameterInfo___Array {
        inline app::CacheDict_2_TKey_TValue_Entry_System_Reflection_MethodBase_System_Reflection_ParameterInfo___Array__Class** type_info() {
            static app::CacheDict_2_TKey_TValue_Entry_System_Reflection_MethodBase_System_Reflection_ParameterInfo___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CacheDict_2_TKey_TValue_Entry_System_Reflection_MethodBase_System_Reflection_ParameterInfo___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CacheDict_2_TKey_TValue_Entry_System_Reflection_MethodBase_System_Reflection_ParameterInfo___Array__Class* get_class() {
            return il2cpp::get_class<app::CacheDict_2_TKey_TValue_Entry_System_Reflection_MethodBase_System_Reflection_ParameterInfo___Array__Class>(type_info(), "System.Dynamic.Utils", "CacheDict`2[TKey,TValue]+Entry[System.Reflection.MethodBase,System.Reflection.ParameterInfo[]][]");
        }
        inline app::CacheDict_2_TKey_TValue_Entry_System_Reflection_MethodBase_System_Reflection_ParameterInfo___Array* create() {
            return il2cpp::create_object<app::CacheDict_2_TKey_TValue_Entry_System_Reflection_MethodBase_System_Reflection_ParameterInfo___Array>(get_class());
        }
    } // namespace CacheDict_2_TKey_TValue_Entry_System_Reflection_MethodBase_System_Reflection_ParameterInfo___Array
} // namespace app::classes::types
