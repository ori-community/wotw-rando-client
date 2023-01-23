#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BezierSpline_BezierSplineSegment__Array__Class.h>
#include <Modloader/app/structs/BezierSpline_BezierSplineSegment__Array.h>

namespace app::classes::types {
    namespace BezierSpline_BezierSplineSegment__Array {
        inline app::BezierSpline_BezierSplineSegment__Array__Class** type_info = (app::BezierSpline_BezierSplineSegment__Array__Class**)(modloader::win::memory::resolve_rva(0x0477DE10));
        inline app::BezierSpline_BezierSplineSegment__Array__Class* get_class() {
            return il2cpp::get_class<app::BezierSpline_BezierSplineSegment__Array__Class>(type_info, "", "BezierSpline+BezierSplineSegment[]");
        }
        inline app::BezierSpline_BezierSplineSegment__Array* create() {
            return il2cpp::create_object<app::BezierSpline_BezierSplineSegment__Array>(get_class());
        }
    } // namespace BezierSpline_BezierSplineSegment__Array
} // namespace app::classes::types
