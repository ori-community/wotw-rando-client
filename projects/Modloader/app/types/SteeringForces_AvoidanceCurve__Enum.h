#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SteeringForces_AvoidanceCurve__Enum__Class.h>
#include <Modloader/app/structs/SteeringForces_AvoidanceCurve__Enum.h>

namespace app::classes::types {
    namespace SteeringForces_AvoidanceCurve__Enum {
        namespace {
            inline app::SteeringForces_AvoidanceCurve__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SteeringForces_AvoidanceCurve__Enum__Class** type_info = &type_info_ref;
        inline app::SteeringForces_AvoidanceCurve__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SteeringForces_AvoidanceCurve__Enum__Class>(type_info, "", "SteeringForces", "AvoidanceCurve");
        }
        inline app::SteeringForces_AvoidanceCurve__Enum* create() {
            return il2cpp::create_object<app::SteeringForces_AvoidanceCurve__Enum>(get_class());
        }
    } // namespace SteeringForces_AvoidanceCurve__Enum
} // namespace app::classes::types
