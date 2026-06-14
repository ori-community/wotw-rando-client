#pragma once
#include <Modloader/app/structs/CharacterEnvironmentForceController.h>
#include <Modloader/app/structs/CharacterEnvironmentForceController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterEnvironmentForceController {
        inline app::CharacterEnvironmentForceController__Class** type_info() {
            static app::CharacterEnvironmentForceController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterEnvironmentForceController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterEnvironmentForceController__Class* get_class() {
            return il2cpp::get_class<app::CharacterEnvironmentForceController__Class>(type_info(), "", "CharacterEnvironmentForceController");
        }
        inline app::CharacterEnvironmentForceController* create() {
            return il2cpp::create_object<app::CharacterEnvironmentForceController>(get_class());
        }
    } // namespace CharacterEnvironmentForceController
} // namespace app::classes::types
