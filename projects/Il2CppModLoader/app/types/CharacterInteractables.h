#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterInteractables {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CharacterInteractables__Class** type_info;
        inline app::CharacterInteractables__Class* get_class() {
            return il2cpp::get_class<app::CharacterInteractables__Class>(type_info, "Moon", "CharacterInteractables");
        }
        inline app::CharacterInteractables* create() {
            return il2cpp::create_object<app::CharacterInteractables>(get_class());
        }
    } // namespace CharacterInteractables
} // namespace app::classes::types
