#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterInventory {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CharacterInventory__Class** type_info;
        inline app::CharacterInventory__Class* get_class() {
            return il2cpp::get_class<app::CharacterInventory__Class>(type_info, "PlayFab.ClientModels", "CharacterInventory");
        }
        inline app::CharacterInventory* create() {
            return il2cpp::create_object<app::CharacterInventory>(get_class());
        }
        inline app::CharacterInventory__Array* create_array(int size) {
            return il2cpp::array_new<app::CharacterInventory__Array>(get_class(), size);
        }
        inline app::CharacterInventory__Array* create_array(const std::vector<app::CharacterInventory*>& items) {
            return il2cpp::array_new<app::CharacterInventory__Array>(get_class(), items);
        }
    } // namespace CharacterInventory
} // namespace app::classes::types
