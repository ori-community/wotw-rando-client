#pragma once
#include <Modloader/app/structs/IsTrialCondition.h>
#include <Modloader/app/structs/IsTrialCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsTrialCondition {
        inline app::IsTrialCondition__Class** type_info() {
            static app::IsTrialCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsTrialCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsTrialCondition__Class* get_class() {
            return il2cpp::get_class<app::IsTrialCondition__Class>(type_info(), "", "IsTrialCondition");
        }
        inline app::IsTrialCondition* create() {
            return il2cpp::create_object<app::IsTrialCondition>(get_class());
        }
    } // namespace IsTrialCondition
} // namespace app::classes::types
