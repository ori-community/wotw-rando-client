#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Expression_LabelExpressionProxy {
        namespace {
            app::Expression_LabelExpressionProxy__Class* type_info_ref = nullptr;
        }
        app::Expression_LabelExpressionProxy__Class** type_info = &type_info_ref;
        inline app::Expression_LabelExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_LabelExpressionProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "LabelExpressionProxy");
        }
        inline app::Expression_LabelExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_LabelExpressionProxy>(get_class());
        }
    } // namespace Expression_LabelExpressionProxy
} // namespace app::classes::types
