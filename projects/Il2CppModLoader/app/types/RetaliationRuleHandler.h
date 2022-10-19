#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RetaliationRuleHandler {
        inline app::RetaliationRuleHandler__Class** type_info = (app::RetaliationRuleHandler__Class**)(modloader::win::memory::resolve_rva(0x04772A08));
        inline app::RetaliationRuleHandler__Class* get_class() {
            return il2cpp::get_class<app::RetaliationRuleHandler__Class>(type_info, "", "RetaliationRuleHandler");
        }
        inline app::RetaliationRuleHandler* create() {
            return il2cpp::create_object<app::RetaliationRuleHandler>(get_class());
        }
    } // namespace RetaliationRuleHandler
} // namespace app::classes::types
