#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RestoreIOSPurchasesRequest {
        inline app::RestoreIOSPurchasesRequest__Class** type_info = (app::RestoreIOSPurchasesRequest__Class**)(modloader::win::memory::resolve_rva(0x047494F0));
        inline app::RestoreIOSPurchasesRequest__Class* get_class() {
            return il2cpp::get_class<app::RestoreIOSPurchasesRequest__Class>(type_info, "PlayFab.ClientModels", "RestoreIOSPurchasesRequest");
        }
        inline app::RestoreIOSPurchasesRequest* create() {
            return il2cpp::create_object<app::RestoreIOSPurchasesRequest>(get_class());
        }
    } // namespace RestoreIOSPurchasesRequest
} // namespace app::classes::types
