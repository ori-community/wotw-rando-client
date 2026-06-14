#pragma once
#include <Modloader/app/structs/Expression_MethodCallExpressionProxy.h>
#include <Modloader/app/structs/Expression_MethodCallExpressionProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_MethodCallExpressionProxy {
        inline app::Expression_MethodCallExpressionProxy__Class** type_info() {
            static app::Expression_MethodCallExpressionProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_MethodCallExpressionProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_MethodCallExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_MethodCallExpressionProxy__Class>(type_info(), "System.Linq.Expressions", "Expression", "MethodCallExpressionProxy");
        }
        inline app::Expression_MethodCallExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_MethodCallExpressionProxy>(get_class());
        }
    } // namespace Expression_MethodCallExpressionProxy
} // namespace app::classes::types
