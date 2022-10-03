#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlockExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BlockExpression__Class** type_info;
        inline app::BlockExpression__Class* get_class() {
            return il2cpp::get_class<app::BlockExpression__Class>(type_info, "System.Linq.Expressions", "BlockExpression");
        }
        inline app::BlockExpression* create() {
            return il2cpp::create_object<app::BlockExpression>(get_class());
        }
    } // namespace BlockExpression
} // namespace app::classes::types
