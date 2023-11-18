#pragma once
#include <Modloader/app/structs/Expression_RuntimeVariablesExpressionProxy.h>
#include <Modloader/app/structs/Expression_RuntimeVariablesExpressionProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_RuntimeVariablesExpressionProxy {
        inline app::Expression_RuntimeVariablesExpressionProxy__Class** type_info() {
            static app::Expression_RuntimeVariablesExpressionProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_RuntimeVariablesExpressionProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_RuntimeVariablesExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_RuntimeVariablesExpressionProxy__Class>(type_info(), "System.Linq.Expressions", "Expression", "RuntimeVariablesExpressionProxy");
        }
        inline app::Expression_RuntimeVariablesExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_RuntimeVariablesExpressionProxy>(get_class());
        }
    } // namespace Expression_RuntimeVariablesExpressionProxy
} // namespace app::classes::types
