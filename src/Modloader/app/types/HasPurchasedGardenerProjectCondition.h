#pragma once
#include <Modloader/app/structs/HasPurchasedGardenerProjectCondition.h>
#include <Modloader/app/structs/HasPurchasedGardenerProjectCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HasPurchasedGardenerProjectCondition {
        inline app::HasPurchasedGardenerProjectCondition__Class** type_info() {
            static app::HasPurchasedGardenerProjectCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HasPurchasedGardenerProjectCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HasPurchasedGardenerProjectCondition__Class* get_class() {
            return il2cpp::get_class<app::HasPurchasedGardenerProjectCondition__Class>(type_info(), "", "HasPurchasedGardenerProjectCondition");
        }
        inline app::HasPurchasedGardenerProjectCondition* create() {
            return il2cpp::create_object<app::HasPurchasedGardenerProjectCondition>(get_class());
        }
    } // namespace HasPurchasedGardenerProjectCondition
} // namespace app::classes::types
