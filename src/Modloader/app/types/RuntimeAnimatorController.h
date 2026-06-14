#pragma once
#include <Modloader/app/structs/RuntimeAnimatorController.h>
#include <Modloader/app/structs/RuntimeAnimatorController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeAnimatorController {
        inline app::RuntimeAnimatorController__Class** type_info() {
            static app::RuntimeAnimatorController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeAnimatorController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeAnimatorController__Class* get_class() {
            return il2cpp::get_class<app::RuntimeAnimatorController__Class>(type_info(), "UnityEngine", "RuntimeAnimatorController");
        }
        inline app::RuntimeAnimatorController* create() {
            return il2cpp::create_object<app::RuntimeAnimatorController>(get_class());
        }
    } // namespace RuntimeAnimatorController
} // namespace app::classes::types
