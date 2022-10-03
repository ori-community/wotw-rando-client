#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RetaliationRuleHandler_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RetaliationRuleHandler_c__Class** type_info;
        inline app::RetaliationRuleHandler_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RetaliationRuleHandler_c__Class>(type_info, "", "RetaliationRuleHandler", "<>c");
        }
        inline app::RetaliationRuleHandler_c* create() {
            return il2cpp::create_object<app::RetaliationRuleHandler_c>(get_class());
        }
    } // namespace RetaliationRuleHandler_c
} // namespace app::classes::types
