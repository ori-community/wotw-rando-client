#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BezierSpline {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BezierSpline__Class** type_info;
        inline app::BezierSpline__Class* get_class() {
            return il2cpp::get_class<app::BezierSpline__Class>(type_info, "", "BezierSpline");
        }
        inline app::BezierSpline* create() {
            return il2cpp::create_object<app::BezierSpline>(get_class());
        }
    } // namespace BezierSpline
} // namespace app::classes::types
