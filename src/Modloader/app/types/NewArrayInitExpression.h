#pragma once
#include <Modloader/app/structs/NewArrayInitExpression.h>
#include <Modloader/app/structs/NewArrayInitExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NewArrayInitExpression {
        inline app::NewArrayInitExpression__Class** type_info() {
            static app::NewArrayInitExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NewArrayInitExpression__Class**)(modloader::win::memory::resolve_rva(0x0476A0A8));
            }
            return cache;
        }
        inline app::NewArrayInitExpression__Class* get_class() {
            return il2cpp::get_class<app::NewArrayInitExpression__Class>(type_info(), "System.Linq.Expressions", "NewArrayInitExpression");
        }
        inline app::NewArrayInitExpression* create() {
            return il2cpp::create_object<app::NewArrayInitExpression>(get_class());
        }
    } // namespace NewArrayInitExpression
} // namespace app::classes::types
