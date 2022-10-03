#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BezierSpline_BezierSplineSegment__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BezierSpline_BezierSplineSegment__Array__Class** type_info;
        inline app::BezierSpline_BezierSplineSegment__Array__Class* get_class() {
            return il2cpp::get_class<app::BezierSpline_BezierSplineSegment__Array__Class>(type_info, "", "BezierSpline+BezierSplineSegment[]");
        }
        inline app::BezierSpline_BezierSplineSegment__Array* create() {
            return il2cpp::create_object<app::BezierSpline_BezierSplineSegment__Array>(get_class());
        }
    } // namespace BezierSpline_BezierSplineSegment__Array
} // namespace app::classes::types
