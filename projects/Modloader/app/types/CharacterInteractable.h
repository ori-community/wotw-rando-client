#pragma once
#include <Modloader/app/structs/CharacterInteractable.h>
#include <Modloader/app/structs/CharacterInteractable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterInteractable {
        inline app::CharacterInteractable__Class** type_info() {
            static app::CharacterInteractable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterInteractable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterInteractable__Class* get_class() {
            return il2cpp::get_class<app::CharacterInteractable__Class>(type_info(), "Moon", "CharacterInteractable");
        }
        inline app::CharacterInteractable* create() {
            return il2cpp::create_object<app::CharacterInteractable>(get_class());
        }
    } // namespace CharacterInteractable
} // namespace app::classes::types
