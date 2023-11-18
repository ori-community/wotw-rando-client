#pragma once
#include <Modloader/app/structs/AnimatorOverrideController.h>
#include <Modloader/app/structs/AnimatorOverrideController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimatorOverrideController {
        inline app::AnimatorOverrideController__Class** type_info() {
            static app::AnimatorOverrideController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimatorOverrideController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimatorOverrideController__Class* get_class() {
            return il2cpp::get_class<app::AnimatorOverrideController__Class>(type_info(), "UnityEngine", "AnimatorOverrideController");
        }
        inline app::AnimatorOverrideController* create() {
            return il2cpp::create_object<app::AnimatorOverrideController>(get_class());
        }
    } // namespace AnimatorOverrideController
} // namespace app::classes::types
