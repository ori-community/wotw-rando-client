#pragma once
#include <Modloader/app/structs/GetPickupOnCondition.h>
#include <Modloader/app/structs/GetPickupOnCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPickupOnCondition {
        inline app::GetPickupOnCondition__Class** type_info() {
            static app::GetPickupOnCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GetPickupOnCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GetPickupOnCondition__Class* get_class() {
            return il2cpp::get_class<app::GetPickupOnCondition__Class>(type_info(), "", "GetPickupOnCondition");
        }
        inline app::GetPickupOnCondition* create() {
            return il2cpp::create_object<app::GetPickupOnCondition>(get_class());
        }
    } // namespace GetPickupOnCondition
} // namespace app::classes::types
