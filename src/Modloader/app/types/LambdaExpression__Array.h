#pragma once
#include <Modloader/app/structs/LambdaExpression__Array.h>
#include <Modloader/app/structs/LambdaExpression__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LambdaExpression__Array {
        inline app::LambdaExpression__Array__Class** type_info() {
            static app::LambdaExpression__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LambdaExpression__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LambdaExpression__Array__Class* get_class() {
            return il2cpp::get_class<app::LambdaExpression__Array__Class>(type_info(), "System.Linq.Expressions", "LambdaExpression[]");
        }
        inline app::LambdaExpression__Array* create() {
            return il2cpp::create_object<app::LambdaExpression__Array>(get_class());
        }
    } // namespace LambdaExpression__Array
} // namespace app::classes::types
