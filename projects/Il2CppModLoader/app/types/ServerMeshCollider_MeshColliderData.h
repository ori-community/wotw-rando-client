#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerMeshCollider_MeshColliderData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerMeshCollider_MeshColliderData__Class** type_info;
        inline app::ServerMeshCollider_MeshColliderData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerMeshCollider_MeshColliderData__Class>(type_info, "", "ServerMeshCollider", "MeshColliderData");
        }
        inline app::ServerMeshCollider_MeshColliderData* create() {
            return il2cpp::create_object<app::ServerMeshCollider_MeshColliderData>(get_class());
        }
        inline app::ServerMeshCollider_MeshColliderData__Boxed* box(app::ServerMeshCollider_MeshColliderData value) {
            return il2cpp::box_value<app::ServerMeshCollider_MeshColliderData__Boxed>(get_class(), value);
        }
    } // namespace ServerMeshCollider_MeshColliderData
} // namespace app::classes::types
