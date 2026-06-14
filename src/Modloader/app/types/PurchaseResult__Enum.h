#pragma once
#include <Modloader/app/structs/PurchaseResult__Enum.h>
#include <Modloader/app/structs/PurchaseResult__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PurchaseResult__Enum {
        inline app::PurchaseResult__Enum__Class** type_info() {
            static app::PurchaseResult__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PurchaseResult__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PurchaseResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::PurchaseResult__Enum__Class>(type_info(), "", "PurchaseResult");
        }
        inline app::PurchaseResult__Enum* create() {
            return il2cpp::create_object<app::PurchaseResult__Enum>(get_class());
        }
    } // namespace PurchaseResult__Enum
} // namespace app::classes::types
