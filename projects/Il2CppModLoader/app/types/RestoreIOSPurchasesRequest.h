#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RestoreIOSPurchasesRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RestoreIOSPurchasesRequest__Class** type_info;
        inline app::RestoreIOSPurchasesRequest__Class* get_class() {
            return il2cpp::get_class<app::RestoreIOSPurchasesRequest__Class>(type_info, "PlayFab.ClientModels", "RestoreIOSPurchasesRequest");
        }
        inline app::RestoreIOSPurchasesRequest* create() {
            return il2cpp::create_object<app::RestoreIOSPurchasesRequest>(get_class());
        }
    } // namespace RestoreIOSPurchasesRequest
} // namespace app::classes::types
