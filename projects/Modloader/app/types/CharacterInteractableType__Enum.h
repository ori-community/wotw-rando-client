#pragma once
#include <Modloader/app/structs/CharacterInteractableType__Enum.h>
#include <Modloader/app/structs/CharacterInteractableType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterInteractableType__Enum {
        inline app::CharacterInteractableType__Enum__Class** type_info() {
            static app::CharacterInteractableType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CharacterInteractableType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476E3F0));
            }
            return cache;
        }
        inline app::CharacterInteractableType__Enum__Class* get_class() {
            return il2cpp::get_class<app::CharacterInteractableType__Enum__Class>(type_info(), "Moon", "CharacterInteractableType");
        }
        inline app::CharacterInteractableType__Enum* create() {
            return il2cpp::create_object<app::CharacterInteractableType__Enum>(get_class());
        }
    } // namespace CharacterInteractableType__Enum
} // namespace app::classes::types
