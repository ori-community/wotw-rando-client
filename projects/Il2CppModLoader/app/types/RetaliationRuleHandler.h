#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RetaliationRuleHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RetaliationRuleHandler__Class** type_info;
        inline app::RetaliationRuleHandler__Class* get_class() {
            return il2cpp::get_class<app::RetaliationRuleHandler__Class>(type_info, "", "RetaliationRuleHandler");
        }
        inline app::RetaliationRuleHandler* create() {
            return il2cpp::create_object<app::RetaliationRuleHandler>(get_class());
        }
    } // namespace RetaliationRuleHandler
} // namespace app::classes::types
