#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PayForPurchaseResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PayForPurchaseResult__Class** type_info;
        inline app::PayForPurchaseResult__Class* get_class() {
            return il2cpp::get_class<app::PayForPurchaseResult__Class>(type_info, "PlayFab.ClientModels", "PayForPurchaseResult");
        }
        inline app::PayForPurchaseResult* create() {
            return il2cpp::create_object<app::PayForPurchaseResult>(get_class());
        }
    } // namespace PayForPurchaseResult
} // namespace app::classes::types
