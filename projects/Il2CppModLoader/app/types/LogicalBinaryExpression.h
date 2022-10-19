#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LogicalBinaryExpression {
        inline app::LogicalBinaryExpression__Class** type_info = (app::LogicalBinaryExpression__Class**)(modloader::win::memory::resolve_rva(0x0478FED8));
        inline app::LogicalBinaryExpression__Class* get_class() {
            return il2cpp::get_class<app::LogicalBinaryExpression__Class>(type_info, "System.Linq.Expressions", "LogicalBinaryExpression");
        }
        inline app::LogicalBinaryExpression* create() {
            return il2cpp::create_object<app::LogicalBinaryExpression>(get_class());
        }
    } // namespace LogicalBinaryExpression
} // namespace app::classes::types
