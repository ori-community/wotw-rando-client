#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Assert {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Assert__Class** type_info;
        inline app::Assert__Class* get_class() {
            return il2cpp::get_class<app::Assert__Class>(type_info, "UnityEngine.Assertions", "Assert");
        }
        inline app::Assert* create() {
            return il2cpp::create_object<app::Assert>(get_class());
        }
    } // namespace Assert
} // namespace app::classes::types
