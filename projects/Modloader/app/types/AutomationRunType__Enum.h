#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AutomationRunType__Enum__Class.h>
#include <Modloader/app/structs/AutomationRunType__Enum.h>

namespace app::classes::types {
    namespace AutomationRunType__Enum {
        namespace {
            inline app::AutomationRunType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AutomationRunType__Enum__Class** type_info = &type_info_ref;
        inline app::AutomationRunType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AutomationRunType__Enum__Class>(type_info, "", "AutomationRunType");
        }
        inline app::AutomationRunType__Enum* create() {
            return il2cpp::create_object<app::AutomationRunType__Enum>(get_class());
        }
    } // namespace AutomationRunType__Enum
} // namespace app::classes::types
