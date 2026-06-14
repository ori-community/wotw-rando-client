#pragma once
#include <Modloader/app/structs/BezierSpline_BezierSplinePoint__Array.h>
#include <Modloader/app/structs/BezierSpline_BezierSplinePoint__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BezierSpline_BezierSplinePoint__Array {
        inline app::BezierSpline_BezierSplinePoint__Array__Class** type_info() {
            static app::BezierSpline_BezierSplinePoint__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BezierSpline_BezierSplinePoint__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BezierSpline_BezierSplinePoint__Array__Class* get_class() {
            return il2cpp::get_class<app::BezierSpline_BezierSplinePoint__Array__Class>(type_info(), "", "BezierSpline+BezierSplinePoint[]");
        }
        inline app::BezierSpline_BezierSplinePoint__Array* create() {
            return il2cpp::create_object<app::BezierSpline_BezierSplinePoint__Array>(get_class());
        }
    } // namespace BezierSpline_BezierSplinePoint__Array
} // namespace app::classes::types
