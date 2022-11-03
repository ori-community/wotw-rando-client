#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPurchaseResult {
        inline app::GetPurchaseResult__Class** type_info = (app::GetPurchaseResult__Class**)(modloader::win::memory::resolve_rva(0x047802F0));
        inline app::GetPurchaseResult__Class* get_class() {
            return il2cpp::get_class<app::GetPurchaseResult__Class>(type_info, "PlayFab.ClientModels", "GetPurchaseResult");
        }
        inline app::GetPurchaseResult* create() {
            return il2cpp::create_object<app::GetPurchaseResult>(get_class());
        }
    } // namespace GetPurchaseResult
} // namespace app::classes::types
