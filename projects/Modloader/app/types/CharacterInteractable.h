#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterInteractable {
        namespace {
            inline app::CharacterInteractable__Class* type_info_ref = nullptr;
        }
        inline app::CharacterInteractable__Class** type_info = &type_info_ref;
        inline app::CharacterInteractable__Class* get_class() {
            return il2cpp::get_class<app::CharacterInteractable__Class>(type_info, "Moon", "CharacterInteractable");
        }
        inline app::CharacterInteractable* create() {
            return il2cpp::create_object<app::CharacterInteractable>(get_class());
        }
    } // namespace CharacterInteractable
} // namespace app::classes::types
