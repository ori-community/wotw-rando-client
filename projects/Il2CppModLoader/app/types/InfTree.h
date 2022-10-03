#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InfTree {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InfTree__Class** type_info;
        inline app::InfTree__Class* get_class() {
            return il2cpp::get_class<app::InfTree__Class>(type_info, "Ionic.Zlib", "InfTree");
        }
        inline app::InfTree* create() {
            return il2cpp::create_object<app::InfTree>(get_class());
        }
    } // namespace InfTree
} // namespace app::classes::types
