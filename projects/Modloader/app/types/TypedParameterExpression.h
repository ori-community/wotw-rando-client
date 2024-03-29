#pragma once
#include <Modloader/app/structs/TypedParameterExpression.h>
#include <Modloader/app/structs/TypedParameterExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypedParameterExpression {
        inline app::TypedParameterExpression__Class** type_info() {
            static app::TypedParameterExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypedParameterExpression__Class**)(modloader::win::memory::resolve_rva(0x0472CB98));
            }
            return cache;
        }
        inline app::TypedParameterExpression__Class* get_class() {
            return il2cpp::get_class<app::TypedParameterExpression__Class>(type_info(), "System.Linq.Expressions", "TypedParameterExpression");
        }
        inline app::TypedParameterExpression* create() {
            return il2cpp::create_object<app::TypedParameterExpression>(get_class());
        }
    } // namespace TypedParameterExpression
} // namespace app::classes::types
