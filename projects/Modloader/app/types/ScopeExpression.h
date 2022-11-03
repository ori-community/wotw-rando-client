#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScopeExpression {
        namespace {
            inline app::ScopeExpression__Class* type_info_ref = nullptr;
        }
        inline app::ScopeExpression__Class** type_info = &type_info_ref;
        inline app::ScopeExpression__Class* get_class() {
            return il2cpp::get_class<app::ScopeExpression__Class>(type_info, "System.Linq.Expressions", "ScopeExpression");
        }
        inline app::ScopeExpression* create() {
            return il2cpp::create_object<app::ScopeExpression>(get_class());
        }
    } // namespace ScopeExpression
} // namespace app::classes::types
