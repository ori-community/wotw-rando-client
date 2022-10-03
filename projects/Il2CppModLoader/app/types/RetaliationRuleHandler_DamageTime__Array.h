#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RetaliationRuleHandler_DamageTime__Array {
        namespace {
            app::RetaliationRuleHandler_DamageTime__Array__Class* type_info_ref = nullptr;
        }
        app::RetaliationRuleHandler_DamageTime__Array__Class** type_info = &type_info_ref;
        inline app::RetaliationRuleHandler_DamageTime__Array__Class* get_class() {
            return il2cpp::get_class<app::RetaliationRuleHandler_DamageTime__Array__Class>(type_info, "", "RetaliationRuleHandler+DamageTime[]");
        }
        inline app::RetaliationRuleHandler_DamageTime__Array* create() {
            return il2cpp::create_object<app::RetaliationRuleHandler_DamageTime__Array>(get_class());
        }
    } // namespace RetaliationRuleHandler_DamageTime__Array
} // namespace app::classes::types
