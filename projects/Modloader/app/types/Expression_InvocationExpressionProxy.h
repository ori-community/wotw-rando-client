#pragma once
#include <Modloader/app/structs/Expression_InvocationExpressionProxy.h>
#include <Modloader/app/structs/Expression_InvocationExpressionProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_InvocationExpressionProxy {
        inline app::Expression_InvocationExpressionProxy__Class** type_info() {
            static app::Expression_InvocationExpressionProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_InvocationExpressionProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_InvocationExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_InvocationExpressionProxy__Class>(type_info(), "System.Linq.Expressions", "Expression", "InvocationExpressionProxy");
        }
        inline app::Expression_InvocationExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_InvocationExpressionProxy>(get_class());
        }
    } // namespace Expression_InvocationExpressionProxy
} // namespace app::classes::types
