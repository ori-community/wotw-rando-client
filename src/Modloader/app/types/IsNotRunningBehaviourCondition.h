#pragma once
#include <Modloader/app/structs/IsNotRunningBehaviourCondition.h>
#include <Modloader/app/structs/IsNotRunningBehaviourCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsNotRunningBehaviourCondition {
        inline app::IsNotRunningBehaviourCondition__Class** type_info() {
            static app::IsNotRunningBehaviourCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsNotRunningBehaviourCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsNotRunningBehaviourCondition__Class* get_class() {
            return il2cpp::get_class<app::IsNotRunningBehaviourCondition__Class>(type_info(), "", "IsNotRunningBehaviourCondition");
        }
        inline app::IsNotRunningBehaviourCondition* create() {
            return il2cpp::create_object<app::IsNotRunningBehaviourCondition>(get_class());
        }
    } // namespace IsNotRunningBehaviourCondition
} // namespace app::classes::types
