#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypedConstantExpression {
        inline app::TypedConstantExpression__Class** type_info = (app::TypedConstantExpression__Class**)(modloader::win::memory::resolve_rva(0x04742E60));
        inline app::TypedConstantExpression__Class* get_class() {
            return il2cpp::get_class<app::TypedConstantExpression__Class>(type_info, "System.Linq.Expressions", "TypedConstantExpression");
        }
        inline app::TypedConstantExpression* create() {
            return il2cpp::create_object<app::TypedConstantExpression>(get_class());
        }
    } // namespace TypedConstantExpression
} // namespace app::classes::types
