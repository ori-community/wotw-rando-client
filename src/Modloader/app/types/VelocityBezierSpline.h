#pragma once
#include <Modloader/app/structs/VelocityBezierSpline.h>
#include <Modloader/app/structs/VelocityBezierSpline__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VelocityBezierSpline {
        inline app::VelocityBezierSpline__Class** type_info() {
            static app::VelocityBezierSpline__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VelocityBezierSpline__Class**)(modloader::win::memory::resolve_rva(0x04741A70));
            }
            return cache;
        }
        inline app::VelocityBezierSpline__Class* get_class() {
            return il2cpp::get_class<app::VelocityBezierSpline__Class>(type_info(), "", "VelocityBezierSpline");
        }
        inline app::VelocityBezierSpline* create() {
            return il2cpp::create_object<app::VelocityBezierSpline>(get_class());
        }
    } // namespace VelocityBezierSpline
} // namespace app::classes::types
