#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RestoreIOSPurchasesResult__Class.h>
#include <Modloader/app/structs/RestoreIOSPurchasesResult.h>

namespace app::classes::types {
    namespace RestoreIOSPurchasesResult {
        inline app::RestoreIOSPurchasesResult__Class** type_info = (app::RestoreIOSPurchasesResult__Class**)(modloader::win::memory::resolve_rva(0x047638D8));
        inline app::RestoreIOSPurchasesResult__Class* get_class() {
            return il2cpp::get_class<app::RestoreIOSPurchasesResult__Class>(type_info, "PlayFab.ClientModels", "RestoreIOSPurchasesResult");
        }
        inline app::RestoreIOSPurchasesResult* create() {
            return il2cpp::create_object<app::RestoreIOSPurchasesResult>(get_class());
        }
    } // namespace RestoreIOSPurchasesResult
} // namespace app::classes::types
