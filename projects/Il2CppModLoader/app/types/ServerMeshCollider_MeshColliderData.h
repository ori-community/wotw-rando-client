#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerMeshCollider_MeshColliderData {
        inline app::ServerMeshCollider_MeshColliderData__Class** type_info = (app::ServerMeshCollider_MeshColliderData__Class**)(modloader::win::memory::resolve_rva(0x04774630));
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
