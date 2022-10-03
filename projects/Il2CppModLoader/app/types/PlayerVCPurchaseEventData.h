#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerVCPurchaseEventData {
        namespace {
            app::PlayerVCPurchaseEventData__Class* type_info_ref = nullptr;
        }
        app::PlayerVCPurchaseEventData__Class** type_info = &type_info_ref;
        inline app::PlayerVCPurchaseEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerVCPurchaseEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerVCPurchaseEventData");
        }
        inline app::PlayerVCPurchaseEventData* create() {
            return il2cpp::create_object<app::PlayerVCPurchaseEventData>(get_class());
        }
    } // namespace PlayerVCPurchaseEventData
} // namespace app::classes::types
