#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Expression_InvocationExpressionProxy {
        namespace {
            app::Expression_InvocationExpressionProxy__Class* type_info_ref = nullptr;
        }
        app::Expression_InvocationExpressionProxy__Class** type_info = &type_info_ref;
        inline app::Expression_InvocationExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_InvocationExpressionProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "InvocationExpressionProxy");
        }
        inline app::Expression_InvocationExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_InvocationExpressionProxy>(get_class());
        }
    } // namespace Expression_InvocationExpressionProxy
} // namespace app::classes::types
