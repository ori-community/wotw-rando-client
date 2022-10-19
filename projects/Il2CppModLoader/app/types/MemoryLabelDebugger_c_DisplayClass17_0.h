#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemoryLabelDebugger_c_DisplayClass17_0 {
        inline app::MemoryLabelDebugger_c_DisplayClass17_0__Class** type_info = (app::MemoryLabelDebugger_c_DisplayClass17_0__Class**)(modloader::win::memory::resolve_rva(0x04716778));
        inline app::MemoryLabelDebugger_c_DisplayClass17_0__Class* get_class() {
            return il2cpp::get_nested_class<app::MemoryLabelDebugger_c_DisplayClass17_0__Class>(type_info, "UberShader.optimizations.gc", "MemoryLabelDebugger", "<>c__DisplayClass17_0");
        }
        inline app::MemoryLabelDebugger_c_DisplayClass17_0* create() {
            return il2cpp::create_object<app::MemoryLabelDebugger_c_DisplayClass17_0>(get_class());
        }
    } // namespace MemoryLabelDebugger_c_DisplayClass17_0
} // namespace app::classes::types
