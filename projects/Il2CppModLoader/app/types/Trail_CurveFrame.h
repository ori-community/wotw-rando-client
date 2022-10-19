#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Trail_CurveFrame {
        namespace {
            inline app::Trail_CurveFrame__Class* type_info_ref = nullptr;
        }
        inline app::Trail_CurveFrame__Class** type_info = &type_info_ref;
        inline app::Trail_CurveFrame__Class* get_class() {
            return il2cpp::get_nested_class<app::Trail_CurveFrame__Class>(type_info, "Moon", "Trail", "CurveFrame");
        }
        inline app::Trail_CurveFrame* create() {
            return il2cpp::create_object<app::Trail_CurveFrame>(get_class());
        }
        inline app::Trail_CurveFrame__Boxed* box(app::Trail_CurveFrame value) {
            return il2cpp::box_value<app::Trail_CurveFrame__Boxed>(get_class(), value);
        }
    } // namespace Trail_CurveFrame
} // namespace app::classes::types
