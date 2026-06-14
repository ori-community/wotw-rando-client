#pragma once
#include <Modloader/app/structs/FieldExpression.h>
#include <Modloader/app/structs/FieldExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FieldExpression {
        inline app::FieldExpression__Class** type_info() {
            static app::FieldExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FieldExpression__Class**)(modloader::win::memory::resolve_rva(0x04751340));
            }
            return cache;
        }
        inline app::FieldExpression__Class* get_class() {
            return il2cpp::get_class<app::FieldExpression__Class>(type_info(), "System.Linq.Expressions", "FieldExpression");
        }
        inline app::FieldExpression* create() {
            return il2cpp::create_object<app::FieldExpression>(get_class());
        }
    } // namespace FieldExpression
} // namespace app::classes::types
