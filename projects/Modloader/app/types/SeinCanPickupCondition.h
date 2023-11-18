#pragma once
#include <Modloader/app/structs/SeinCanPickupCondition.h>
#include <Modloader/app/structs/SeinCanPickupCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinCanPickupCondition {
        inline app::SeinCanPickupCondition__Class** type_info() {
            static app::SeinCanPickupCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinCanPickupCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinCanPickupCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinCanPickupCondition__Class>(type_info(), "", "SeinCanPickupCondition");
        }
        inline app::SeinCanPickupCondition* create() {
            return il2cpp::create_object<app::SeinCanPickupCondition>(get_class());
        }
    } // namespace SeinCanPickupCondition
} // namespace app::classes::types
