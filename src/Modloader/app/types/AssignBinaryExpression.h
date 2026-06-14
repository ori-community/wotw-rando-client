#pragma once
#include <Modloader/app/structs/AssignBinaryExpression.h>
#include <Modloader/app/structs/AssignBinaryExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssignBinaryExpression {
        inline app::AssignBinaryExpression__Class** type_info() {
            static app::AssignBinaryExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AssignBinaryExpression__Class**)(modloader::win::memory::resolve_rva(0x0478E4B0));
            }
            return cache;
        }
        inline app::AssignBinaryExpression__Class* get_class() {
            return il2cpp::get_class<app::AssignBinaryExpression__Class>(type_info(), "System.Linq.Expressions", "AssignBinaryExpression");
        }
        inline app::AssignBinaryExpression* create() {
            return il2cpp::create_object<app::AssignBinaryExpression>(get_class());
        }
    } // namespace AssignBinaryExpression
} // namespace app::classes::types
