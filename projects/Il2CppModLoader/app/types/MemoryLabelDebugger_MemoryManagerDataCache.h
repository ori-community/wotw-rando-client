#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemoryLabelDebugger_MemoryManagerDataCache {
        inline app::MemoryLabelDebugger_MemoryManagerDataCache__Class** type_info = (app::MemoryLabelDebugger_MemoryManagerDataCache__Class**)(modloader::win::memory::resolve_rva(0x0478B3C8));
        inline app::MemoryLabelDebugger_MemoryManagerDataCache__Class* get_class() {
            return il2cpp::get_nested_class<app::MemoryLabelDebugger_MemoryManagerDataCache__Class>(type_info, "UberShader.optimizations.gc", "MemoryLabelDebugger", "MemoryManagerDataCache");
        }
        inline app::MemoryLabelDebugger_MemoryManagerDataCache* create() {
            return il2cpp::create_object<app::MemoryLabelDebugger_MemoryManagerDataCache>(get_class());
        }
    } // namespace MemoryLabelDebugger_MemoryManagerDataCache
} // namespace app::classes::types
