#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Expression_MemberExpressionProxy {
        namespace {
            app::Expression_MemberExpressionProxy__Class* type_info_ref = nullptr;
        }
        app::Expression_MemberExpressionProxy__Class** type_info = &type_info_ref;
        inline app::Expression_MemberExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_MemberExpressionProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "MemberExpressionProxy");
        }
        inline app::Expression_MemberExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_MemberExpressionProxy>(get_class());
        }
    } // namespace Expression_MemberExpressionProxy
} // namespace app::classes::types
