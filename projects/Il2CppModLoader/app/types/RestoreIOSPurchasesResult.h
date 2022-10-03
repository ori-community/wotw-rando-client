#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RestoreIOSPurchasesResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RestoreIOSPurchasesResult__Class** type_info;
        inline app::RestoreIOSPurchasesResult__Class* get_class() {
            return il2cpp::get_class<app::RestoreIOSPurchasesResult__Class>(type_info, "PlayFab.ClientModels", "RestoreIOSPurchasesResult");
        }
        inline app::RestoreIOSPurchasesResult* create() {
            return il2cpp::create_object<app::RestoreIOSPurchasesResult>(get_class());
        }
    } // namespace RestoreIOSPurchasesResult
} // namespace app::classes::types
