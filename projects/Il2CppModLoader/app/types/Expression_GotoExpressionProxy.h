#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Expression_GotoExpressionProxy {
        namespace {
            app::Expression_GotoExpressionProxy__Class* type_info_ref = nullptr;
        }
        app::Expression_GotoExpressionProxy__Class** type_info = &type_info_ref;
        inline app::Expression_GotoExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_GotoExpressionProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "GotoExpressionProxy");
        }
        inline app::Expression_GotoExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_GotoExpressionProxy>(get_class());
        }
    } // namespace Expression_GotoExpressionProxy
} // namespace app::classes::types
