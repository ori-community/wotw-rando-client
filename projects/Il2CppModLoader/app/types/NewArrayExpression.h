#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NewArrayExpression {
        inline app::NewArrayExpression__Class** type_info = (app::NewArrayExpression__Class**)(modloader::win::memory::resolve_rva(0x0476AA30));
        inline app::NewArrayExpression__Class* get_class() {
            return il2cpp::get_class<app::NewArrayExpression__Class>(type_info, "System.Linq.Expressions", "NewArrayExpression");
        }
        inline app::NewArrayExpression* create() {
            return il2cpp::create_object<app::NewArrayExpression>(get_class());
        }
    } // namespace NewArrayExpression
} // namespace app::classes::types
