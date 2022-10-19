#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DefaultExpression {
        inline app::DefaultExpression__Class** type_info = (app::DefaultExpression__Class**)(modloader::win::memory::resolve_rva(0x04721A58));
        inline app::DefaultExpression__Class* get_class() {
            return il2cpp::get_class<app::DefaultExpression__Class>(type_info, "System.Linq.Expressions", "DefaultExpression");
        }
        inline app::DefaultExpression* create() {
            return il2cpp::create_object<app::DefaultExpression>(get_class());
        }
    } // namespace DefaultExpression
} // namespace app::classes::types
