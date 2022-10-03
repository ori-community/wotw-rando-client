#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoopExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoopExpression__Class** type_info;
        inline app::LoopExpression__Class* get_class() {
            return il2cpp::get_class<app::LoopExpression__Class>(type_info, "System.Linq.Expressions", "LoopExpression");
        }
        inline app::LoopExpression* create() {
            return il2cpp::create_object<app::LoopExpression>(get_class());
        }
    } // namespace LoopExpression
} // namespace app::classes::types
