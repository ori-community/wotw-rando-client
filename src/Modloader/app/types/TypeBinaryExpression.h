#pragma once
#include <Modloader/app/structs/TypeBinaryExpression.h>
#include <Modloader/app/structs/TypeBinaryExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeBinaryExpression {
        inline app::TypeBinaryExpression__Class** type_info() {
            static app::TypeBinaryExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeBinaryExpression__Class**)(modloader::win::memory::resolve_rva(0x0475CA78));
            }
            return cache;
        }
        inline app::TypeBinaryExpression__Class* get_class() {
            return il2cpp::get_class<app::TypeBinaryExpression__Class>(type_info(), "System.Linq.Expressions", "TypeBinaryExpression");
        }
        inline app::TypeBinaryExpression* create() {
            return il2cpp::create_object<app::TypeBinaryExpression>(get_class());
        }
    } // namespace TypeBinaryExpression
} // namespace app::classes::types
