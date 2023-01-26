#pragma once
#include <Modloader/app/structs/IsTargetInAreaOfTypeCondition.h>
#include <Modloader/app/structs/IsTargetInAreaOfTypeCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsTargetInAreaOfTypeCondition {
        inline app::IsTargetInAreaOfTypeCondition__Class** type_info() {
            static app::IsTargetInAreaOfTypeCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsTargetInAreaOfTypeCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsTargetInAreaOfTypeCondition__Class* get_class() {
            return il2cpp::get_class<app::IsTargetInAreaOfTypeCondition__Class>(type_info(), "Moon.BehaviourSystem", "IsTargetInAreaOfTypeCondition");
        }
        inline app::IsTargetInAreaOfTypeCondition* create() {
            return il2cpp::create_object<app::IsTargetInAreaOfTypeCondition>(get_class());
        }
    } // namespace IsTargetInAreaOfTypeCondition
} // namespace app::classes::types
