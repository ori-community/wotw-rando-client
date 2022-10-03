#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Missing {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Missing__Class** type_info;
        inline app::Missing__Class* get_class() {
            return il2cpp::get_class<app::Missing__Class>(type_info, "System.Reflection", "Missing");
        }
        inline app::Missing* create() {
            return il2cpp::create_object<app::Missing>(get_class());
        }
    } // namespace Missing
} // namespace app::classes::types
