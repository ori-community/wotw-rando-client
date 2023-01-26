#pragma once
#include <Modloader/app/structs/CharacterController.h>
#include <Modloader/app/structs/CharacterController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterController {
        inline app::CharacterController__Class** type_info() {
            static app::CharacterController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterController__Class* get_class() {
            return il2cpp::get_class<app::CharacterController__Class>(type_info(), "UnityEngine", "CharacterController");
        }
        inline app::CharacterController* create() {
            return il2cpp::create_object<app::CharacterController>(get_class());
        }
    } // namespace CharacterController
} // namespace app::classes::types
