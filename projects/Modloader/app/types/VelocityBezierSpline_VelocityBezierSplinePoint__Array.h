#pragma once
#include <Modloader/app/structs/VelocityBezierSpline_VelocityBezierSplinePoint__Array.h>
#include <Modloader/app/structs/VelocityBezierSpline_VelocityBezierSplinePoint__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VelocityBezierSpline_VelocityBezierSplinePoint__Array {
        inline app::VelocityBezierSpline_VelocityBezierSplinePoint__Array__Class** type_info() {
            static app::VelocityBezierSpline_VelocityBezierSplinePoint__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VelocityBezierSpline_VelocityBezierSplinePoint__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VelocityBezierSpline_VelocityBezierSplinePoint__Array__Class* get_class() {
            return il2cpp::get_class<app::VelocityBezierSpline_VelocityBezierSplinePoint__Array__Class>(type_info(), "", "VelocityBezierSpline+VelocityBezierSplinePoint[]");
        }
        inline app::VelocityBezierSpline_VelocityBezierSplinePoint__Array* create() {
            return il2cpp::create_object<app::VelocityBezierSpline_VelocityBezierSplinePoint__Array>(get_class());
        }
    } // namespace VelocityBezierSpline_VelocityBezierSplinePoint__Array
} // namespace app::classes::types
