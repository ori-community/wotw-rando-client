#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ValidateGooglePlayPurchaseResult {
        inline app::ValidateGooglePlayPurchaseResult__Class** type_info = (app::ValidateGooglePlayPurchaseResult__Class**)(modloader::win::memory::resolve_rva(0x0470B408));
        inline app::ValidateGooglePlayPurchaseResult__Class* get_class() {
            return il2cpp::get_class<app::ValidateGooglePlayPurchaseResult__Class>(type_info, "PlayFab.ClientModels", "ValidateGooglePlayPurchaseResult");
        }
        inline app::ValidateGooglePlayPurchaseResult* create() {
            return il2cpp::create_object<app::ValidateGooglePlayPurchaseResult>(get_class());
        }
    } // namespace ValidateGooglePlayPurchaseResult
} // namespace app::classes::types
