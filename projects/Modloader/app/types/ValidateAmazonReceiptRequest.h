#pragma once
#include <Modloader/app/structs/ValidateAmazonReceiptRequest.h>
#include <Modloader/app/structs/ValidateAmazonReceiptRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValidateAmazonReceiptRequest {
        inline app::ValidateAmazonReceiptRequest__Class** type_info() {
            static app::ValidateAmazonReceiptRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ValidateAmazonReceiptRequest__Class**)(modloader::win::memory::resolve_rva(0x0474C418));
            }
            return cache;
        }
        inline app::ValidateAmazonReceiptRequest__Class* get_class() {
            return il2cpp::get_class<app::ValidateAmazonReceiptRequest__Class>(type_info(), "PlayFab.ClientModels", "ValidateAmazonReceiptRequest");
        }
        inline app::ValidateAmazonReceiptRequest* create() {
            return il2cpp::create_object<app::ValidateAmazonReceiptRequest>(get_class());
        }
    } // namespace ValidateAmazonReceiptRequest
} // namespace app::classes::types
