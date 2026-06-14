#pragma once
#include <Modloader/app/structs/Expression_NewArrayExpressionProxy.h>
#include <Modloader/app/structs/Expression_NewArrayExpressionProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_NewArrayExpressionProxy {
        inline app::Expression_NewArrayExpressionProxy__Class** type_info() {
            static app::Expression_NewArrayExpressionProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_NewArrayExpressionProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_NewArrayExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_NewArrayExpressionProxy__Class>(type_info(), "System.Linq.Expressions", "Expression", "NewArrayExpressionProxy");
        }
        inline app::Expression_NewArrayExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_NewArrayExpressionProxy>(get_class());
        }
    } // namespace Expression_NewArrayExpressionProxy
} // namespace app::classes::types
