#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExpressionStringBuilder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExpressionStringBuilder__Class** type_info;
        inline app::ExpressionStringBuilder__Class* get_class() {
            return il2cpp::get_class<app::ExpressionStringBuilder__Class>(type_info, "System.Linq.Expressions", "ExpressionStringBuilder");
        }
        inline app::ExpressionStringBuilder* create() {
            return il2cpp::create_object<app::ExpressionStringBuilder>(get_class());
        }
    } // namespace ExpressionStringBuilder
} // namespace app::classes::types
