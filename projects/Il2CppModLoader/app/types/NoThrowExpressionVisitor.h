#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NoThrowExpressionVisitor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NoThrowExpressionVisitor__Class** type_info;
        inline app::NoThrowExpressionVisitor__Class* get_class() {
            return il2cpp::get_class<app::NoThrowExpressionVisitor__Class>(type_info, "Newtonsoft.Json.Utilities", "NoThrowExpressionVisitor");
        }
        inline app::NoThrowExpressionVisitor* create() {
            return il2cpp::create_object<app::NoThrowExpressionVisitor>(get_class());
        }
    } // namespace NoThrowExpressionVisitor
} // namespace app::classes::types
