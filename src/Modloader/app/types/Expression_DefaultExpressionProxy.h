#pragma once
#include <Modloader/app/structs/Expression_DefaultExpressionProxy.h>
#include <Modloader/app/structs/Expression_DefaultExpressionProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_DefaultExpressionProxy {
        inline app::Expression_DefaultExpressionProxy__Class** type_info() {
            static app::Expression_DefaultExpressionProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_DefaultExpressionProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_DefaultExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_DefaultExpressionProxy__Class>(type_info(), "System.Linq.Expressions", "Expression", "DefaultExpressionProxy");
        }
        inline app::Expression_DefaultExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_DefaultExpressionProxy>(get_class());
        }
    } // namespace Expression_DefaultExpressionProxy
} // namespace app::classes::types
