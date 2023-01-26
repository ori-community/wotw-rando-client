#pragma once
#include <Modloader/app/structs/SteeringForcesAngleAvoidanceSettings__Array.h>
#include <Modloader/app/structs/SteeringForcesAngleAvoidanceSettings__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteeringForcesAngleAvoidanceSettings__Array {
        inline app::SteeringForcesAngleAvoidanceSettings__Array__Class** type_info() {
            static app::SteeringForcesAngleAvoidanceSettings__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SteeringForcesAngleAvoidanceSettings__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SteeringForcesAngleAvoidanceSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::SteeringForcesAngleAvoidanceSettings__Array__Class>(type_info(), "", "SteeringForcesAngleAvoidanceSettings[]");
        }
        inline app::SteeringForcesAngleAvoidanceSettings__Array* create() {
            return il2cpp::create_object<app::SteeringForcesAngleAvoidanceSettings__Array>(get_class());
        }
    } // namespace SteeringForcesAngleAvoidanceSettings__Array
} // namespace app::classes::types
