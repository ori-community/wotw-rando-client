#pragma once
#include <Modloader/app/structs/ValidateAmazonReceiptResult.h>
#include <Modloader/app/structs/ValidateAmazonReceiptResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValidateAmazonReceiptResult {
        inline app::ValidateAmazonReceiptResult__Class** type_info() {
            static app::ValidateAmazonReceiptResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ValidateAmazonReceiptResult__Class**)(modloader::win::memory::resolve_rva(0x04775928));
            }
            return cache;
        }
        inline app::ValidateAmazonReceiptResult__Class* get_class() {
            return il2cpp::get_class<app::ValidateAmazonReceiptResult__Class>(type_info(), "PlayFab.ClientModels", "ValidateAmazonReceiptResult");
        }
        inline app::ValidateAmazonReceiptResult* create() {
            return il2cpp::create_object<app::ValidateAmazonReceiptResult>(get_class());
        }
    } // namespace ValidateAmazonReceiptResult
} // namespace app::classes::types
