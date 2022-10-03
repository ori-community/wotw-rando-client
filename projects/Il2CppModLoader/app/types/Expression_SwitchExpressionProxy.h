#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Expression_SwitchExpressionProxy {
        namespace {
            app::Expression_SwitchExpressionProxy__Class* type_info_ref = nullptr;
        }
        app::Expression_SwitchExpressionProxy__Class** type_info = &type_info_ref;
        inline app::Expression_SwitchExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_SwitchExpressionProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "SwitchExpressionProxy");
        }
        inline app::Expression_SwitchExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_SwitchExpressionProxy>(get_class());
        }
    } // namespace Expression_SwitchExpressionProxy
} // namespace app::classes::types
