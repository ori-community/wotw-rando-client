#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace P3D_Tree {
        extern IL2CPP_MODLOADER_DLLEXPORT app::P3D_Tree__Class** type_info;
        inline app::P3D_Tree__Class* get_class() {
            return il2cpp::get_class<app::P3D_Tree__Class>(type_info, "", "P3D_Tree");
        }
        inline app::P3D_Tree* create() {
            return il2cpp::create_object<app::P3D_Tree>(get_class());
        }
    } // namespace P3D_Tree
} // namespace app::classes::types
