#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BezierSpline {
        inline app::BezierSpline__Class** type_info = (app::BezierSpline__Class**)(modloader::win::memory::resolve_rva(0x04792008));
        inline app::BezierSpline__Class* get_class() {
            return il2cpp::get_class<app::BezierSpline__Class>(type_info, "", "BezierSpline");
        }
        inline app::BezierSpline* create() {
            return il2cpp::create_object<app::BezierSpline>(get_class());
        }
    } // namespace BezierSpline
} // namespace app::classes::types
