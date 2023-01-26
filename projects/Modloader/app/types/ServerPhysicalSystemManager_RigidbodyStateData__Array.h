#pragma once
#include <Modloader/app/structs/ServerPhysicalSystemManager_RigidbodyStateData__Array.h>
#include <Modloader/app/structs/ServerPhysicalSystemManager_RigidbodyStateData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerPhysicalSystemManager_RigidbodyStateData__Array {
        inline app::ServerPhysicalSystemManager_RigidbodyStateData__Array__Class** type_info() {
            static app::ServerPhysicalSystemManager_RigidbodyStateData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerPhysicalSystemManager_RigidbodyStateData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerPhysicalSystemManager_RigidbodyStateData__Array__Class* get_class() {
            return il2cpp::get_class<app::ServerPhysicalSystemManager_RigidbodyStateData__Array__Class>(type_info(), "", "ServerPhysicalSystemManager+RigidbodyStateData[]");
        }
        inline app::ServerPhysicalSystemManager_RigidbodyStateData__Array* create() {
            return il2cpp::create_object<app::ServerPhysicalSystemManager_RigidbodyStateData__Array>(get_class());
        }
    } // namespace ServerPhysicalSystemManager_RigidbodyStateData__Array
} // namespace app::classes::types
