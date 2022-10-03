#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterInventoryItemAddedEventData {
        namespace {
            app::CharacterInventoryItemAddedEventData__Class* type_info_ref = nullptr;
        }
        app::CharacterInventoryItemAddedEventData__Class** type_info = &type_info_ref;
        inline app::CharacterInventoryItemAddedEventData__Class* get_class() {
            return il2cpp::get_class<app::CharacterInventoryItemAddedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "CharacterInventoryItemAddedEventData");
        }
        inline app::CharacterInventoryItemAddedEventData* create() {
            return il2cpp::create_object<app::CharacterInventoryItemAddedEventData>(get_class());
        }
    } // namespace CharacterInventoryItemAddedEventData
} // namespace app::classes::types
