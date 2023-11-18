#pragma once
#include <Modloader/app/structs/AutomationRunType__Enum.h>
#include <Modloader/app/structs/AutomationRunType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AutomationRunType__Enum {
        inline app::AutomationRunType__Enum__Class** type_info() {
            static app::AutomationRunType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AutomationRunType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AutomationRunType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AutomationRunType__Enum__Class>(type_info(), "", "AutomationRunType");
        }
        inline app::AutomationRunType__Enum* create() {
            return il2cpp::create_object<app::AutomationRunType__Enum>(get_class());
        }
    } // namespace AutomationRunType__Enum
} // namespace app::classes::types
