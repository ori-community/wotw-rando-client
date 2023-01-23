#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ValidateAmazonReceiptRequest__Class.h>
#include <Modloader/app/structs/ValidateAmazonReceiptRequest.h>

namespace app::classes::types {
    namespace ValidateAmazonReceiptRequest {
        inline app::ValidateAmazonReceiptRequest__Class** type_info = (app::ValidateAmazonReceiptRequest__Class**)(modloader::win::memory::resolve_rva(0x0474C418));
        inline app::ValidateAmazonReceiptRequest__Class* get_class() {
            return il2cpp::get_class<app::ValidateAmazonReceiptRequest__Class>(type_info, "PlayFab.ClientModels", "ValidateAmazonReceiptRequest");
        }
        inline app::ValidateAmazonReceiptRequest* create() {
            return il2cpp::create_object<app::ValidateAmazonReceiptRequest>(get_class());
        }
    } // namespace ValidateAmazonReceiptRequest
} // namespace app::classes::types
