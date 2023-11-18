#pragma once
#include <Modloader/app/structs/VelocityBezierSpline_VelocityBezierSplineSegment.h>
#include <Modloader/app/structs/VelocityBezierSpline_VelocityBezierSplineSegment__Array.h>
#include <Modloader/app/structs/VelocityBezierSpline_VelocityBezierSplineSegment__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VelocityBezierSpline_VelocityBezierSplineSegment {
        inline app::VelocityBezierSpline_VelocityBezierSplineSegment__Class** type_info() {
            static app::VelocityBezierSpline_VelocityBezierSplineSegment__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VelocityBezierSpline_VelocityBezierSplineSegment__Class**)(modloader::win::memory::resolve_rva(0x047377D8));
            }
            return cache;
        }
        inline app::VelocityBezierSpline_VelocityBezierSplineSegment__Class* get_class() {
            return il2cpp::get_nested_class<app::VelocityBezierSpline_VelocityBezierSplineSegment__Class>(type_info(), "", "VelocityBezierSpline", "VelocityBezierSplineSegment");
        }
        inline app::VelocityBezierSpline_VelocityBezierSplineSegment* create() {
            return il2cpp::create_object<app::VelocityBezierSpline_VelocityBezierSplineSegment>(get_class());
        }
        inline app::VelocityBezierSpline_VelocityBezierSplineSegment__Array* create_array(int size) {
            return il2cpp::array_new<app::VelocityBezierSpline_VelocityBezierSplineSegment__Array>(get_class(), size);
        }
        inline app::VelocityBezierSpline_VelocityBezierSplineSegment__Array* create_array(const std::vector<app::VelocityBezierSpline_VelocityBezierSplineSegment*>& items) {
            return il2cpp::array_new<app::VelocityBezierSpline_VelocityBezierSplineSegment__Array>(get_class(), items);
        }
    } // namespace VelocityBezierSpline_VelocityBezierSplineSegment
} // namespace app::classes::types
