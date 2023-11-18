#pragma once
#include <Modloader/app/structs/ExpressionVisitor.h>
#include <Modloader/app/structs/ExpressionVisitor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExpressionVisitor {
        inline app::ExpressionVisitor__Class** type_info() {
            static app::ExpressionVisitor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExpressionVisitor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExpressionVisitor__Class* get_class() {
            return il2cpp::get_class<app::ExpressionVisitor__Class>(type_info(), "System.Linq.Expressions", "ExpressionVisitor");
        }
        inline app::ExpressionVisitor* create() {
            return il2cpp::create_object<app::ExpressionVisitor>(get_class());
        }
    } // namespace ExpressionVisitor
} // namespace app::classes::types
