#pragma once
#include <Modloader/app/structs/IsInZoneCondition.h>
#include <Modloader/app/structs/IsInZoneCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsInZoneCondition {
        inline app::IsInZoneCondition__Class** type_info() {
            static app::IsInZoneCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsInZoneCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsInZoneCondition__Class* get_class() {
            return il2cpp::get_class<app::IsInZoneCondition__Class>(type_info(), "", "IsInZoneCondition");
        }
        inline app::IsInZoneCondition* create() {
            return il2cpp::create_object<app::IsInZoneCondition>(get_class());
        }
    } // namespace IsInZoneCondition
} // namespace app::classes::types
