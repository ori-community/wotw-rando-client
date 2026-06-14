#pragma once
#include <Modloader/app/structs/Expression_ListInitExpressionProxy.h>
#include <Modloader/app/structs/Expression_ListInitExpressionProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_ListInitExpressionProxy {
        inline app::Expression_ListInitExpressionProxy__Class** type_info() {
            static app::Expression_ListInitExpressionProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_ListInitExpressionProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_ListInitExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_ListInitExpressionProxy__Class>(type_info(), "System.Linq.Expressions", "Expression", "ListInitExpressionProxy");
        }
        inline app::Expression_ListInitExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_ListInitExpressionProxy>(get_class());
        }
    } // namespace Expression_ListInitExpressionProxy
} // namespace app::classes::types
