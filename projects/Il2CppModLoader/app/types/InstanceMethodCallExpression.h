#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstanceMethodCallExpression {
        namespace {
            app::InstanceMethodCallExpression__Class* type_info_ref = nullptr;
        }
        app::InstanceMethodCallExpression__Class** type_info = &type_info_ref;
        inline app::InstanceMethodCallExpression__Class* get_class() {
            return il2cpp::get_class<app::InstanceMethodCallExpression__Class>(type_info, "System.Linq.Expressions", "InstanceMethodCallExpression");
        }
        inline app::InstanceMethodCallExpression* create() {
            return il2cpp::create_object<app::InstanceMethodCallExpression>(get_class());
        }
    } // namespace InstanceMethodCallExpression
} // namespace app::classes::types
