#pragma once
#include <Modloader/app/structs/SteeringForces.h>
#include <Modloader/app/structs/SteeringForces__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteeringForces {
        inline app::SteeringForces__Class** type_info() {
            static app::SteeringForces__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SteeringForces__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SteeringForces__Class* get_class() {
            return il2cpp::get_class<app::SteeringForces__Class>(type_info(), "", "SteeringForces");
        }
        inline app::SteeringForces* create() {
            return il2cpp::create_object<app::SteeringForces>(get_class());
        }
    } // namespace SteeringForces
} // namespace app::classes::types
