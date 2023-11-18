#pragma once
#include <Modloader/app/structs/PlayerInventoryItemAddedEventData.h>
#include <Modloader/app/structs/PlayerInventoryItemAddedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerInventoryItemAddedEventData {
        inline app::PlayerInventoryItemAddedEventData__Class** type_info() {
            static app::PlayerInventoryItemAddedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerInventoryItemAddedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerInventoryItemAddedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerInventoryItemAddedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerInventoryItemAddedEventData");
        }
        inline app::PlayerInventoryItemAddedEventData* create() {
            return il2cpp::create_object<app::PlayerInventoryItemAddedEventData>(get_class());
        }
    } // namespace PlayerInventoryItemAddedEventData
} // namespace app::classes::types
