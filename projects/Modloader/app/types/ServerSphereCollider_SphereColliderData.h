#pragma once
#include <Modloader/app/structs/ServerSphereCollider_SphereColliderData.h>
#include <Modloader/app/structs/ServerSphereCollider_SphereColliderData__Boxed.h>
#include <Modloader/app/structs/ServerSphereCollider_SphereColliderData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerSphereCollider_SphereColliderData {
        inline app::ServerSphereCollider_SphereColliderData__Class** type_info() {
            static app::ServerSphereCollider_SphereColliderData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ServerSphereCollider_SphereColliderData__Class**)(modloader::win::memory::resolve_rva(0x0475D4D8));
            }
            return cache;
        }
        inline app::ServerSphereCollider_SphereColliderData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerSphereCollider_SphereColliderData__Class>(type_info(), "", "ServerSphereCollider", "SphereColliderData");
        }
        inline app::ServerSphereCollider_SphereColliderData* create() {
            return il2cpp::create_object<app::ServerSphereCollider_SphereColliderData>(get_class());
        }
        inline app::ServerSphereCollider_SphereColliderData__Boxed* box(app::ServerSphereCollider_SphereColliderData value) {
            return il2cpp::box_value<app::ServerSphereCollider_SphereColliderData__Boxed>(get_class(), value);
        }
    } // namespace ServerSphereCollider_SphereColliderData
} // namespace app::classes::types
