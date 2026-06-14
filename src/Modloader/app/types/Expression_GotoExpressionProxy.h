#pragma once
#include <Modloader/app/structs/Expression_GotoExpressionProxy.h>
#include <Modloader/app/structs/Expression_GotoExpressionProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_GotoExpressionProxy {
        inline app::Expression_GotoExpressionProxy__Class** type_info() {
            static app::Expression_GotoExpressionProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_GotoExpressionProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_GotoExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_GotoExpressionProxy__Class>(type_info(), "System.Linq.Expressions", "Expression", "GotoExpressionProxy");
        }
        inline app::Expression_GotoExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_GotoExpressionProxy>(get_class());
        }
    } // namespace Expression_GotoExpressionProxy
} // namespace app::classes::types
