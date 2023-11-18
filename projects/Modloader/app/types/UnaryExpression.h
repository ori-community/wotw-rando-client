#pragma once
#include <Modloader/app/structs/UnaryExpression.h>
#include <Modloader/app/structs/UnaryExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnaryExpression {
        inline app::UnaryExpression__Class** type_info() {
            static app::UnaryExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnaryExpression__Class**)(modloader::win::memory::resolve_rva(0x04752AD8));
            }
            return cache;
        }
        inline app::UnaryExpression__Class* get_class() {
            return il2cpp::get_class<app::UnaryExpression__Class>(type_info(), "System.Linq.Expressions", "UnaryExpression");
        }
        inline app::UnaryExpression* create() {
            return il2cpp::create_object<app::UnaryExpression>(get_class());
        }
    } // namespace UnaryExpression
} // namespace app::classes::types
