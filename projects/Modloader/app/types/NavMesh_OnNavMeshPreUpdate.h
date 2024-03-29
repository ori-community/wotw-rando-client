#pragma once
#include <Modloader/app/structs/NavMesh_OnNavMeshPreUpdate.h>
#include <Modloader/app/structs/NavMesh_OnNavMeshPreUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NavMesh_OnNavMeshPreUpdate {
        inline app::NavMesh_OnNavMeshPreUpdate__Class** type_info() {
            static app::NavMesh_OnNavMeshPreUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NavMesh_OnNavMeshPreUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NavMesh_OnNavMeshPreUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::NavMesh_OnNavMeshPreUpdate__Class>(type_info(), "UnityEngine.AI", "NavMesh", "OnNavMeshPreUpdate");
        }
        inline app::NavMesh_OnNavMeshPreUpdate* create() {
            return il2cpp::create_object<app::NavMesh_OnNavMeshPreUpdate>(get_class());
        }
    } // namespace NavMesh_OnNavMeshPreUpdate
} // namespace app::classes::types
