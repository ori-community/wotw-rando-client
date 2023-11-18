#pragma once
#include <Modloader/app/structs/CharacterInteractableActivationMode__Enum.h>
#include <Modloader/app/structs/CharacterInteractableActivationMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterInteractableActivationMode__Enum {
        inline app::CharacterInteractableActivationMode__Enum__Class** type_info() {
            static app::CharacterInteractableActivationMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterInteractableActivationMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterInteractableActivationMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::CharacterInteractableActivationMode__Enum__Class>(type_info(), "Moon", "CharacterInteractableActivationMode");
        }
        inline app::CharacterInteractableActivationMode__Enum* create() {
            return il2cpp::create_object<app::CharacterInteractableActivationMode__Enum>(get_class());
        }
    } // namespace CharacterInteractableActivationMode__Enum
} // namespace app::classes::types
