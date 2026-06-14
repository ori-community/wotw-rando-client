#pragma once
#include <Modloader/app/structs/StartPurchaseResult.h>
#include <Modloader/app/structs/StartPurchaseResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StartPurchaseResult {
        inline app::StartPurchaseResult__Class** type_info() {
            static app::StartPurchaseResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StartPurchaseResult__Class**)(modloader::win::memory::resolve_rva(0x04740E40));
            }
            return cache;
        }
        inline app::StartPurchaseResult__Class* get_class() {
            return il2cpp::get_class<app::StartPurchaseResult__Class>(type_info(), "PlayFab.ClientModels", "StartPurchaseResult");
        }
        inline app::StartPurchaseResult* create() {
            return il2cpp::create_object<app::StartPurchaseResult>(get_class());
        }
    } // namespace StartPurchaseResult
} // namespace app::classes::types
