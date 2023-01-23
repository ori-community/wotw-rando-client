#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExpressionVisitor__Class.h>
#include <Modloader/app/structs/ExpressionVisitor.h>

namespace app::classes::types {
    namespace ExpressionVisitor {
        namespace {
            inline app::ExpressionVisitor__Class* type_info_ref = nullptr;
        }
        inline app::ExpressionVisitor__Class** type_info = &type_info_ref;
        inline app::ExpressionVisitor__Class* get_class() {
            return il2cpp::get_class<app::ExpressionVisitor__Class>(type_info, "System.Linq.Expressions", "ExpressionVisitor");
        }
        inline app::ExpressionVisitor* create() {
            return il2cpp::create_object<app::ExpressionVisitor>(get_class());
        }
    } // namespace ExpressionVisitor
} // namespace app::classes::types
