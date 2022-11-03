#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AssignBinaryExpression {
        inline app::AssignBinaryExpression__Class** type_info = (app::AssignBinaryExpression__Class**)(modloader::win::memory::resolve_rva(0x0478E4B0));
        inline app::AssignBinaryExpression__Class* get_class() {
            return il2cpp::get_class<app::AssignBinaryExpression__Class>(type_info, "System.Linq.Expressions", "AssignBinaryExpression");
        }
        inline app::AssignBinaryExpression* create() {
            return il2cpp::create_object<app::AssignBinaryExpression>(get_class());
        }
    } // namespace AssignBinaryExpression
} // namespace app::classes::types
