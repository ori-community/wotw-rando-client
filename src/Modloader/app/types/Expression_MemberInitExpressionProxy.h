#pragma once
#include <Modloader/app/structs/Expression_MemberInitExpressionProxy.h>
#include <Modloader/app/structs/Expression_MemberInitExpressionProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_MemberInitExpressionProxy {
        inline app::Expression_MemberInitExpressionProxy__Class** type_info() {
            static app::Expression_MemberInitExpressionProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_MemberInitExpressionProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_MemberInitExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_MemberInitExpressionProxy__Class>(type_info(), "System.Linq.Expressions", "Expression", "MemberInitExpressionProxy");
        }
        inline app::Expression_MemberInitExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_MemberInitExpressionProxy>(get_class());
        }
    } // namespace Expression_MemberInitExpressionProxy
} // namespace app::classes::types
