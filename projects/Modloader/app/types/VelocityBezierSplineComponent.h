#pragma once
#include <Modloader/app/structs/VelocityBezierSplineComponent.h>
#include <Modloader/app/structs/VelocityBezierSplineComponent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VelocityBezierSplineComponent {
        inline app::VelocityBezierSplineComponent__Class** type_info() {
            static app::VelocityBezierSplineComponent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VelocityBezierSplineComponent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VelocityBezierSplineComponent__Class* get_class() {
            return il2cpp::get_class<app::VelocityBezierSplineComponent__Class>(type_info(), "", "VelocityBezierSplineComponent");
        }
        inline app::VelocityBezierSplineComponent* create() {
            return il2cpp::create_object<app::VelocityBezierSplineComponent>(get_class());
        }
    } // namespace VelocityBezierSplineComponent
} // namespace app::classes::types
