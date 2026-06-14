#pragma once
#include <Modloader/app/structs/SecurityRuleSet__Enum.h>
#include <Modloader/app/structs/SecurityRuleSet__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SecurityRuleSet__Enum {
        inline app::SecurityRuleSet__Enum__Class** type_info() {
            static app::SecurityRuleSet__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SecurityRuleSet__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SecurityRuleSet__Enum__Class* get_class() {
            return il2cpp::get_class<app::SecurityRuleSet__Enum__Class>(type_info(), "System.Security", "SecurityRuleSet");
        }
        inline app::SecurityRuleSet__Enum* create() {
            return il2cpp::create_object<app::SecurityRuleSet__Enum>(get_class());
        }
    } // namespace SecurityRuleSet__Enum
} // namespace app::classes::types
