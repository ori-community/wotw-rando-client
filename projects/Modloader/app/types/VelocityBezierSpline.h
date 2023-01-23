#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VelocityBezierSpline__Class.h>
#include <Modloader/app/structs/VelocityBezierSpline.h>

namespace app::classes::types {
    namespace VelocityBezierSpline {
        inline app::VelocityBezierSpline__Class** type_info = (app::VelocityBezierSpline__Class**)(modloader::win::memory::resolve_rva(0x04741A70));
        inline app::VelocityBezierSpline__Class* get_class() {
            return il2cpp::get_class<app::VelocityBezierSpline__Class>(type_info, "", "VelocityBezierSpline");
        }
        inline app::VelocityBezierSpline* create() {
            return il2cpp::create_object<app::VelocityBezierSpline>(get_class());
        }
    } // namespace VelocityBezierSpline
} // namespace app::classes::types
