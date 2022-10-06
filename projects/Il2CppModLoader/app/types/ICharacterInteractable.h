#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICharacterInteractable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICharacterInteractable__Class** type_info;
        inline app::ICharacterInteractable__Class* get_class() {
            return il2cpp::get_class<app::ICharacterInteractable__Class>(type_info, "Moon", "ICharacterInteractable");
        }
        inline app::ICharacterInteractable__Array* create_array(int size) {
            return il2cpp::array_new<app::ICharacterInteractable__Array>(get_class(), size);
        }
        inline app::ICharacterInteractable__Array* create_array(const std::vector<app::ICharacterInteractable*>& items) {
            return il2cpp::array_new<app::ICharacterInteractable__Array>(get_class(), items);
        }
    } // namespace ICharacterInteractable
} // namespace app::classes::types
