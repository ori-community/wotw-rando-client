#pragma once
#include <Modloader/app/structs/LeftTriggerRightTriggerCycle.h>
#include <Modloader/app/structs/LeftTriggerRightTriggerCycle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeftTriggerRightTriggerCycle {
        inline app::LeftTriggerRightTriggerCycle__Class** type_info() {
            static app::LeftTriggerRightTriggerCycle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeftTriggerRightTriggerCycle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeftTriggerRightTriggerCycle__Class* get_class() {
            return il2cpp::get_class<app::LeftTriggerRightTriggerCycle__Class>(type_info(), "", "LeftTriggerRightTriggerCycle");
        }
        inline app::LeftTriggerRightTriggerCycle* create() {
            return il2cpp::create_object<app::LeftTriggerRightTriggerCycle>(get_class());
        }
    } // namespace LeftTriggerRightTriggerCycle
} // namespace app::classes::types
