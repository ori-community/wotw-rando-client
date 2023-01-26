#pragma once
#include <Modloader/app/structs/Expression_ParameterExpressionProxy.h>
#include <Modloader/app/structs/Expression_ParameterExpressionProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_ParameterExpressionProxy {
        inline app::Expression_ParameterExpressionProxy__Class** type_info() {
            static app::Expression_ParameterExpressionProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_ParameterExpressionProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_ParameterExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_ParameterExpressionProxy__Class>(type_info(), "System.Linq.Expressions", "Expression", "ParameterExpressionProxy");
        }
        inline app::Expression_ParameterExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_ParameterExpressionProxy>(get_class());
        }
    } // namespace Expression_ParameterExpressionProxy
} // namespace app::classes::types
