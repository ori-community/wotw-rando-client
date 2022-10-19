#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StartPurchaseRequest {
        inline app::StartPurchaseRequest__Class** type_info = (app::StartPurchaseRequest__Class**)(modloader::win::memory::resolve_rva(0x04717928));
        inline app::StartPurchaseRequest__Class* get_class() {
            return il2cpp::get_class<app::StartPurchaseRequest__Class>(type_info, "PlayFab.ClientModels", "StartPurchaseRequest");
        }
        inline app::StartPurchaseRequest* create() {
            return il2cpp::create_object<app::StartPurchaseRequest>(get_class());
        }
    } // namespace StartPurchaseRequest
} // namespace app::classes::types
