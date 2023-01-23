#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MemoryManagerDebugger_MemoryManagerDataCache__Class.h>
#include <Modloader/app/structs/MemoryManagerDebugger_MemoryManagerDataCache.h>

namespace app::classes::types {
    namespace MemoryManagerDebugger_MemoryManagerDataCache {
        inline app::MemoryManagerDebugger_MemoryManagerDataCache__Class** type_info = (app::MemoryManagerDebugger_MemoryManagerDataCache__Class**)(modloader::win::memory::resolve_rva(0x04734B90));
        inline app::MemoryManagerDebugger_MemoryManagerDataCache__Class* get_class() {
            return il2cpp::get_nested_class<app::MemoryManagerDebugger_MemoryManagerDataCache__Class>(type_info, "UberShader.optimizations.gc", "MemoryManagerDebugger", "MemoryManagerDataCache");
        }
        inline app::MemoryManagerDebugger_MemoryManagerDataCache* create() {
            return il2cpp::create_object<app::MemoryManagerDebugger_MemoryManagerDataCache>(get_class());
        }
    } // namespace MemoryManagerDebugger_MemoryManagerDataCache
} // namespace app::classes::types
