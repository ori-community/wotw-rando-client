#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RetaliationRuleHandler_c {
        inline app::RetaliationRuleHandler_c__Class** type_info = (app::RetaliationRuleHandler_c__Class**)(modloader::win::memory::resolve_rva(0x0476D088));
        inline app::RetaliationRuleHandler_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RetaliationRuleHandler_c__Class>(type_info, "", "RetaliationRuleHandler", "<>c");
        }
        inline app::RetaliationRuleHandler_c* create() {
            return il2cpp::create_object<app::RetaliationRuleHandler_c>(get_class());
        }
    } // namespace RetaliationRuleHandler_c
} // namespace app::classes::types
