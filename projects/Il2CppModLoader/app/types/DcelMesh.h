#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DcelMesh {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DcelMesh__Class** type_info;
        inline app::DcelMesh__Class* get_class() {
            return il2cpp::get_class<app::DcelMesh__Class>(type_info, "TriangleNet.Topology.DCEL", "DcelMesh");
        }
        inline app::DcelMesh* create() {
            return il2cpp::create_object<app::DcelMesh>(get_class());
        }
    } // namespace DcelMesh
} // namespace app::classes::types
