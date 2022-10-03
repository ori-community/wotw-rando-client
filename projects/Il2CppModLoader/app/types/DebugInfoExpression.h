#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugInfoExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DebugInfoExpression__Class** type_info;
        inline app::DebugInfoExpression__Class* get_class() {
            return il2cpp::get_class<app::DebugInfoExpression__Class>(type_info, "System.Linq.Expressions", "DebugInfoExpression");
        }
        inline app::DebugInfoExpression* create() {
            return il2cpp::create_object<app::DebugInfoExpression>(get_class());
        }
    } // namespace DebugInfoExpression
} // namespace app::classes::types
