#pragma once
#include <Modloader/app/structs/Expression_TryExpressionProxy.h>
#include <Modloader/app/structs/Expression_TryExpressionProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_TryExpressionProxy {
        inline app::Expression_TryExpressionProxy__Class** type_info() {
            static app::Expression_TryExpressionProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_TryExpressionProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_TryExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_TryExpressionProxy__Class>(type_info(), "System.Linq.Expressions", "Expression", "TryExpressionProxy");
        }
        inline app::Expression_TryExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_TryExpressionProxy>(get_class());
        }
    } // namespace Expression_TryExpressionProxy
} // namespace app::classes::types
