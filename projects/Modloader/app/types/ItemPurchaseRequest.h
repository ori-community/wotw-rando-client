#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ItemPurchaseRequest {
        namespace {
            inline app::ItemPurchaseRequest__Class* type_info_ref = nullptr;
        }
        inline app::ItemPurchaseRequest__Class** type_info = &type_info_ref;
        inline app::ItemPurchaseRequest__Class* get_class() {
            return il2cpp::get_class<app::ItemPurchaseRequest__Class>(type_info, "PlayFab.ClientModels", "ItemPurchaseRequest");
        }
        inline app::ItemPurchaseRequest* create() {
            return il2cpp::create_object<app::ItemPurchaseRequest>(get_class());
        }
        inline app::ItemPurchaseRequest__Array* create_array(int size) {
            return il2cpp::array_new<app::ItemPurchaseRequest__Array>(get_class(), size);
        }
        inline app::ItemPurchaseRequest__Array* create_array(const std::vector<app::ItemPurchaseRequest*>& items) {
            return il2cpp::array_new<app::ItemPurchaseRequest__Array>(get_class(), items);
        }
    } // namespace ItemPurchaseRequest
} // namespace app::classes::types
