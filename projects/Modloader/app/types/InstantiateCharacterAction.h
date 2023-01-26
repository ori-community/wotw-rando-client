#pragma once
#include <Modloader/app/structs/InstantiateCharacterAction.h>
#include <Modloader/app/structs/InstantiateCharacterAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstantiateCharacterAction {
        inline app::InstantiateCharacterAction__Class** type_info() {
            static app::InstantiateCharacterAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InstantiateCharacterAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InstantiateCharacterAction__Class* get_class() {
            return il2cpp::get_class<app::InstantiateCharacterAction__Class>(type_info(), "", "InstantiateCharacterAction");
        }
        inline app::InstantiateCharacterAction* create() {
            return il2cpp::create_object<app::InstantiateCharacterAction>(get_class());
        }
    } // namespace InstantiateCharacterAction
} // namespace app::classes::types
