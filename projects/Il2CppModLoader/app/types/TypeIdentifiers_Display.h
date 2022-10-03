#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeIdentifiers_Display {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeIdentifiers_Display__Class** type_info;
        inline app::TypeIdentifiers_Display__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeIdentifiers_Display__Class>(type_info, "System", "TypeIdentifiers", "Display");
        }
        inline app::TypeIdentifiers_Display* create() {
            return il2cpp::create_object<app::TypeIdentifiers_Display>(get_class());
        }
    } // namespace TypeIdentifiers_Display
} // namespace app::classes::types
