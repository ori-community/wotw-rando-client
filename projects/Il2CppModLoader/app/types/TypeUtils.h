#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeUtils {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeUtils__Class** type_info;
        inline app::TypeUtils__Class* get_class() {
            return il2cpp::get_class<app::TypeUtils__Class>(type_info, "System.Dynamic.Utils", "TypeUtils");
        }
        inline app::TypeUtils* create() {
            return il2cpp::create_object<app::TypeUtils>(get_class());
        }
    } // namespace TypeUtils
} // namespace app::classes::types
