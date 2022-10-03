#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObstacleAvoidanceType__Enum {
        namespace {
            app::ObstacleAvoidanceType__Enum__Class* type_info_ref = nullptr;
        }
        app::ObstacleAvoidanceType__Enum__Class** type_info = &type_info_ref;
        inline app::ObstacleAvoidanceType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ObstacleAvoidanceType__Enum__Class>(type_info, "UnityEngine.AI", "ObstacleAvoidanceType");
        }
        inline app::ObstacleAvoidanceType__Enum* create() {
            return il2cpp::create_object<app::ObstacleAvoidanceType__Enum>(get_class());
        }
    } // namespace ObstacleAvoidanceType__Enum
} // namespace app::classes::types
