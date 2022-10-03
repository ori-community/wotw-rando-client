#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Expression_UnaryExpressionProxy {
        namespace {
            app::Expression_UnaryExpressionProxy__Class* type_info_ref = nullptr;
        }
        app::Expression_UnaryExpressionProxy__Class** type_info = &type_info_ref;
        inline app::Expression_UnaryExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_UnaryExpressionProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "UnaryExpressionProxy");
        }
        inline app::Expression_UnaryExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_UnaryExpressionProxy>(get_class());
        }
    } // namespace Expression_UnaryExpressionProxy
} // namespace app::classes::types
