#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GotoExpressionKind__Enum {
        inline app::GotoExpressionKind__Enum__Class** type_info = (app::GotoExpressionKind__Enum__Class**)(modloader::win::memory::resolve_rva(0x04747B18));
        inline app::GotoExpressionKind__Enum__Class* get_class() {
            return il2cpp::get_class<app::GotoExpressionKind__Enum__Class>(type_info, "System.Linq.Expressions", "GotoExpressionKind");
        }
        inline app::GotoExpressionKind__Enum* create() {
            return il2cpp::create_object<app::GotoExpressionKind__Enum>(get_class());
        }
    } // namespace GotoExpressionKind__Enum
} // namespace app::classes::types
