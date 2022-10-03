#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeFilter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeFilter__Class** type_info;
        inline app::TypeFilter__Class* get_class() {
            return il2cpp::get_class<app::TypeFilter__Class>(type_info, "System.Reflection", "TypeFilter");
        }
        inline app::TypeFilter* create() {
            return il2cpp::create_object<app::TypeFilter>(get_class());
        }
    } // namespace TypeFilter
} // namespace app::classes::types
