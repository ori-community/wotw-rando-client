#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ItemPurchaseRequest {
        namespace {
            app::ItemPurchaseRequest__Class* type_info_ref = nullptr;
        }
        app::ItemPurchaseRequest__Class** type_info = &type_info_ref;
        inline app::ItemPurchaseRequest__Class* get_class() {
            return il2cpp::get_class<app::ItemPurchaseRequest__Class>(type_info, "PlayFab.ClientModels", "ItemPurchaseRequest");
        }
        inline app::ItemPurchaseRequest* create() {
            return il2cpp::create_object<app::ItemPurchaseRequest>(get_class());
        }
        inline app::ItemPurchaseRequest__Array* create_array(int size) {
            return il2cpp::array_new<app::ItemPurchaseRequest__Array>(get_class(), size);
        }
    } // namespace ItemPurchaseRequest
} // namespace app::classes::types
