#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPurchaseResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPurchaseResult__Class** type_info;
        inline app::GetPurchaseResult__Class* get_class() {
            return il2cpp::get_class<app::GetPurchaseResult__Class>(type_info, "PlayFab.ClientModels", "GetPurchaseResult");
        }
        inline app::GetPurchaseResult* create() {
            return il2cpp::create_object<app::GetPurchaseResult>(get_class());
        }
    } // namespace GetPurchaseResult
} // namespace app::classes::types
