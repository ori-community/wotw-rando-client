#pragma once
#include <Modloader/app/structs/RestoreIOSPurchasesResult.h>
#include <Modloader/app/structs/RestoreIOSPurchasesResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RestoreIOSPurchasesResult {
        inline app::RestoreIOSPurchasesResult__Class** type_info() {
            static app::RestoreIOSPurchasesResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RestoreIOSPurchasesResult__Class**)(modloader::win::memory::resolve_rva(0x047638D8));
            }
            return cache;
        }
        inline app::RestoreIOSPurchasesResult__Class* get_class() {
            return il2cpp::get_class<app::RestoreIOSPurchasesResult__Class>(type_info(), "PlayFab.ClientModels", "RestoreIOSPurchasesResult");
        }
        inline app::RestoreIOSPurchasesResult* create() {
            return il2cpp::create_object<app::RestoreIOSPurchasesResult>(get_class());
        }
    } // namespace RestoreIOSPurchasesResult
} // namespace app::classes::types
