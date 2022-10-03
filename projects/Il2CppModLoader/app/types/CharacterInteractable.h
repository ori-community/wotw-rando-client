#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterInteractable {
        namespace {
            app::CharacterInteractable__Class* type_info_ref = nullptr;
        }
        app::CharacterInteractable__Class** type_info = &type_info_ref;
        inline app::CharacterInteractable__Class* get_class() {
            return il2cpp::get_class<app::CharacterInteractable__Class>(type_info, "Moon", "CharacterInteractable");
        }
        inline app::CharacterInteractable* create() {
            return il2cpp::create_object<app::CharacterInteractable>(get_class());
        }
    } // namespace CharacterInteractable
} // namespace app::classes::types
