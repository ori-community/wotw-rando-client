#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NewExpression {
        inline app::NewExpression__Class** type_info = (app::NewExpression__Class**)(modloader::win::memory::resolve_rva(0x04764850));
        inline app::NewExpression__Class* get_class() {
            return il2cpp::get_class<app::NewExpression__Class>(type_info, "System.Linq.Expressions", "NewExpression");
        }
        inline app::NewExpression* create() {
            return il2cpp::create_object<app::NewExpression>(get_class());
        }
    } // namespace NewExpression
} // namespace app::classes::types
