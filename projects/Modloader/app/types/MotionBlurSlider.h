#pragma once
#include <Modloader/app/structs/MotionBlurSlider.h>
#include <Modloader/app/structs/MotionBlurSlider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MotionBlurSlider {
        inline app::MotionBlurSlider__Class** type_info() {
            static app::MotionBlurSlider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MotionBlurSlider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MotionBlurSlider__Class* get_class() {
            return il2cpp::get_class<app::MotionBlurSlider__Class>(type_info(), "", "MotionBlurSlider");
        }
        inline app::MotionBlurSlider* create() {
            return il2cpp::create_object<app::MotionBlurSlider>(get_class());
        }
    } // namespace MotionBlurSlider
} // namespace app::classes::types
