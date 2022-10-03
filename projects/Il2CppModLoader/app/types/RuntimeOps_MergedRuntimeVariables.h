#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeOps_MergedRuntimeVariables {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeOps_MergedRuntimeVariables__Class** type_info;
        inline app::RuntimeOps_MergedRuntimeVariables__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeOps_MergedRuntimeVariables__Class>(type_info, "System.Runtime.CompilerServices", "RuntimeOps", "MergedRuntimeVariables");
        }
        inline app::RuntimeOps_MergedRuntimeVariables* create() {
            return il2cpp::create_object<app::RuntimeOps_MergedRuntimeVariables>(get_class());
        }
    } // namespace RuntimeOps_MergedRuntimeVariables
} // namespace app::classes::types
