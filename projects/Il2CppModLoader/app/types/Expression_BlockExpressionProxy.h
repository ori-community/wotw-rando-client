#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Expression_BlockExpressionProxy {
        namespace {
            app::Expression_BlockExpressionProxy__Class* type_info_ref = nullptr;
        }
        app::Expression_BlockExpressionProxy__Class** type_info = &type_info_ref;
        inline app::Expression_BlockExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_BlockExpressionProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "BlockExpressionProxy");
        }
        inline app::Expression_BlockExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_BlockExpressionProxy>(get_class());
        }
    } // namespace Expression_BlockExpressionProxy
} // namespace app::classes::types
