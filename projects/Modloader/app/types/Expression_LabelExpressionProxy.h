#pragma once
#include <Modloader/app/structs/Expression_LabelExpressionProxy.h>
#include <Modloader/app/structs/Expression_LabelExpressionProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_LabelExpressionProxy {
        inline app::Expression_LabelExpressionProxy__Class** type_info() {
            static app::Expression_LabelExpressionProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_LabelExpressionProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_LabelExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_LabelExpressionProxy__Class>(type_info(), "System.Linq.Expressions", "Expression", "LabelExpressionProxy");
        }
        inline app::Expression_LabelExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_LabelExpressionProxy>(get_class());
        }
    } // namespace Expression_LabelExpressionProxy
} // namespace app::classes::types
