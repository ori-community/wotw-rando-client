#pragma once
#include <Modloader/app/structs/Expression_MemberExpressionProxy.h>
#include <Modloader/app/structs/Expression_MemberExpressionProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_MemberExpressionProxy {
        inline app::Expression_MemberExpressionProxy__Class** type_info() {
            static app::Expression_MemberExpressionProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_MemberExpressionProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_MemberExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_MemberExpressionProxy__Class>(type_info(), "System.Linq.Expressions", "Expression", "MemberExpressionProxy");
        }
        inline app::Expression_MemberExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_MemberExpressionProxy>(get_class());
        }
    } // namespace Expression_MemberExpressionProxy
} // namespace app::classes::types
