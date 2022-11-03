#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CleanupDebugger_c {
        inline app::CleanupDebugger_c__Class** type_info = (app::CleanupDebugger_c__Class**)(modloader::win::memory::resolve_rva(0x04733F80));
        inline app::CleanupDebugger_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CleanupDebugger_c__Class>(type_info, "", "CleanupDebugger", "<>c");
        }
        inline app::CleanupDebugger_c* create() {
            return il2cpp::create_object<app::CleanupDebugger_c>(get_class());
        }
    } // namespace CleanupDebugger_c
} // namespace app::classes::types
