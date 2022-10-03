#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterInventory__Array {
        namespace {
            app::CharacterInventory__Array__Class* type_info_ref = nullptr;
        }
        app::CharacterInventory__Array__Class** type_info = &type_info_ref;
        inline app::CharacterInventory__Array__Class* get_class() {
            return il2cpp::get_class<app::CharacterInventory__Array__Class>(type_info, "PlayFab.ClientModels", "CharacterInventory[]");
        }
        inline app::CharacterInventory__Array* create() {
            return il2cpp::create_object<app::CharacterInventory__Array>(get_class());
        }
    } // namespace CharacterInventory__Array
} // namespace app::classes::types
