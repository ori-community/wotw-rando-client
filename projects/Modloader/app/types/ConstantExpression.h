#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConstantExpression {
        inline app::ConstantExpression__Class** type_info = (app::ConstantExpression__Class**)(modloader::win::memory::resolve_rva(0x0475C370));
        inline app::ConstantExpression__Class* get_class() {
            return il2cpp::get_class<app::ConstantExpression__Class>(type_info, "System.Linq.Expressions", "ConstantExpression");
        }
        inline app::ConstantExpression* create() {
            return il2cpp::create_object<app::ConstantExpression>(get_class());
        }
    } // namespace ConstantExpression
} // namespace app::classes::types
