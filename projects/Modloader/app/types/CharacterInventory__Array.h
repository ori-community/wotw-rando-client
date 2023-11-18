#pragma once
#include <Modloader/app/structs/CharacterInventory__Array.h>
#include <Modloader/app/structs/CharacterInventory__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterInventory__Array {
        inline app::CharacterInventory__Array__Class** type_info() {
            static app::CharacterInventory__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterInventory__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterInventory__Array__Class* get_class() {
            return il2cpp::get_class<app::CharacterInventory__Array__Class>(type_info(), "PlayFab.ClientModels", "CharacterInventory[]");
        }
        inline app::CharacterInventory__Array* create() {
            return il2cpp::create_object<app::CharacterInventory__Array>(get_class());
        }
    } // namespace CharacterInventory__Array
} // namespace app::classes::types
