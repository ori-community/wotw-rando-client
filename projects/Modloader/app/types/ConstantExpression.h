#pragma once
#include <Modloader/app/structs/ConstantExpression.h>
#include <Modloader/app/structs/ConstantExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstantExpression {
        inline app::ConstantExpression__Class** type_info() {
            static app::ConstantExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConstantExpression__Class**)(modloader::win::memory::resolve_rva(0x0475C370));
            }
            return cache;
        }
        inline app::ConstantExpression__Class* get_class() {
            return il2cpp::get_class<app::ConstantExpression__Class>(type_info(), "System.Linq.Expressions", "ConstantExpression");
        }
        inline app::ConstantExpression* create() {
            return il2cpp::create_object<app::ConstantExpression>(get_class());
        }
    } // namespace ConstantExpression
} // namespace app::classes::types
