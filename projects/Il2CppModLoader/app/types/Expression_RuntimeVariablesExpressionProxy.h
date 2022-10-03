#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Expression_RuntimeVariablesExpressionProxy {
        namespace {
            app::Expression_RuntimeVariablesExpressionProxy__Class* type_info_ref = nullptr;
        }
        app::Expression_RuntimeVariablesExpressionProxy__Class** type_info = &type_info_ref;
        inline app::Expression_RuntimeVariablesExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_RuntimeVariablesExpressionProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "RuntimeVariablesExpressionProxy");
        }
        inline app::Expression_RuntimeVariablesExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_RuntimeVariablesExpressionProxy>(get_class());
        }
    } // namespace Expression_RuntimeVariablesExpressionProxy
} // namespace app::classes::types
