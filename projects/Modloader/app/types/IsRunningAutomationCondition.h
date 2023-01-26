#pragma once
#include <Modloader/app/structs/IsRunningAutomationCondition.h>
#include <Modloader/app/structs/IsRunningAutomationCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsRunningAutomationCondition {
        inline app::IsRunningAutomationCondition__Class** type_info() {
            static app::IsRunningAutomationCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsRunningAutomationCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsRunningAutomationCondition__Class* get_class() {
            return il2cpp::get_class<app::IsRunningAutomationCondition__Class>(type_info(), "", "IsRunningAutomationCondition");
        }
        inline app::IsRunningAutomationCondition* create() {
            return il2cpp::create_object<app::IsRunningAutomationCondition>(get_class());
        }
    } // namespace IsRunningAutomationCondition
} // namespace app::classes::types
