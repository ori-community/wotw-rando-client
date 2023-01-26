#pragma once
#include <Modloader/app/structs/ConditionalExpression.h>
#include <Modloader/app/structs/ConditionalExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConditionalExpression {
        inline app::ConditionalExpression__Class** type_info() {
            static app::ConditionalExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConditionalExpression__Class**)(modloader::win::memory::resolve_rva(0x04763B70));
            }
            return cache;
        }
        inline app::ConditionalExpression__Class* get_class() {
            return il2cpp::get_class<app::ConditionalExpression__Class>(type_info(), "System.Linq.Expressions", "ConditionalExpression");
        }
        inline app::ConditionalExpression* create() {
            return il2cpp::create_object<app::ConditionalExpression>(get_class());
        }
    } // namespace ConditionalExpression
} // namespace app::classes::types
