#pragma once
#include <Modloader/app/structs/IndexExpression.h>
#include <Modloader/app/structs/IndexExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IndexExpression {
        inline app::IndexExpression__Class** type_info() {
            static app::IndexExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IndexExpression__Class**)(modloader::win::memory::resolve_rva(0x04729F78));
            }
            return cache;
        }
        inline app::IndexExpression__Class* get_class() {
            return il2cpp::get_class<app::IndexExpression__Class>(type_info(), "System.Linq.Expressions", "IndexExpression");
        }
        inline app::IndexExpression* create() {
            return il2cpp::create_object<app::IndexExpression>(get_class());
        }
    } // namespace IndexExpression
} // namespace app::classes::types
