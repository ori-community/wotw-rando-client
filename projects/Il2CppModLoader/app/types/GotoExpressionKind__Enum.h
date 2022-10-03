#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GotoExpressionKind__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GotoExpressionKind__Enum__Class** type_info;
        inline app::GotoExpressionKind__Enum__Class* get_class() {
            return il2cpp::get_class<app::GotoExpressionKind__Enum__Class>(type_info, "System.Linq.Expressions", "GotoExpressionKind");
        }
        inline app::GotoExpressionKind__Enum* create() {
            return il2cpp::create_object<app::GotoExpressionKind__Enum>(get_class());
        }
    } // namespace GotoExpressionKind__Enum
} // namespace app::classes::types
