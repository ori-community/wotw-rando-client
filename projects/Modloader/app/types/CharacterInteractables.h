#pragma once
#include <Modloader/app/structs/CharacterInteractables.h>
#include <Modloader/app/structs/CharacterInteractables__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterInteractables {
        inline app::CharacterInteractables__Class** type_info() {
            static app::CharacterInteractables__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CharacterInteractables__Class**)(modloader::win::memory::resolve_rva(0x047219D0));
            }
            return cache;
        }
        inline app::CharacterInteractables__Class* get_class() {
            return il2cpp::get_class<app::CharacterInteractables__Class>(type_info(), "Moon", "CharacterInteractables");
        }
        inline app::CharacterInteractables* create() {
            return il2cpp::create_object<app::CharacterInteractables>(get_class());
        }
    } // namespace CharacterInteractables
} // namespace app::classes::types
