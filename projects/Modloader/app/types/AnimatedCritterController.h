#pragma once
#include <Modloader/app/structs/AnimatedCritterController.h>
#include <Modloader/app/structs/AnimatedCritterController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimatedCritterController {
        inline app::AnimatedCritterController__Class** type_info() {
            static app::AnimatedCritterController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimatedCritterController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimatedCritterController__Class* get_class() {
            return il2cpp::get_class<app::AnimatedCritterController__Class>(type_info(), "", "AnimatedCritterController");
        }
        inline app::AnimatedCritterController* create() {
            return il2cpp::create_object<app::AnimatedCritterController>(get_class());
        }
    } // namespace AnimatedCritterController
} // namespace app::classes::types
