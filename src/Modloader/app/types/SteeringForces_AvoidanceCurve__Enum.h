#pragma once
#include <Modloader/app/structs/SteeringForces_AvoidanceCurve__Enum.h>
#include <Modloader/app/structs/SteeringForces_AvoidanceCurve__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteeringForces_AvoidanceCurve__Enum {
        inline app::SteeringForces_AvoidanceCurve__Enum__Class** type_info() {
            static app::SteeringForces_AvoidanceCurve__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SteeringForces_AvoidanceCurve__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SteeringForces_AvoidanceCurve__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SteeringForces_AvoidanceCurve__Enum__Class>(type_info(), "", "SteeringForces", "AvoidanceCurve");
        }
        inline app::SteeringForces_AvoidanceCurve__Enum* create() {
            return il2cpp::create_object<app::SteeringForces_AvoidanceCurve__Enum>(get_class());
        }
    } // namespace SteeringForces_AvoidanceCurve__Enum
} // namespace app::classes::types
