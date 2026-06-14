#pragma once
#include <Modloader/app/structs/PropertyExpression.h>
#include <Modloader/app/structs/PropertyExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PropertyExpression {
        inline app::PropertyExpression__Class** type_info() {
            static app::PropertyExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PropertyExpression__Class**)(modloader::win::memory::resolve_rva(0x0475DBE8));
            }
            return cache;
        }
        inline app::PropertyExpression__Class* get_class() {
            return il2cpp::get_class<app::PropertyExpression__Class>(type_info(), "System.Linq.Expressions", "PropertyExpression");
        }
        inline app::PropertyExpression* create() {
            return il2cpp::create_object<app::PropertyExpression>(get_class());
        }
    } // namespace PropertyExpression
} // namespace app::classes::types
