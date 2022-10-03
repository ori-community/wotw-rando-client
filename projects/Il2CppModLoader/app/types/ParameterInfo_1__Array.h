#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParameterInfo_1__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ParameterInfo_1__Array__Class** type_info;
        inline app::ParameterInfo_1__Array__Class* get_class() {
            return il2cpp::get_class<app::ParameterInfo_1__Array__Class>(type_info, "System.Reflection", "ParameterInfo[]");
        }
        inline app::ParameterInfo_1__Array* create() {
            return il2cpp::create_object<app::ParameterInfo_1__Array>(get_class());
        }
    } // namespace ParameterInfo_1__Array
} // namespace app::classes::types
