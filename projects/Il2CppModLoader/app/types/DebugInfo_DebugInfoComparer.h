#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugInfo_DebugInfoComparer {
        inline app::DebugInfo_DebugInfoComparer__Class** type_info = (app::DebugInfo_DebugInfoComparer__Class**)(modloader::win::memory::resolve_rva(0x047020C0));
        inline app::DebugInfo_DebugInfoComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugInfo_DebugInfoComparer__Class>(type_info, "System.Linq.Expressions.Interpreter", "DebugInfo", "DebugInfoComparer");
        }
        inline app::DebugInfo_DebugInfoComparer* create() {
            return il2cpp::create_object<app::DebugInfo_DebugInfoComparer>(get_class());
        }
    } // namespace DebugInfo_DebugInfoComparer
} // namespace app::classes::types
