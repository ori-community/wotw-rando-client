#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BezierSpline_BezierSplinePoint__Array {
        namespace {
            app::BezierSpline_BezierSplinePoint__Array__Class* type_info_ref = nullptr;
        }
        app::BezierSpline_BezierSplinePoint__Array__Class** type_info = &type_info_ref;
        inline app::BezierSpline_BezierSplinePoint__Array__Class* get_class() {
            return il2cpp::get_class<app::BezierSpline_BezierSplinePoint__Array__Class>(type_info, "", "BezierSpline+BezierSplinePoint[]");
        }
        inline app::BezierSpline_BezierSplinePoint__Array* create() {
            return il2cpp::create_object<app::BezierSpline_BezierSplinePoint__Array>(get_class());
        }
    } // namespace BezierSpline_BezierSplinePoint__Array
} // namespace app::classes::types
