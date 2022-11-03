#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerSphereCollider_SphereColliderData {
        inline app::ServerSphereCollider_SphereColliderData__Class** type_info = (app::ServerSphereCollider_SphereColliderData__Class**)(modloader::win::memory::resolve_rva(0x0475D4D8));
        inline app::ServerSphereCollider_SphereColliderData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerSphereCollider_SphereColliderData__Class>(type_info, "", "ServerSphereCollider", "SphereColliderData");
        }
        inline app::ServerSphereCollider_SphereColliderData* create() {
            return il2cpp::create_object<app::ServerSphereCollider_SphereColliderData>(get_class());
        }
        inline app::ServerSphereCollider_SphereColliderData__Boxed* box(app::ServerSphereCollider_SphereColliderData value) {
            return il2cpp::box_value<app::ServerSphereCollider_SphereColliderData__Boxed>(get_class(), value);
        }
    } // namespace ServerSphereCollider_SphereColliderData
} // namespace app::classes::types
