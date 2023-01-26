#pragma once
#include <Modloader/app/structs/SteeringForcesAngleAvoidanceSettings.h>
#include <Modloader/app/structs/SteeringForcesAngleAvoidanceSettings__Array.h>
#include <Modloader/app/structs/SteeringForcesAngleAvoidanceSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteeringForcesAngleAvoidanceSettings {
        inline app::SteeringForcesAngleAvoidanceSettings__Class** type_info() {
            static app::SteeringForcesAngleAvoidanceSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SteeringForcesAngleAvoidanceSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SteeringForcesAngleAvoidanceSettings__Class* get_class() {
            return il2cpp::get_class<app::SteeringForcesAngleAvoidanceSettings__Class>(type_info(), "", "SteeringForcesAngleAvoidanceSettings");
        }
        inline app::SteeringForcesAngleAvoidanceSettings* create() {
            return il2cpp::create_object<app::SteeringForcesAngleAvoidanceSettings>(get_class());
        }
        inline app::SteeringForcesAngleAvoidanceSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::SteeringForcesAngleAvoidanceSettings__Array>(get_class(), size);
        }
        inline app::SteeringForcesAngleAvoidanceSettings__Array* create_array(const std::vector<app::SteeringForcesAngleAvoidanceSettings*>& items) {
            return il2cpp::array_new<app::SteeringForcesAngleAvoidanceSettings__Array>(get_class(), items);
        }
    } // namespace SteeringForcesAngleAvoidanceSettings
} // namespace app::classes::types
