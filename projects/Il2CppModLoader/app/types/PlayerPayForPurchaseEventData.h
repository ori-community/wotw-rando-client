#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerPayForPurchaseEventData {
        namespace {
            app::PlayerPayForPurchaseEventData__Class* type_info_ref = nullptr;
        }
        app::PlayerPayForPurchaseEventData__Class** type_info = &type_info_ref;
        inline app::PlayerPayForPurchaseEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerPayForPurchaseEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerPayForPurchaseEventData");
        }
        inline app::PlayerPayForPurchaseEventData* create() {
            return il2cpp::create_object<app::PlayerPayForPurchaseEventData>(get_class());
        }
    } // namespace PlayerPayForPurchaseEventData
} // namespace app::classes::types
