#pragma once
#include <Modloader/app/structs/Expression_ConstantExpressionProxy.h>
#include <Modloader/app/structs/Expression_ConstantExpressionProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_ConstantExpressionProxy {
        inline app::Expression_ConstantExpressionProxy__Class** type_info() {
            static app::Expression_ConstantExpressionProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_ConstantExpressionProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_ConstantExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_ConstantExpressionProxy__Class>(type_info(), "System.Linq.Expressions", "Expression", "ConstantExpressionProxy");
        }
        inline app::Expression_ConstantExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_ConstantExpressionProxy>(get_class());
        }
    } // namespace Expression_ConstantExpressionProxy
} // namespace app::classes::types
