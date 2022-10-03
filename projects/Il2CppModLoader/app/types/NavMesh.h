#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NavMesh {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NavMesh__Class** type_info;
        inline app::NavMesh__Class* get_class() {
            return il2cpp::get_class<app::NavMesh__Class>(type_info, "UnityEngine.AI", "NavMesh");
        }
        inline app::NavMesh* create() {
            return il2cpp::create_object<app::NavMesh>(get_class());
        }
    } // namespace NavMesh
} // namespace app::classes::types
