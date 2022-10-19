#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PropertyExpression {
        inline app::PropertyExpression__Class** type_info = (app::PropertyExpression__Class**)(modloader::win::memory::resolve_rva(0x0475DBE8));
        inline app::PropertyExpression__Class* get_class() {
            return il2cpp::get_class<app::PropertyExpression__Class>(type_info, "System.Linq.Expressions", "PropertyExpression");
        }
        inline app::PropertyExpression* create() {
            return il2cpp::create_object<app::PropertyExpression>(get_class());
        }
    } // namespace PropertyExpression
} // namespace app::classes::types
