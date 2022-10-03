#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Expression_MethodCallExpressionProxy {
        namespace {
            app::Expression_MethodCallExpressionProxy__Class* type_info_ref = nullptr;
        }
        app::Expression_MethodCallExpressionProxy__Class** type_info = &type_info_ref;
        inline app::Expression_MethodCallExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_MethodCallExpressionProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "MethodCallExpressionProxy");
        }
        inline app::Expression_MethodCallExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_MethodCallExpressionProxy>(get_class());
        }
    } // namespace Expression_MethodCallExpressionProxy
} // namespace app::classes::types
