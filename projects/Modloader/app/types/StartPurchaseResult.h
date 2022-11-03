#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StartPurchaseResult {
        inline app::StartPurchaseResult__Class** type_info = (app::StartPurchaseResult__Class**)(modloader::win::memory::resolve_rva(0x04740E40));
        inline app::StartPurchaseResult__Class* get_class() {
            return il2cpp::get_class<app::StartPurchaseResult__Class>(type_info, "PlayFab.ClientModels", "StartPurchaseResult");
        }
        inline app::StartPurchaseResult* create() {
            return il2cpp::create_object<app::StartPurchaseResult>(get_class());
        }
    } // namespace StartPurchaseResult
} // namespace app::classes::types
