#pragma once
#include <Modloader/app/structs/LambdaExpression.h>
#include <Modloader/app/structs/LambdaExpression__Array.h>
#include <Modloader/app/structs/LambdaExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LambdaExpression {
        inline app::LambdaExpression__Class** type_info() {
            static app::LambdaExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LambdaExpression__Class**)(modloader::win::memory::resolve_rva(0x04765178));
            }
            return cache;
        }
        inline app::LambdaExpression__Class* get_class() {
            return il2cpp::get_class<app::LambdaExpression__Class>(type_info(), "System.Linq.Expressions", "LambdaExpression");
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
