#pragma once
#include <Modloader/app/structs/TargetFPSSlider.h>
#include <Modloader/app/structs/TargetFPSSlider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TargetFPSSlider {
        inline app::TargetFPSSlider__Class** type_info() {
            static app::TargetFPSSlider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TargetFPSSlider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TargetFPSSlider__Class* get_class() {
            return il2cpp::get_class<app::TargetFPSSlider__Class>(type_info(), "", "TargetFPSSlider");
        }
        inline app::TargetFPSSlider* create() {
            return il2cpp::create_object<app::TargetFPSSlider>(get_class());
        }
    } // namespace TargetFPSSlider
} // namespace app::classes::types
