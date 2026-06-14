#pragma once
#include <Modloader/app/structs/ItemPurchaseRequest.h>
#include <Modloader/app/structs/ItemPurchaseRequest__Array.h>
#include <Modloader/app/structs/ItemPurchaseRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ItemPurchaseRequest {
        inline app::ItemPurchaseRequest__Class** type_info() {
            static app::ItemPurchaseRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ItemPurchaseRequest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ItemPurchaseRequest__Class* get_class() {
            return il2cpp::get_class<app::ItemPurchaseRequest__Class>(type_info(), "PlayFab.ClientModels", "ItemPurchaseRequest");
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
