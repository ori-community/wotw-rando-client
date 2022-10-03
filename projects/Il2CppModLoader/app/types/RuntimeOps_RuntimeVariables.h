#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeOps_RuntimeVariables {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeOps_RuntimeVariables__Class** type_info;
        inline app::RuntimeOps_RuntimeVariables__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeOps_RuntimeVariables__Class>(type_info, "System.Runtime.CompilerServices", "RuntimeOps", "RuntimeVariables");
        }
        inline app::RuntimeOps_RuntimeVariables* create() {
            return il2cpp::create_object<app::RuntimeOps_RuntimeVariables>(get_class());
        }
    } // namespace RuntimeOps_RuntimeVariables
} // namespace app::classes::types
