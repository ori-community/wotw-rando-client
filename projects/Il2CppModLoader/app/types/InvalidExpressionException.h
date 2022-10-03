#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InvalidExpressionException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InvalidExpressionException__Class** type_info;
        inline app::InvalidExpressionException__Class* get_class() {
            return il2cpp::get_class<app::InvalidExpressionException__Class>(type_info, "System.Data", "InvalidExpressionException");
        }
        inline app::InvalidExpressionException* create() {
            return il2cpp::create_object<app::InvalidExpressionException>(get_class());
        }
    } // namespace InvalidExpressionException
} // namespace app::classes::types
