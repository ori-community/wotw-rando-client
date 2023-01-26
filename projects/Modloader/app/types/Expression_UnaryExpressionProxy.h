#pragma once
#include <Modloader/app/structs/Expression_UnaryExpressionProxy.h>
#include <Modloader/app/structs/Expression_UnaryExpressionProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_UnaryExpressionProxy {
        inline app::Expression_UnaryExpressionProxy__Class** type_info() {
            static app::Expression_UnaryExpressionProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_UnaryExpressionProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_UnaryExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_UnaryExpressionProxy__Class>(type_info(), "System.Linq.Expressions", "Expression", "UnaryExpressionProxy");
        }
        inline app::Expression_UnaryExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_UnaryExpressionProxy>(get_class());
        }
    } // namespace Expression_UnaryExpressionProxy
} // namespace app::classes::types
