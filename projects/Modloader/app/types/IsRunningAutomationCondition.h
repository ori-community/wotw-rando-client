#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IsRunningAutomationCondition {
        namespace {
            inline app::IsRunningAutomationCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsRunningAutomationCondition__Class** type_info = &type_info_ref;
        inline app::IsRunningAutomationCondition__Class* get_class() {
            return il2cpp::get_class<app::IsRunningAutomationCondition__Class>(type_info, "", "IsRunningAutomationCondition");
        }
        inline app::IsRunningAutomationCondition* create() {
            return il2cpp::create_object<app::IsRunningAutomationCondition>(get_class());
        }
    } // namespace IsRunningAutomationCondition
} // namespace app::classes::types
