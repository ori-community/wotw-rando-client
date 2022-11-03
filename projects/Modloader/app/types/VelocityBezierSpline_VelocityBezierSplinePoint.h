#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VelocityBezierSpline_VelocityBezierSplinePoint {
        inline app::VelocityBezierSpline_VelocityBezierSplinePoint__Class** type_info = (app::VelocityBezierSpline_VelocityBezierSplinePoint__Class**)(modloader::win::memory::resolve_rva(0x047410F8));
        inline app::VelocityBezierSpline_VelocityBezierSplinePoint__Class* get_class() {
            return il2cpp::get_nested_class<app::VelocityBezierSpline_VelocityBezierSplinePoint__Class>(type_info, "", "VelocityBezierSpline", "VelocityBezierSplinePoint");
        }
        inline app::VelocityBezierSpline_VelocityBezierSplinePoint* create() {
            return il2cpp::create_object<app::VelocityBezierSpline_VelocityBezierSplinePoint>(get_class());
        }
        inline app::VelocityBezierSpline_VelocityBezierSplinePoint__Array* create_array(int size) {
            return il2cpp::array_new<app::VelocityBezierSpline_VelocityBezierSplinePoint__Array>(get_class(), size);
        }
        inline app::VelocityBezierSpline_VelocityBezierSplinePoint__Array* create_array(const std::vector<app::VelocityBezierSpline_VelocityBezierSplinePoint*>& items) {
            return il2cpp::array_new<app::VelocityBezierSpline_VelocityBezierSplinePoint__Array>(get_class(), items);
        }
    } // namespace VelocityBezierSpline_VelocityBezierSplinePoint
} // namespace app::classes::types
