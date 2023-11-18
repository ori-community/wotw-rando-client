#pragma once
#include <Modloader/app/structs/ConfirmPurchaseResult.h>
#include <Modloader/app/structs/ConfirmPurchaseResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConfirmPurchaseResult {
        inline app::ConfirmPurchaseResult__Class** type_info() {
            static app::ConfirmPurchaseResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConfirmPurchaseResult__Class**)(modloader::win::memory::resolve_rva(0x04748538));
            }
            return cache;
        }
        inline app::ConfirmPurchaseResult__Class* get_class() {
            return il2cpp::get_class<app::ConfirmPurchaseResult__Class>(type_info(), "PlayFab.ClientModels", "ConfirmPurchaseResult");
        }
        inline app::ConfirmPurchaseResult* create() {
            return il2cpp::create_object<app::ConfirmPurchaseResult>(get_class());
        }
    } // namespace ConfirmPurchaseResult
} // namespace app::classes::types
