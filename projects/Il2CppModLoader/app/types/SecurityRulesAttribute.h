#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SecurityRulesAttribute {
        namespace {
            app::SecurityRulesAttribute__Class* type_info_ref = nullptr;
        }
        app::SecurityRulesAttribute__Class** type_info = &type_info_ref;
        inline app::SecurityRulesAttribute__Class* get_class() {
            return il2cpp::get_class<app::SecurityRulesAttribute__Class>(type_info, "System.Security", "SecurityRulesAttribute");
        }
        inline app::SecurityRulesAttribute* create() {
            return il2cpp::create_object<app::SecurityRulesAttribute>(get_class());
        }
    } // namespace SecurityRulesAttribute
} // namespace app::classes::types
