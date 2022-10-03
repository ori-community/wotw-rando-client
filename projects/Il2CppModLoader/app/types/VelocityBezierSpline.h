#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VelocityBezierSpline {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VelocityBezierSpline__Class** type_info;
        inline app::VelocityBezierSpline__Class* get_class() {
            return il2cpp::get_class<app::VelocityBezierSpline__Class>(type_info, "", "VelocityBezierSpline");
        }
        inline app::VelocityBezierSpline* create() {
            return il2cpp::create_object<app::VelocityBezierSpline>(get_class());
        }
    } // namespace VelocityBezierSpline
} // namespace app::classes::types
