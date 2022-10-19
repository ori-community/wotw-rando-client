#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterInventory_1 {
        namespace {
            inline app::CharacterInventory_1__Class* type_info_ref = nullptr;
        }
        inline app::CharacterInventory_1__Class** type_info = &type_info_ref;
        inline app::CharacterInventory_1__Class* get_class() {
            return il2cpp::get_class<app::CharacterInventory_1__Class>(type_info, "PlayFab.ServerModels", "CharacterInventory");
        }
        inline app::CharacterInventory_1* create() {
            return il2cpp::create_object<app::CharacterInventory_1>(get_class());
        }
        inline app::CharacterInventory_1__Array* create_array(int size) {
            return il2cpp::array_new<app::CharacterInventory_1__Array>(get_class(), size);
        }
        inline app::CharacterInventory_1__Array* create_array(const std::vector<app::CharacterInventory_1*>& items) {
            return il2cpp::array_new<app::CharacterInventory_1__Array>(get_class(), items);
        }
    } // namespace CharacterInventory_1
} // namespace app::classes::types
