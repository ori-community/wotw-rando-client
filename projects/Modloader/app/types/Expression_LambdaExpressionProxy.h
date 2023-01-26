#pragma once
#include <Modloader/app/structs/Expression_LambdaExpressionProxy.h>
#include <Modloader/app/structs/Expression_LambdaExpressionProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_LambdaExpressionProxy {
        inline app::Expression_LambdaExpressionProxy__Class** type_info() {
            static app::Expression_LambdaExpressionProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_LambdaExpressionProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_LambdaExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_LambdaExpressionProxy__Class>(type_info(), "System.Linq.Expressions", "Expression", "LambdaExpressionProxy");
        }
        inline app::Expression_LambdaExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_LambdaExpressionProxy>(get_class());
        }
    } // namespace Expression_LambdaExpressionProxy
} // namespace app::classes::types
