#pragma once
#include <Modloader/app/structs/BezierSplineComponent.h>
#include <Modloader/app/structs/BezierSplineComponent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BezierSplineComponent {
        inline app::BezierSplineComponent__Class** type_info() {
            static app::BezierSplineComponent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BezierSplineComponent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BezierSplineComponent__Class* get_class() {
            return il2cpp::get_class<app::BezierSplineComponent__Class>(type_info(), "", "BezierSplineComponent");
        }
        inline app::BezierSplineComponent* create() {
            return il2cpp::create_object<app::BezierSplineComponent>(get_class());
        }
    } // namespace BezierSplineComponent
} // namespace app::classes::types
