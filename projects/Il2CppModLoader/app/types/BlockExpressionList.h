#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlockExpressionList {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BlockExpressionList__Class** type_info;
        inline app::BlockExpressionList__Class* get_class() {
            return il2cpp::get_class<app::BlockExpressionList__Class>(type_info, "System.Linq.Expressions", "BlockExpressionList");
        }
        inline app::BlockExpressionList* create() {
            return il2cpp::create_object<app::BlockExpressionList>(get_class());
        }
    } // namespace BlockExpressionList
} // namespace app::classes::types
