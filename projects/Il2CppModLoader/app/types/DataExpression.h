#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataExpression__Class** type_info;
        inline app::DataExpression__Class* get_class() {
            return il2cpp::get_class<app::DataExpression__Class>(type_info, "System.Data", "DataExpression");
        }
        inline app::DataExpression* create() {
            return il2cpp::create_object<app::DataExpression>(get_class());
        }
    } // namespace DataExpression
} // namespace app::classes::types
