#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptionProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeDescriptionProvider__Class** type_info;
        inline app::TypeDescriptionProvider__Class* get_class() {
            return il2cpp::get_class<app::TypeDescriptionProvider__Class>(type_info, "System.ComponentModel", "TypeDescriptionProvider");
        }
        inline app::TypeDescriptionProvider* create() {
            return il2cpp::create_object<app::TypeDescriptionProvider>(get_class());
        }
    } // namespace TypeDescriptionProvider
} // namespace app::classes::types
