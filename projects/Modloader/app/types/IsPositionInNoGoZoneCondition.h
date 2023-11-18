#pragma once
#include <Modloader/app/structs/IsPositionInNoGoZoneCondition.h>
#include <Modloader/app/structs/IsPositionInNoGoZoneCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsPositionInNoGoZoneCondition {
        inline app::IsPositionInNoGoZoneCondition__Class** type_info() {
            static app::IsPositionInNoGoZoneCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsPositionInNoGoZoneCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsPositionInNoGoZoneCondition__Class* get_class() {
            return il2cpp::get_class<app::IsPositionInNoGoZoneCondition__Class>(type_info(), "Moon.BehaviourSystem", "IsPositionInNoGoZoneCondition");
        }
        inline app::IsPositionInNoGoZoneCondition* create() {
            return il2cpp::create_object<app::IsPositionInNoGoZoneCondition>(get_class());
        }
    } // namespace IsPositionInNoGoZoneCondition
} // namespace app::classes::types
