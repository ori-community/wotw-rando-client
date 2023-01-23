#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ServerMeshCollider__Class.h>
#include <Modloader/app/structs/ServerMeshCollider.h>

namespace app::classes::types {
    namespace ServerMeshCollider {
        namespace {
            inline app::ServerMeshCollider__Class* type_info_ref = nullptr;
        }
        inline app::ServerMeshCollider__Class** type_info = &type_info_ref;
        inline app::ServerMeshCollider__Class* get_class() {
            return il2cpp::get_class<app::ServerMeshCollider__Class>(type_info, "", "ServerMeshCollider");
        }
        inline app::ServerMeshCollider* create() {
            return il2cpp::create_object<app::ServerMeshCollider>(get_class());
        }
    } // namespace ServerMeshCollider
} // namespace app::classes::types
