#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugInfo_DebugInfoComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DebugInfo_DebugInfoComparer__Class** type_info;
        inline app::DebugInfo_DebugInfoComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugInfo_DebugInfoComparer__Class>(type_info, "System.Linq.Expressions.Interpreter", "DebugInfo", "DebugInfoComparer");
        }
        inline app::DebugInfo_DebugInfoComparer* create() {
            return il2cpp::create_object<app::DebugInfo_DebugInfoComparer>(get_class());
        }
    } // namespace DebugInfo_DebugInfoComparer
} // namespace app::classes::types
