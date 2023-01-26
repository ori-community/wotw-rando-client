#pragma once
#include <Modloader/app/structs/CharacterFovController.h>
#include <Modloader/app/structs/CharacterFovController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterFovController {
        inline app::CharacterFovController__Class** type_info() {
            static app::CharacterFovController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterFovController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterFovController__Class* get_class() {
            return il2cpp::get_class<app::CharacterFovController__Class>(type_info(), "", "CharacterFovController");
        }
        inline app::CharacterFovController* create() {
            return il2cpp::create_object<app::CharacterFovController>(get_class());
        }
    } // namespace CharacterFovController
} // namespace app::classes::types
