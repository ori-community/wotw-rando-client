#pragma once
#include <Modloader/app/structs/ListInitExpression.h>
#include <Modloader/app/structs/ListInitExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListInitExpression {
        inline app::ListInitExpression__Class** type_info() {
            static app::ListInitExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListInitExpression__Class**)(modloader::win::memory::resolve_rva(0x0473A5B0));
            }
            return cache;
        }
        inline app::ListInitExpression__Class* get_class() {
            return il2cpp::get_class<app::ListInitExpression__Class>(type_info(), "System.Linq.Expressions", "ListInitExpression");
        }
        inline app::ListInitExpression* create() {
            return il2cpp::create_object<app::ListInitExpression>(get_class());
        }
    } // namespace ListInitExpression
} // namespace app::classes::types
