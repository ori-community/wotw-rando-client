#pragma once
#include <Modloader/app/structs/BezierSpline.h>
#include <Modloader/app/structs/BezierSpline__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BezierSpline {
        inline app::BezierSpline__Class** type_info() {
            static app::BezierSpline__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BezierSpline__Class**)(modloader::win::memory::resolve_rva(0x04792008));
            }
            return cache;
        }
        inline app::BezierSpline__Class* get_class() {
            return il2cpp::get_class<app::BezierSpline__Class>(type_info(), "", "BezierSpline");
        }
        inline app::BezierSpline* create() {
            return il2cpp::create_object<app::BezierSpline>(get_class());
        }
    } // namespace BezierSpline
} // namespace app::classes::types
