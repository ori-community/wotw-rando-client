#pragma once
#include <Modloader/app/structs/GetPurchaseResult.h>
#include <Modloader/app/structs/GetPurchaseResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPurchaseResult {
        inline app::GetPurchaseResult__Class** type_info() {
            static app::GetPurchaseResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPurchaseResult__Class**)(modloader::win::memory::resolve_rva(0x047802F0));
            }
            return cache;
        }
        inline app::GetPurchaseResult__Class* get_class() {
            return il2cpp::get_class<app::GetPurchaseResult__Class>(type_info(), "PlayFab.ClientModels", "GetPurchaseResult");
        }
        inline app::GetPurchaseResult* create() {
            return il2cpp::create_object<app::GetPurchaseResult>(get_class());
        }
    } // namespace GetPurchaseResult
} // namespace app::classes::types
