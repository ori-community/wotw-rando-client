#pragma once
#include <Modloader/app/structs/ItemPurchaseRequest__Array.h>
#include <Modloader/app/structs/ItemPurchaseRequest__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ItemPurchaseRequest__Array {
        inline app::ItemPurchaseRequest__Array__Class** type_info() {
            static app::ItemPurchaseRequest__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ItemPurchaseRequest__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ItemPurchaseRequest__Array__Class* get_class() {
            return il2cpp::get_class<app::ItemPurchaseRequest__Array__Class>(type_info(), "PlayFab.ClientModels", "ItemPurchaseRequest[]");
        }
        inline app::ItemPurchaseRequest__Array* create() {
            return il2cpp::create_object<app::ItemPurchaseRequest__Array>(get_class());
        }
    } // namespace ItemPurchaseRequest__Array
} // namespace app::classes::types
