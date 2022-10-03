#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerInventoryItemAddedEventData {
        namespace {
            app::PlayerInventoryItemAddedEventData__Class* type_info_ref = nullptr;
        }
        app::PlayerInventoryItemAddedEventData__Class** type_info = &type_info_ref;
        inline app::PlayerInventoryItemAddedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerInventoryItemAddedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerInventoryItemAddedEventData");
        }
        inline app::PlayerInventoryItemAddedEventData* create() {
            return il2cpp::create_object<app::PlayerInventoryItemAddedEventData>(get_class());
        }
    } // namespace PlayerInventoryItemAddedEventData
} // namespace app::classes::types
