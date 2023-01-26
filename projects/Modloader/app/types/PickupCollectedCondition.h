#pragma once
#include <Modloader/app/structs/PickupCollectedCondition.h>
#include <Modloader/app/structs/PickupCollectedCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PickupCollectedCondition {
        inline app::PickupCollectedCondition__Class** type_info() {
            static app::PickupCollectedCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PickupCollectedCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PickupCollectedCondition__Class* get_class() {
            return il2cpp::get_class<app::PickupCollectedCondition__Class>(type_info(), "", "PickupCollectedCondition");
        }
        inline app::PickupCollectedCondition* create() {
            return il2cpp::create_object<app::PickupCollectedCondition>(get_class());
        }
    } // namespace PickupCollectedCondition
} // namespace app::classes::types
