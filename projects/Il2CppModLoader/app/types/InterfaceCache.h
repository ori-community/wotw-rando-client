#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InterfaceCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InterfaceCache__Class** type_info;
        inline app::InterfaceCache__Class* get_class() {
            return il2cpp::get_class<app::InterfaceCache__Class>(type_info, "", "InterfaceCache");
        }
        inline app::InterfaceCache* create() {
            return il2cpp::create_object<app::InterfaceCache>(get_class());
        }
    } // namespace InterfaceCache
} // namespace app::classes::types
