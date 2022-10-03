#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NewArrayBoundsExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NewArrayBoundsExpression__Class** type_info;
        inline app::NewArrayBoundsExpression__Class* get_class() {
            return il2cpp::get_class<app::NewArrayBoundsExpression__Class>(type_info, "System.Linq.Expressions", "NewArrayBoundsExpression");
        }
        inline app::NewArrayBoundsExpression* create() {
            return il2cpp::create_object<app::NewArrayBoundsExpression>(get_class());
        }
    } // namespace NewArrayBoundsExpression
} // namespace app::classes::types
