#pragma once
#include <Modloader/app/structs/Expression_SwitchExpressionProxy.h>
#include <Modloader/app/structs/Expression_SwitchExpressionProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_SwitchExpressionProxy {
        inline app::Expression_SwitchExpressionProxy__Class** type_info() {
            static app::Expression_SwitchExpressionProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_SwitchExpressionProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_SwitchExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_SwitchExpressionProxy__Class>(type_info(), "System.Linq.Expressions", "Expression", "SwitchExpressionProxy");
        }
        inline app::Expression_SwitchExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_SwitchExpressionProxy>(get_class());
        }
    } // namespace Expression_SwitchExpressionProxy
} // namespace app::classes::types
