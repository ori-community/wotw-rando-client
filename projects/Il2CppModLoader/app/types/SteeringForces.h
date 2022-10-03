#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteeringForces {
        namespace {
            app::SteeringForces__Class* type_info_ref = nullptr;
        }
        app::SteeringForces__Class** type_info = &type_info_ref;
        inline app::SteeringForces__Class* get_class() {
            return il2cpp::get_class<app::SteeringForces__Class>(type_info, "", "SteeringForces");
        }
        inline app::SteeringForces* create() {
            return il2cpp::create_object<app::SteeringForces>(get_class());
        }
    } // namespace SteeringForces
} // namespace app::classes::types
