#pragma once
#include <Modloader/app/structs/HasPurchasedMapPinCondition.h>
#include <Modloader/app/structs/HasPurchasedMapPinCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HasPurchasedMapPinCondition {
        inline app::HasPurchasedMapPinCondition__Class** type_info() {
            static app::HasPurchasedMapPinCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HasPurchasedMapPinCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HasPurchasedMapPinCondition__Class* get_class() {
            return il2cpp::get_class<app::HasPurchasedMapPinCondition__Class>(type_info(), "", "HasPurchasedMapPinCondition");
        }
        inline app::HasPurchasedMapPinCondition* create() {
            return il2cpp::create_object<app::HasPurchasedMapPinCondition>(get_class());
        }
    } // namespace HasPurchasedMapPinCondition
} // namespace app::classes::types
