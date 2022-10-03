#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NavMeshPath {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NavMeshPath__Class** type_info;
        inline app::NavMeshPath__Class* get_class() {
            return il2cpp::get_class<app::NavMeshPath__Class>(type_info, "UnityEngine.AI", "NavMeshPath");
        }
        inline app::NavMeshPath* create() {
            return il2cpp::create_object<app::NavMeshPath>(get_class());
        }
    } // namespace NavMeshPath
} // namespace app::classes::types
