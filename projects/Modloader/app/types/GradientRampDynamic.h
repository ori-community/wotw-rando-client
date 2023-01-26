#pragma once
#include <Modloader/app/structs/GradientRampDynamic.h>
#include <Modloader/app/structs/GradientRampDynamic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GradientRampDynamic {
        inline app::GradientRampDynamic__Class** type_info() {
            static app::GradientRampDynamic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GradientRampDynamic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GradientRampDynamic__Class* get_class() {
            return il2cpp::get_class<app::GradientRampDynamic__Class>(type_info(), "Colorful", "GradientRampDynamic");
        }
        inline app::GradientRampDynamic* create() {
            return il2cpp::create_object<app::GradientRampDynamic>(get_class());
        }
    } // namespace GradientRampDynamic
} // namespace app::classes::types
