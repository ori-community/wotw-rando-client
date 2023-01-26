#pragma once
#include <Modloader/app/structs/ScopeExpression.h>
#include <Modloader/app/structs/ScopeExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScopeExpression {
        inline app::ScopeExpression__Class** type_info() {
            static app::ScopeExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScopeExpression__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScopeExpression__Class* get_class() {
            return il2cpp::get_class<app::ScopeExpression__Class>(type_info(), "System.Linq.Expressions", "ScopeExpression");
        }
        inline app::ScopeExpression* create() {
            return il2cpp::create_object<app::ScopeExpression>(get_class());
        }
    } // namespace ScopeExpression
} // namespace app::classes::types
