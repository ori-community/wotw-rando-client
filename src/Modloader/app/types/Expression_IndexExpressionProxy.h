#pragma once
#include <Modloader/app/structs/Expression_IndexExpressionProxy.h>
#include <Modloader/app/structs/Expression_IndexExpressionProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_IndexExpressionProxy {
        inline app::Expression_IndexExpressionProxy__Class** type_info() {
            static app::Expression_IndexExpressionProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_IndexExpressionProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_IndexExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_IndexExpressionProxy__Class>(type_info(), "System.Linq.Expressions", "Expression", "IndexExpressionProxy");
        }
        inline app::Expression_IndexExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_IndexExpressionProxy>(get_class());
        }
    } // namespace Expression_IndexExpressionProxy
} // namespace app::classes::types
