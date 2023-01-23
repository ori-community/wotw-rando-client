#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LeftTriggerRightTriggerCycle__Class.h>
#include <Modloader/app/structs/LeftTriggerRightTriggerCycle.h>

namespace app::classes::types {
    namespace LeftTriggerRightTriggerCycle {
        namespace {
            inline app::LeftTriggerRightTriggerCycle__Class* type_info_ref = nullptr;
        }
        inline app::LeftTriggerRightTriggerCycle__Class** type_info = &type_info_ref;
        inline app::LeftTriggerRightTriggerCycle__Class* get_class() {
            return il2cpp::get_class<app::LeftTriggerRightTriggerCycle__Class>(type_info, "", "LeftTriggerRightTriggerCycle");
        }
        inline app::LeftTriggerRightTriggerCycle* create() {
            return il2cpp::create_object<app::LeftTriggerRightTriggerCycle>(get_class());
        }
    } // namespace LeftTriggerRightTriggerCycle
} // namespace app::classes::types
