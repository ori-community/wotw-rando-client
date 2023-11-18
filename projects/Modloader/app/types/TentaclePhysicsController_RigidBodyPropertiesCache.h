#pragma once
#include <Modloader/app/structs/TentaclePhysicsController_RigidBodyPropertiesCache.h>
#include <Modloader/app/structs/TentaclePhysicsController_RigidBodyPropertiesCache__Boxed.h>
#include <Modloader/app/structs/TentaclePhysicsController_RigidBodyPropertiesCache__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentaclePhysicsController_RigidBodyPropertiesCache {
        inline app::TentaclePhysicsController_RigidBodyPropertiesCache__Class** type_info() {
            static app::TentaclePhysicsController_RigidBodyPropertiesCache__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentaclePhysicsController_RigidBodyPropertiesCache__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentaclePhysicsController_RigidBodyPropertiesCache__Class* get_class() {
            return il2cpp::get_nested_class<app::TentaclePhysicsController_RigidBodyPropertiesCache__Class>(type_info(), "", "TentaclePhysicsController", "RigidBodyPropertiesCache");
        }
        inline app::TentaclePhysicsController_RigidBodyPropertiesCache* create() {
            return il2cpp::create_object<app::TentaclePhysicsController_RigidBodyPropertiesCache>(get_class());
        }
        inline app::TentaclePhysicsController_RigidBodyPropertiesCache__Boxed* box(app::TentaclePhysicsController_RigidBodyPropertiesCache value) {
            return il2cpp::box_value<app::TentaclePhysicsController_RigidBodyPropertiesCache__Boxed>(get_class(), value);
        }
    } // namespace TentaclePhysicsController_RigidBodyPropertiesCache
} // namespace app::classes::types
