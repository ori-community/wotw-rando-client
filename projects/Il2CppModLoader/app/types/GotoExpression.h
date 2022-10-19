#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GotoExpression {
        inline app::GotoExpression__Class** type_info = (app::GotoExpression__Class**)(modloader::win::memory::resolve_rva(0x047623B0));
        inline app::GotoExpression__Class* get_class() {
            return il2cpp::get_class<app::GotoExpression__Class>(type_info, "System.Linq.Expressions", "GotoExpression");
        }
        inline app::GotoExpression* create() {
            return il2cpp::create_object<app::GotoExpression>(get_class());
        }
    } // namespace GotoExpression
} // namespace app::classes::types
