#pragma once
#include <Modloader/app/structs/CharacterInventoryItemAddedEventData.h>
#include <Modloader/app/structs/CharacterInventoryItemAddedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterInventoryItemAddedEventData {
        inline app::CharacterInventoryItemAddedEventData__Class** type_info() {
            static app::CharacterInventoryItemAddedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterInventoryItemAddedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterInventoryItemAddedEventData__Class* get_class() {
            return il2cpp::get_class<app::CharacterInventoryItemAddedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "CharacterInventoryItemAddedEventData");
        }
        inline app::CharacterInventoryItemAddedEventData* create() {
            return il2cpp::create_object<app::CharacterInventoryItemAddedEventData>(get_class());
        }
    } // namespace CharacterInventoryItemAddedEventData
} // namespace app::classes::types
