#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BezierSpline_BezierSplinePoint {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BezierSpline_BezierSplinePoint__Class** type_info;
        inline app::BezierSpline_BezierSplinePoint__Class* get_class() {
            return il2cpp::get_nested_class<app::BezierSpline_BezierSplinePoint__Class>(type_info, "", "BezierSpline", "BezierSplinePoint");
        }
        inline app::BezierSpline_BezierSplinePoint* create() {
            return il2cpp::create_object<app::BezierSpline_BezierSplinePoint>(get_class());
        }
        inline app::BezierSpline_BezierSplinePoint__Array* create_array(int size) {
            return il2cpp::array_new<app::BezierSpline_BezierSplinePoint__Array>(get_class(), size);
        }
        inline app::BezierSpline_BezierSplinePoint__Array* create_array(const std::vector<app::BezierSpline_BezierSplinePoint*>& items) {
            return il2cpp::array_new<app::BezierSpline_BezierSplinePoint__Array>(get_class(), items);
        }
    } // namespace BezierSpline_BezierSplinePoint
} // namespace app::classes::types
