#pragma once
#include <Modloader/app/structs/Trail_CurveFrame.h>
#include <Modloader/app/structs/Trail_CurveFrame__Boxed.h>
#include <Modloader/app/structs/Trail_CurveFrame__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Trail_CurveFrame {
        inline app::Trail_CurveFrame__Class** type_info() {
            static app::Trail_CurveFrame__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Trail_CurveFrame__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Trail_CurveFrame__Class* get_class() {
            return il2cpp::get_nested_class<app::Trail_CurveFrame__Class>(type_info(), "Moon", "Trail", "CurveFrame");
        }
        inline app::Trail_CurveFrame* create() {
            return il2cpp::create_object<app::Trail_CurveFrame>(get_class());
        }
        inline app::Trail_CurveFrame__Boxed* box(app::Trail_CurveFrame value) {
            return il2cpp::box_value<app::Trail_CurveFrame__Boxed>(get_class(), value);
        }
    } // namespace Trail_CurveFrame
} // namespace app::classes::types
