#pragma once
#include <Modloader/app/structs/InstanceMethodCallExpression.h>
#include <Modloader/app/structs/InstanceMethodCallExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstanceMethodCallExpression {
        inline app::InstanceMethodCallExpression__Class** type_info() {
            static app::InstanceMethodCallExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InstanceMethodCallExpression__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InstanceMethodCallExpression__Class* get_class() {
            return il2cpp::get_class<app::InstanceMethodCallExpression__Class>(type_info(), "System.Linq.Expressions", "InstanceMethodCallExpression");
        }
        inline app::InstanceMethodCallExpression* create() {
            return il2cpp::create_object<app::InstanceMethodCallExpression>(get_class());
        }
    } // namespace InstanceMethodCallExpression
} // namespace app::classes::types
