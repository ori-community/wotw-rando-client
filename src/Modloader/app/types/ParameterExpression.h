#pragma once
#include <Modloader/app/structs/ParameterExpression.h>
#include <Modloader/app/structs/ParameterExpression__Array.h>
#include <Modloader/app/structs/ParameterExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParameterExpression {
        inline app::ParameterExpression__Class** type_info() {
            static app::ParameterExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ParameterExpression__Class**)(modloader::win::memory::resolve_rva(0x04717110));
            }
            return cache;
        }
        inline app::ParameterExpression__Class* get_class() {
            return il2cpp::get_class<app::ParameterExpression__Class>(type_info(), "System.Linq.Expressions", "ParameterExpression");
        }
        inline app::ParameterExpression* create() {
            return il2cpp::create_object<app::ParameterExpression>(get_class());
        }
        inline app::ParameterExpression__Array* create_array(int size) {
            return il2cpp::array_new<app::ParameterExpression__Array>(get_class(), size);
        }
        inline app::ParameterExpression__Array* create_array(const std::vector<app::ParameterExpression*>& items) {
            return il2cpp::array_new<app::ParameterExpression__Array>(get_class(), items);
        }
    } // namespace ParameterExpression
} // namespace app::classes::types
