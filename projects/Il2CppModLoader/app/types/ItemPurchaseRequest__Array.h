#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ItemPurchaseRequest__Array {
        namespace {
            app::ItemPurchaseRequest__Array__Class* type_info_ref = nullptr;
        }
        app::ItemPurchaseRequest__Array__Class** type_info = &type_info_ref;
        inline app::ItemPurchaseRequest__Array__Class* get_class() {
            return il2cpp::get_class<app::ItemPurchaseRequest__Array__Class>(type_info, "PlayFab.ClientModels", "ItemPurchaseRequest[]");
        }
        inline app::ItemPurchaseRequest__Array* create() {
            return il2cpp::create_object<app::ItemPurchaseRequest__Array>(get_class());
        }
    } // namespace ItemPurchaseRequest__Array
} // namespace app::classes::types
