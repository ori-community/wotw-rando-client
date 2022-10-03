#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Expression_ConstantExpressionProxy {
        namespace {
            app::Expression_ConstantExpressionProxy__Class* type_info_ref = nullptr;
        }
        app::Expression_ConstantExpressionProxy__Class** type_info = &type_info_ref;
        inline app::Expression_ConstantExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_ConstantExpressionProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "ConstantExpressionProxy");
        }
        inline app::Expression_ConstantExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_ConstantExpressionProxy>(get_class());
        }
    } // namespace Expression_ConstantExpressionProxy
} // namespace app::classes::types
