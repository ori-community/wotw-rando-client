#pragma once
#include <Modloader/app/structs/IsPositionInZoneCondition.h>
#include <Modloader/app/structs/IsPositionInZoneCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsPositionInZoneCondition {
        inline app::IsPositionInZoneCondition__Class** type_info() {
            static app::IsPositionInZoneCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsPositionInZoneCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsPositionInZoneCondition__Class* get_class() {
            return il2cpp::get_class<app::IsPositionInZoneCondition__Class>(type_info(), "Moon.BehaviourSystem", "IsPositionInZoneCondition");
        }
        inline app::IsPositionInZoneCondition* create() {
            return il2cpp::create_object<app::IsPositionInZoneCondition>(get_class());
        }
    } // namespace IsPositionInZoneCondition
} // namespace app::classes::types
