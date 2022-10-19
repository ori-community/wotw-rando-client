#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LambdaExpression {
        inline app::LambdaExpression__Class** type_info = (app::LambdaExpression__Class**)(modloader::win::memory::resolve_rva(0x04765178));
        inline app::LambdaExpression__Class* get_class() {
            return il2cpp::get_class<app::LambdaExpression__Class>(type_info, "System.Linq.Expressions", "LambdaExpression");
        }
        inline app::LambdaExpression* create() {
            return il2cpp::create_object<app::LambdaExpression>(get_class());
        }
        inline app::LambdaExpression__Array* create_array(int size) {
            return il2cpp::array_new<app::LambdaExpression__Array>(get_class(), size);
        }
        inline app::LambdaExpression__Array* create_array(const std::vector<app::LambdaExpression*>& items) {
            return il2cpp::array_new<app::LambdaExpression__Array>(get_class(), items);
        }
    } // namespace LambdaExpression
} // namespace app::classes::types
