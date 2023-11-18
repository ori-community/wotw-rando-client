#pragma once
#include <Modloader/app/structs/Expression_ConditionalExpressionProxy.h>
#include <Modloader/app/structs/Expression_ConditionalExpressionProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_ConditionalExpressionProxy {
        inline app::Expression_ConditionalExpressionProxy__Class** type_info() {
            static app::Expression_ConditionalExpressionProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_ConditionalExpressionProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_ConditionalExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_ConditionalExpressionProxy__Class>(type_info(), "System.Linq.Expressions", "Expression", "ConditionalExpressionProxy");
        }
        inline app::Expression_ConditionalExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_ConditionalExpressionProxy>(get_class());
        }
    } // namespace Expression_ConditionalExpressionProxy
} // namespace app::classes::types
