#pragma once
#include <Modloader/app/structs/Expression_LoopExpressionProxy.h>
#include <Modloader/app/structs/Expression_LoopExpressionProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_LoopExpressionProxy {
        inline app::Expression_LoopExpressionProxy__Class** type_info() {
            static app::Expression_LoopExpressionProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_LoopExpressionProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_LoopExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_LoopExpressionProxy__Class>(type_info(), "System.Linq.Expressions", "Expression", "LoopExpressionProxy");
        }
        inline app::Expression_LoopExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_LoopExpressionProxy>(get_class());
        }
    } // namespace Expression_LoopExpressionProxy
} // namespace app::classes::types
