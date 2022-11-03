#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FieldExpression {
        inline app::FieldExpression__Class** type_info = (app::FieldExpression__Class**)(modloader::win::memory::resolve_rva(0x04751340));
        inline app::FieldExpression__Class* get_class() {
            return il2cpp::get_class<app::FieldExpression__Class>(type_info, "System.Linq.Expressions", "FieldExpression");
        }
        inline app::FieldExpression* create() {
            return il2cpp::create_object<app::FieldExpression>(get_class());
        }
    } // namespace FieldExpression
} // namespace app::classes::types
