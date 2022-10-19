#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnaryExpression {
        inline app::UnaryExpression__Class** type_info = (app::UnaryExpression__Class**)(modloader::win::memory::resolve_rva(0x04752AD8));
        inline app::UnaryExpression__Class* get_class() {
            return il2cpp::get_class<app::UnaryExpression__Class>(type_info, "System.Linq.Expressions", "UnaryExpression");
        }
        inline app::UnaryExpression* create() {
            return il2cpp::create_object<app::UnaryExpression>(get_class());
        }
    } // namespace UnaryExpression
} // namespace app::classes::types
