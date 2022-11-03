#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PurchaseItemResult {
        inline app::PurchaseItemResult__Class** type_info = (app::PurchaseItemResult__Class**)(modloader::win::memory::resolve_rva(0x0477E8F8));
        inline app::PurchaseItemResult__Class* get_class() {
            return il2cpp::get_class<app::PurchaseItemResult__Class>(type_info, "PlayFab.ClientModels", "PurchaseItemResult");
        }
        inline app::PurchaseItemResult* create() {
            return il2cpp::create_object<app::PurchaseItemResult>(get_class());
        }
    } // namespace PurchaseItemResult
} // namespace app::classes::types
