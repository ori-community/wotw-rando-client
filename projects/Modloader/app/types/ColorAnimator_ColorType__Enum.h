#pragma once
#include <Modloader/app/structs/ColorAnimator_ColorType__Enum.h>
#include <Modloader/app/structs/ColorAnimator_ColorType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorAnimator_ColorType__Enum {
        inline app::ColorAnimator_ColorType__Enum__Class** type_info() {
            static app::ColorAnimator_ColorType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColorAnimator_ColorType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColorAnimator_ColorType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ColorAnimator_ColorType__Enum__Class>(type_info(), "Moon.Timeline", "ColorAnimator", "ColorType");
        }
        inline app::ColorAnimator_ColorType__Enum* create() {
            return il2cpp::create_object<app::ColorAnimator_ColorType__Enum>(get_class());
        }
    } // namespace ColorAnimator_ColorType__Enum
} // namespace app::classes::types
