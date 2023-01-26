#pragma once
#include <Modloader/app/structs/ActivateCharacterAction.h>
#include <Modloader/app/structs/ActivateCharacterAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivateCharacterAction {
        inline app::ActivateCharacterAction__Class** type_info() {
            static app::ActivateCharacterAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActivateCharacterAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActivateCharacterAction__Class* get_class() {
            return il2cpp::get_class<app::ActivateCharacterAction__Class>(type_info(), "", "ActivateCharacterAction");
        }
        inline app::ActivateCharacterAction* create() {
            return il2cpp::create_object<app::ActivateCharacterAction>(get_class());
        }
    } // namespace ActivateCharacterAction
} // namespace app::classes::types
