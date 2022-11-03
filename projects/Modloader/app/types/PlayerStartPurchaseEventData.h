#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerStartPurchaseEventData {
        namespace {
            inline app::PlayerStartPurchaseEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerStartPurchaseEventData__Class** type_info = &type_info_ref;
        inline app::PlayerStartPurchaseEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerStartPurchaseEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerStartPurchaseEventData");
        }
        inline app::PlayerStartPurchaseEventData* create() {
            return il2cpp::create_object<app::PlayerStartPurchaseEventData>(get_class());
        }
    } // namespace PlayerStartPurchaseEventData
} // namespace app::classes::types
