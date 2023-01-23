#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharacterInventoryItemAddedEventData__Class.h>
#include <Modloader/app/structs/CharacterInventoryItemAddedEventData.h>

namespace app::classes::types {
    namespace CharacterInventoryItemAddedEventData {
        namespace {
            inline app::CharacterInventoryItemAddedEventData__Class* type_info_ref = nullptr;
        }
        inline app::CharacterInventoryItemAddedEventData__Class** type_info = &type_info_ref;
        inline app::CharacterInventoryItemAddedEventData__Class* get_class() {
            return il2cpp::get_class<app::CharacterInventoryItemAddedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "CharacterInventoryItemAddedEventData");
        }
        inline app::CharacterInventoryItemAddedEventData* create() {
            return il2cpp::create_object<app::CharacterInventoryItemAddedEventData>(get_class());
        }
    } // namespace CharacterInventoryItemAddedEventData
} // namespace app::classes::types
