#pragma once
#include <Modloader/app/structs/CharacterInventory.h>
#include <Modloader/app/structs/CharacterInventory__Array.h>
#include <Modloader/app/structs/CharacterInventory__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterInventory {
        inline app::CharacterInventory__Class** type_info() {
            static app::CharacterInventory__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CharacterInventory__Class**)(modloader::win::memory::resolve_rva(0x04730348));
            }
            return cache;
        }
        inline app::CharacterInventory__Class* get_class() {
            return il2cpp::get_class<app::CharacterInventory__Class>(type_info(), "PlayFab.ClientModels", "CharacterInventory");
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
