#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Expression_TryExpressionProxy {
        namespace {
            app::Expression_TryExpressionProxy__Class* type_info_ref = nullptr;
        }
        app::Expression_TryExpressionProxy__Class** type_info = &type_info_ref;
        inline app::Expression_TryExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_TryExpressionProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "TryExpressionProxy");
        }
        inline app::Expression_TryExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_TryExpressionProxy>(get_class());
        }
    } // namespace Expression_TryExpressionProxy
} // namespace app::classes::types
