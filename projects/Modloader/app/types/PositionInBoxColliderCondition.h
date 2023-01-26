#pragma once
#include <Modloader/app/structs/PositionInBoxColliderCondition.h>
#include <Modloader/app/structs/PositionInBoxColliderCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PositionInBoxColliderCondition {
        inline app::PositionInBoxColliderCondition__Class** type_info() {
            static app::PositionInBoxColliderCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PositionInBoxColliderCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PositionInBoxColliderCondition__Class* get_class() {
            return il2cpp::get_class<app::PositionInBoxColliderCondition__Class>(type_info(), "Moon.BehaviourSystem", "PositionInBoxColliderCondition");
        }
        inline app::PositionInBoxColliderCondition* create() {
            return il2cpp::create_object<app::PositionInBoxColliderCondition>(get_class());
        }
    } // namespace PositionInBoxColliderCondition
} // namespace app::classes::types
