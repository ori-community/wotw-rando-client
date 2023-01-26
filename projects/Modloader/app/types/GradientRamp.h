#pragma once
#include <Modloader/app/structs/GradientRamp.h>
#include <Modloader/app/structs/GradientRamp__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GradientRamp {
        inline app::GradientRamp__Class** type_info() {
            static app::GradientRamp__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GradientRamp__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GradientRamp__Class* get_class() {
            return il2cpp::get_class<app::GradientRamp__Class>(type_info(), "Colorful", "GradientRamp");
        }
        inline app::GradientRamp* create() {
            return il2cpp::create_object<app::GradientRamp>(get_class());
        }
    } // namespace GradientRamp
} // namespace app::classes::types
