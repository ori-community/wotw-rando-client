#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RetaliationRuleHandler_DamageTime {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RetaliationRuleHandler_DamageTime__Class** type_info;
        inline app::RetaliationRuleHandler_DamageTime__Class* get_class() {
            return il2cpp::get_nested_class<app::RetaliationRuleHandler_DamageTime__Class>(type_info, "", "RetaliationRuleHandler", "DamageTime");
        }
        inline app::RetaliationRuleHandler_DamageTime* create() {
            return il2cpp::create_object<app::RetaliationRuleHandler_DamageTime>(get_class());
        }
        inline app::RetaliationRuleHandler_DamageTime__Array* create_array(int size) {
            return il2cpp::array_new<app::RetaliationRuleHandler_DamageTime__Array>(get_class(), size);
        }
        inline app::RetaliationRuleHandler_DamageTime__Array* create_array(const std::vector<app::RetaliationRuleHandler_DamageTime*>& items) {
            return il2cpp::array_new<app::RetaliationRuleHandler_DamageTime__Array>(get_class(), items);
        }
    } // namespace RetaliationRuleHandler_DamageTime
} // namespace app::classes::types
