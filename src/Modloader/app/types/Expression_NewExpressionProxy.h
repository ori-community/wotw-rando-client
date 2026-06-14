#pragma once
#include <Modloader/app/structs/Expression_NewExpressionProxy.h>
#include <Modloader/app/structs/Expression_NewExpressionProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_NewExpressionProxy {
        inline app::Expression_NewExpressionProxy__Class** type_info() {
            static app::Expression_NewExpressionProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_NewExpressionProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_NewExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_NewExpressionProxy__Class>(type_info(), "System.Linq.Expressions", "Expression", "NewExpressionProxy");
        }
        inline app::Expression_NewExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_NewExpressionProxy>(get_class());
        }
    } // namespace Expression_NewExpressionProxy
} // namespace app::classes::types
