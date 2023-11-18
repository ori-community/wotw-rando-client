#pragma once
#include <Modloader/app/structs/MotionBlurController.h>
#include <Modloader/app/structs/MotionBlurController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MotionBlurController {
        inline app::MotionBlurController__Class** type_info() {
            static app::MotionBlurController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MotionBlurController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MotionBlurController__Class* get_class() {
            return il2cpp::get_class<app::MotionBlurController__Class>(type_info(), "", "MotionBlurController");
        }
        inline app::MotionBlurController* create() {
            return il2cpp::create_object<app::MotionBlurController>(get_class());
        }
    } // namespace MotionBlurController
} // namespace app::classes::types
