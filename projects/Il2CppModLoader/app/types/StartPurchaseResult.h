#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StartPurchaseResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StartPurchaseResult__Class** type_info;
        inline app::StartPurchaseResult__Class* get_class() {
            return il2cpp::get_class<app::StartPurchaseResult__Class>(type_info, "PlayFab.ClientModels", "StartPurchaseResult");
        }
        inline app::StartPurchaseResult* create() {
            return il2cpp::create_object<app::StartPurchaseResult>(get_class());
        }
    } // namespace StartPurchaseResult
} // namespace app::classes::types
