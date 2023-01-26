#pragma once
#include <Modloader/app/structs/MethodBinaryExpression.h>
#include <Modloader/app/structs/MethodBinaryExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MethodBinaryExpression {
        inline app::MethodBinaryExpression__Class** type_info() {
            static app::MethodBinaryExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MethodBinaryExpression__Class**)(modloader::win::memory::resolve_rva(0x04716FA8));
            }
            return cache;
        }
        inline app::MethodBinaryExpression__Class* get_class() {
            return il2cpp::get_class<app::MethodBinaryExpression__Class>(type_info(), "System.Linq.Expressions", "MethodBinaryExpression");
        }
        inline app::MethodBinaryExpression* create() {
            return il2cpp::create_object<app::MethodBinaryExpression>(get_class());
        }
    } // namespace MethodBinaryExpression
} // namespace app::classes::types
