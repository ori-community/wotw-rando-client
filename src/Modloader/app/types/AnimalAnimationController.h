#pragma once
#include <Modloader/app/structs/AnimalAnimationController.h>
#include <Modloader/app/structs/AnimalAnimationController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimalAnimationController {
        inline app::AnimalAnimationController__Class** type_info() {
            static app::AnimalAnimationController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimalAnimationController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimalAnimationController__Class* get_class() {
            return il2cpp::get_class<app::AnimalAnimationController__Class>(type_info(), "Moon", "AnimalAnimationController");
        }
        inline app::AnimalAnimationController* create() {
            return il2cpp::create_object<app::AnimalAnimationController>(get_class());
        }
    } // namespace AnimalAnimationController
} // namespace app::classes::types
