#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExpressionVisitor {
        namespace {
            app::ExpressionVisitor__Class* type_info_ref = nullptr;
        }
        app::ExpressionVisitor__Class** type_info = &type_info_ref;
        inline app::ExpressionVisitor__Class* get_class() {
            return il2cpp::get_class<app::ExpressionVisitor__Class>(type_info, "System.Linq.Expressions", "ExpressionVisitor");
        }
        inline app::ExpressionVisitor* create() {
            return il2cpp::create_object<app::ExpressionVisitor>(get_class());
        }
    } // namespace ExpressionVisitor
} // namespace app::classes::types
