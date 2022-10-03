#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExpressionParser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExpressionParser__Class** type_info;
        inline app::ExpressionParser__Class* get_class() {
            return il2cpp::get_class<app::ExpressionParser__Class>(type_info, "System.Data", "ExpressionParser");
        }
        inline app::ExpressionParser* create() {
            return il2cpp::create_object<app::ExpressionParser>(get_class());
        }
    } // namespace ExpressionParser
} // namespace app::classes::types
