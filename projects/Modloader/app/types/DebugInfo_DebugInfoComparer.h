#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DebugInfo_DebugInfoComparer__Class.h>
#include <Modloader/app/structs/DebugInfo_DebugInfoComparer.h>

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
