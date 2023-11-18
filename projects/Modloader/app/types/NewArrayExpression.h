#pragma once
#include <Modloader/app/structs/NewArrayExpression.h>
#include <Modloader/app/structs/NewArrayExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NewArrayExpression {
        inline app::NewArrayExpression__Class** type_info() {
            static app::NewArrayExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NewArrayExpression__Class**)(modloader::win::memory::resolve_rva(0x0476AA30));
            }
            return cache;
        }
        inline app::NewArrayExpression__Class* get_class() {
            return il2cpp::get_class<app::NewArrayExpression__Class>(type_info(), "System.Linq.Expressions", "NewArrayExpression");
        }
        inline app::NewArrayExpression* create() {
            return il2cpp::create_object<app::NewArrayExpression>(get_class());
        }
    } // namespace NewArrayExpression
} // namespace app::classes::types
