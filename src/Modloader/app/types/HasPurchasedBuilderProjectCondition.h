#pragma once
#include <Modloader/app/structs/HasPurchasedBuilderProjectCondition.h>
#include <Modloader/app/structs/HasPurchasedBuilderProjectCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HasPurchasedBuilderProjectCondition {
        inline app::HasPurchasedBuilderProjectCondition__Class** type_info() {
            static app::HasPurchasedBuilderProjectCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HasPurchasedBuilderProjectCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HasPurchasedBuilderProjectCondition__Class* get_class() {
            return il2cpp::get_class<app::HasPurchasedBuilderProjectCondition__Class>(type_info(), "", "HasPurchasedBuilderProjectCondition");
        }
        inline app::HasPurchasedBuilderProjectCondition* create() {
            return il2cpp::create_object<app::HasPurchasedBuilderProjectCondition>(get_class());
        }
    } // namespace HasPurchasedBuilderProjectCondition
} // namespace app::classes::types
