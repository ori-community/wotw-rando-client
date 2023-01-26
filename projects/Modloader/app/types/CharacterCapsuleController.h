#pragma once
#include <Modloader/app/structs/CharacterCapsuleController.h>
#include <Modloader/app/structs/CharacterCapsuleController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterCapsuleController {
        inline app::CharacterCapsuleController__Class** type_info() {
            static app::CharacterCapsuleController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterCapsuleController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterCapsuleController__Class* get_class() {
            return il2cpp::get_class<app::CharacterCapsuleController__Class>(type_info(), "", "CharacterCapsuleController");
        }
        inline app::CharacterCapsuleController* create() {
            return il2cpp::create_object<app::CharacterCapsuleController>(get_class());
        }
    } // namespace CharacterCapsuleController
} // namespace app::classes::types
