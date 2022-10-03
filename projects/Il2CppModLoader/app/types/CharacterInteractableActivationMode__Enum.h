#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterInteractableActivationMode__Enum {
        namespace {
            app::CharacterInteractableActivationMode__Enum__Class* type_info_ref = nullptr;
        }
        app::CharacterInteractableActivationMode__Enum__Class** type_info = &type_info_ref;
        inline app::CharacterInteractableActivationMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::CharacterInteractableActivationMode__Enum__Class>(type_info, "Moon", "CharacterInteractableActivationMode");
        }
        inline app::CharacterInteractableActivationMode__Enum* create() {
            return il2cpp::create_object<app::CharacterInteractableActivationMode__Enum>(get_class());
        }
    } // namespace CharacterInteractableActivationMode__Enum
} // namespace app::classes::types
