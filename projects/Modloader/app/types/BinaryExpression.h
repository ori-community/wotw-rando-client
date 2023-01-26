#pragma once
#include <Modloader/app/structs/BinaryExpression.h>
#include <Modloader/app/structs/BinaryExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinaryExpression {
        inline app::BinaryExpression__Class** type_info() {
            static app::BinaryExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BinaryExpression__Class**)(modloader::win::memory::resolve_rva(0x0470D788));
            }
            return cache;
        }
        inline app::BinaryExpression__Class* get_class() {
            return il2cpp::get_class<app::BinaryExpression__Class>(type_info(), "System.Linq.Expressions", "BinaryExpression");
        }
        inline app::BinaryExpression* create() {
            return il2cpp::create_object<app::BinaryExpression>(get_class());
        }
    } // namespace BinaryExpression
} // namespace app::classes::types
