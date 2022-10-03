#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Expression_LambdaExpressionProxy {
        namespace {
            app::Expression_LambdaExpressionProxy__Class* type_info_ref = nullptr;
        }
        app::Expression_LambdaExpressionProxy__Class** type_info = &type_info_ref;
        inline app::Expression_LambdaExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_LambdaExpressionProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "LambdaExpressionProxy");
        }
        inline app::Expression_LambdaExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_LambdaExpressionProxy>(get_class());
        }
    } // namespace Expression_LambdaExpressionProxy
} // namespace app::classes::types
