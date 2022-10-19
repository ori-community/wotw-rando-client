#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BezierSpline_BezierSplineSegment {
        inline app::BezierSpline_BezierSplineSegment__Class** type_info = (app::BezierSpline_BezierSplineSegment__Class**)(modloader::win::memory::resolve_rva(0x04783038));
        inline app::BezierSpline_BezierSplineSegment__Class* get_class() {
            return il2cpp::get_nested_class<app::BezierSpline_BezierSplineSegment__Class>(type_info, "", "BezierSpline", "BezierSplineSegment");
        }
        inline app::BezierSpline_BezierSplineSegment* create() {
            return il2cpp::create_object<app::BezierSpline_BezierSplineSegment>(get_class());
        }
        inline app::BezierSpline_BezierSplineSegment__Array* create_array(int size) {
            return il2cpp::array_new<app::BezierSpline_BezierSplineSegment__Array>(get_class(), size);
        }
        inline app::BezierSpline_BezierSplineSegment__Array* create_array(const std::vector<app::BezierSpline_BezierSplineSegment*>& items) {
            return il2cpp::array_new<app::BezierSpline_BezierSplineSegment__Array>(get_class(), items);
        }
    } // namespace BezierSpline_BezierSplineSegment
} // namespace app::classes::types
