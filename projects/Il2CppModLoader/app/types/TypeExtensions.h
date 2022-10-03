#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeExtensions {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeExtensions__Class** type_info;
        inline app::TypeExtensions__Class* get_class() {
            return il2cpp::get_class<app::TypeExtensions__Class>(type_info, "System.Dynamic.Utils", "TypeExtensions");
        }
        inline app::TypeExtensions* create() {
            return il2cpp::create_object<app::TypeExtensions>(get_class());
        }
    } // namespace TypeExtensions
} // namespace app::classes::types
