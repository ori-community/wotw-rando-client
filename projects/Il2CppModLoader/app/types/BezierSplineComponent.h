#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BezierSplineComponent {
        namespace {
            inline app::BezierSplineComponent__Class* type_info_ref = nullptr;
        }
        inline app::BezierSplineComponent__Class** type_info = &type_info_ref;
        inline app::BezierSplineComponent__Class* get_class() {
            return il2cpp::get_class<app::BezierSplineComponent__Class>(type_info, "", "BezierSplineComponent");
        }
        inline app::BezierSplineComponent* create() {
            return il2cpp::create_object<app::BezierSplineComponent>(get_class());
        }
    } // namespace BezierSplineComponent
} // namespace app::classes::types
