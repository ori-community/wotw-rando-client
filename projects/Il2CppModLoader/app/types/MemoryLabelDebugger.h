#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemoryLabelDebugger {
        inline app::MemoryLabelDebugger__Class** type_info = (app::MemoryLabelDebugger__Class**)(modloader::win::memory::resolve_rva(0x04763B78));
        inline app::MemoryLabelDebugger__Class* get_class() {
            return il2cpp::get_class<app::MemoryLabelDebugger__Class>(type_info, "UberShader.optimizations.gc", "MemoryLabelDebugger");
        }
        inline app::MemoryLabelDebugger* create() {
            return il2cpp::create_object<app::MemoryLabelDebugger>(get_class());
        }
    } // namespace MemoryLabelDebugger
} // namespace app::classes::types
