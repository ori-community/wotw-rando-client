#pragma once
#include <Modloader/app/structs/ObstacleAvoidanceType__Enum.h>
#include <Modloader/app/structs/ObstacleAvoidanceType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObstacleAvoidanceType__Enum {
        inline app::ObstacleAvoidanceType__Enum__Class** type_info() {
            static app::ObstacleAvoidanceType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObstacleAvoidanceType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObstacleAvoidanceType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ObstacleAvoidanceType__Enum__Class>(type_info(), "UnityEngine.AI", "ObstacleAvoidanceType");
        }
        inline app::ObstacleAvoidanceType__Enum* create() {
            return il2cpp::create_object<app::ObstacleAvoidanceType__Enum>(get_class());
        }
    } // namespace ObstacleAvoidanceType__Enum
} // namespace app::classes::types
