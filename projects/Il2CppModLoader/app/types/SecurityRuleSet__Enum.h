#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SecurityRuleSet__Enum {
        namespace {
            app::SecurityRuleSet__Enum__Class* type_info_ref = nullptr;
        }
        app::SecurityRuleSet__Enum__Class** type_info = &type_info_ref;
        inline app::SecurityRuleSet__Enum__Class* get_class() {
            return il2cpp::get_class<app::SecurityRuleSet__Enum__Class>(type_info, "System.Security", "SecurityRuleSet");
        }
        inline app::SecurityRuleSet__Enum* create() {
            return il2cpp::create_object<app::SecurityRuleSet__Enum>(get_class());
        }
    } // namespace SecurityRuleSet__Enum
} // namespace app::classes::types
