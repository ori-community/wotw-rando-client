#pragma once
#include <Modloader/app/structs/SecurityRulesAttribute.h>
#include <Modloader/app/structs/SecurityRulesAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SecurityRulesAttribute {
        inline app::SecurityRulesAttribute__Class** type_info() {
            static app::SecurityRulesAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SecurityRulesAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SecurityRulesAttribute__Class* get_class() {
            return il2cpp::get_class<app::SecurityRulesAttribute__Class>(type_info(), "System.Security", "SecurityRulesAttribute");
        }
        inline app::SecurityRulesAttribute* create() {
            return il2cpp::create_object<app::SecurityRulesAttribute>(get_class());
        }
    } // namespace SecurityRulesAttribute
} // namespace app::classes::types
