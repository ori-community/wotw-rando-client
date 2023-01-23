#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ServerSphereCollider__Class.h>
#include <Modloader/app/structs/ServerSphereCollider.h>

namespace app::classes::types {
    namespace ServerSphereCollider {
        namespace {
            inline app::ServerSphereCollider__Class* type_info_ref = nullptr;
        }
        inline app::ServerSphereCollider__Class** type_info = &type_info_ref;
        inline app::ServerSphereCollider__Class* get_class() {
            return il2cpp::get_class<app::ServerSphereCollider__Class>(type_info, "", "ServerSphereCollider");
        }
        inline app::ServerSphereCollider* create() {
            return il2cpp::create_object<app::ServerSphereCollider>(get_class());
        }
    } // namespace ServerSphereCollider
} // namespace app::classes::types
