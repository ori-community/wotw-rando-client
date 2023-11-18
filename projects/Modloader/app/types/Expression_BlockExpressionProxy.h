#pragma once
#include <Modloader/app/structs/Expression_BlockExpressionProxy.h>
#include <Modloader/app/structs/Expression_BlockExpressionProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_BlockExpressionProxy {
        inline app::Expression_BlockExpressionProxy__Class** type_info() {
            static app::Expression_BlockExpressionProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_BlockExpressionProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_BlockExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_BlockExpressionProxy__Class>(type_info(), "System.Linq.Expressions", "Expression", "BlockExpressionProxy");
        }
        inline app::Expression_BlockExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_BlockExpressionProxy>(get_class());
        }
    } // namespace Expression_BlockExpressionProxy
} // namespace app::classes::types
