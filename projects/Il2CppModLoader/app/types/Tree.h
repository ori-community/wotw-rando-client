#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Tree {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Tree__Class** type_info;
        inline app::Tree__Class* get_class() {
            return il2cpp::get_class<app::Tree__Class>(type_info, "Ionic.Zlib", "Tree");
        }
        inline app::Tree* create() {
            return il2cpp::create_object<app::Tree>(get_class());
        }
    } // namespace Tree
} // namespace app::classes::types
