#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ValidateGooglePlayPurchaseRequest__Class.h>
#include <Modloader/app/structs/ValidateGooglePlayPurchaseRequest.h>

namespace app::classes::types {
    namespace ValidateGooglePlayPurchaseRequest {
        inline app::ValidateGooglePlayPurchaseRequest__Class** type_info = (app::ValidateGooglePlayPurchaseRequest__Class**)(modloader::win::memory::resolve_rva(0x047801B8));
        inline app::ValidateGooglePlayPurchaseRequest__Class* get_class() {
            return il2cpp::get_class<app::ValidateGooglePlayPurchaseRequest__Class>(type_info, "PlayFab.ClientModels", "ValidateGooglePlayPurchaseRequest");
        }
        inline app::ValidateGooglePlayPurchaseRequest* create() {
            return il2cpp::create_object<app::ValidateGooglePlayPurchaseRequest>(get_class());
        }
    } // namespace ValidateGooglePlayPurchaseRequest
} // namespace app::classes::types
