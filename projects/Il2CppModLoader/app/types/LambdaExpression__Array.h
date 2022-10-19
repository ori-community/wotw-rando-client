#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LambdaExpression__Array {
        namespace {
            inline app::LambdaExpression__Array__Class* type_info_ref = nullptr;
        }
        inline app::LambdaExpression__Array__Class** type_info = &type_info_ref;
        inline app::LambdaExpression__Array__Class* get_class() {
            return il2cpp::get_class<app::LambdaExpression__Array__Class>(type_info, "System.Linq.Expressions", "LambdaExpression[]");
        }
        inline app::LambdaExpression__Array* create() {
            return il2cpp::create_object<app::LambdaExpression__Array>(get_class());
        }
    } // namespace LambdaExpression__Array
} // namespace app::classes::types
