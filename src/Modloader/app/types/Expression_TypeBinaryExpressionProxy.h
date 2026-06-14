#pragma once
#include <Modloader/app/structs/Expression_TypeBinaryExpressionProxy.h>
#include <Modloader/app/structs/Expression_TypeBinaryExpressionProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_TypeBinaryExpressionProxy {
        inline app::Expression_TypeBinaryExpressionProxy__Class** type_info() {
            static app::Expression_TypeBinaryExpressionProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_TypeBinaryExpressionProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_TypeBinaryExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_TypeBinaryExpressionProxy__Class>(type_info(), "System.Linq.Expressions", "Expression", "TypeBinaryExpressionProxy");
        }
        inline app::Expression_TypeBinaryExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_TypeBinaryExpressionProxy>(get_class());
        }
    } // namespace Expression_TypeBinaryExpressionProxy
} // namespace app::classes::types
