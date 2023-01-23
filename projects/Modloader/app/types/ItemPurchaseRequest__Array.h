#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ItemPurchaseRequest__Array__Class.h>
#include <Modloader/app/structs/ItemPurchaseRequest__Array.h>

namespace app::classes::types {
    namespace ItemPurchaseRequest__Array {
        namespace {
            inline app::ItemPurchaseRequest__Array__Class* type_info_ref = nullptr;
        }
        inline app::ItemPurchaseRequest__Array__Class** type_info = &type_info_ref;
        inline app::ItemPurchaseRequest__Array__Class* get_class() {
            return il2cpp::get_class<app::ItemPurchaseRequest__Array__Class>(type_info, "PlayFab.ClientModels", "ItemPurchaseRequest[]");
        }
        inline app::ItemPurchaseRequest__Array* create() {
            return il2cpp::create_object<app::ItemPurchaseRequest__Array>(get_class());
        }
    } // namespace ItemPurchaseRequest__Array
} // namespace app::classes::types
