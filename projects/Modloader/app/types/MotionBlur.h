#pragma once
#include <Modloader/app/structs/MotionBlur.h>
#include <Modloader/app/structs/MotionBlur__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MotionBlur {
        inline app::MotionBlur__Class** type_info() {
            static app::MotionBlur__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MotionBlur__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MotionBlur__Class* get_class() {
            return il2cpp::get_class<app::MotionBlur__Class>(type_info(), "UnityStandardAssets.ImageEffects", "MotionBlur");
        }
        inline app::MotionBlur* create() {
            return il2cpp::create_object<app::MotionBlur>(get_class());
        }
    } // namespace MotionBlur
} // namespace app::classes::types
