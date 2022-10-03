#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Mesh_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Mesh_1__Class** type_info;
        inline app::Mesh_1__Class* get_class() {
            return il2cpp::get_class<app::Mesh_1__Class>(type_info, "TriangleNet", "Mesh");
        }
        inline app::Mesh_1* create() {
            return il2cpp::create_object<app::Mesh_1>(get_class());
        }
    } // namespace Mesh_1
} // namespace app::classes::types
