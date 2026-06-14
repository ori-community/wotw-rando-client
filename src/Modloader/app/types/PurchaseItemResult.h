#pragma once
#include <Modloader/app/structs/PurchaseItemResult.h>
#include <Modloader/app/structs/PurchaseItemResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PurchaseItemResult {
        inline app::PurchaseItemResult__Class** type_info() {
            static app::PurchaseItemResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PurchaseItemResult__Class**)(modloader::win::memory::resolve_rva(0x0477E8F8));
            }
            return cache;
        }
        inline app::PurchaseItemResult__Class* get_class() {
            return il2cpp::get_class<app::PurchaseItemResult__Class>(type_info(), "PlayFab.ClientModels", "PurchaseItemResult");
        }
        inline app::PurchaseItemResult* create() {
            return il2cpp::create_object<app::PurchaseItemResult>(get_class());
        }
    } // namespace PurchaseItemResult
} // namespace app::classes::types
