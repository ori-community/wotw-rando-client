#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Expression_SwitchCaseProxy {
        namespace {
            inline app::Expression_SwitchCaseProxy__Class* type_info_ref = nullptr;
        }
        inline app::Expression_SwitchCaseProxy__Class** type_info = &type_info_ref;
        inline app::Expression_SwitchCaseProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_SwitchCaseProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "SwitchCaseProxy");
        }
        inline app::Expression_SwitchCaseProxy* create() {
            return il2cpp::create_object<app::Expression_SwitchCaseProxy>(get_class());
        }
    } // namespace Expression_SwitchCaseProxy
} // namespace app::classes::types
