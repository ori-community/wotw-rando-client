#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Expression_NewArrayExpressionProxy {
        namespace {
            app::Expression_NewArrayExpressionProxy__Class* type_info_ref = nullptr;
        }
        app::Expression_NewArrayExpressionProxy__Class** type_info = &type_info_ref;
        inline app::Expression_NewArrayExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_NewArrayExpressionProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "NewArrayExpressionProxy");
        }
        inline app::Expression_NewArrayExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_NewArrayExpressionProxy>(get_class());
        }
    } // namespace Expression_NewArrayExpressionProxy
} // namespace app::classes::types
