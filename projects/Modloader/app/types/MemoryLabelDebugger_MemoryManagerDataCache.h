#pragma once
#include <Modloader/app/structs/MemoryLabelDebugger_MemoryManagerDataCache.h>
#include <Modloader/app/structs/MemoryLabelDebugger_MemoryManagerDataCache__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemoryLabelDebugger_MemoryManagerDataCache {
        inline app::MemoryLabelDebugger_MemoryManagerDataCache__Class** type_info() {
            static app::MemoryLabelDebugger_MemoryManagerDataCache__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MemoryLabelDebugger_MemoryManagerDataCache__Class**)(modloader::win::memory::resolve_rva(0x0478B3C8));
            }
            return cache;
        }
        inline app::MemoryLabelDebugger_MemoryManagerDataCache__Class* get_class() {
            return il2cpp::get_nested_class<app::MemoryLabelDebugger_MemoryManagerDataCache__Class>(type_info(), "UberShader.optimizations.gc", "MemoryLabelDebugger", "MemoryManagerDataCache");
        }
        inline app::MemoryLabelDebugger_MemoryManagerDataCache* create() {
            return il2cpp::create_object<app::MemoryLabelDebugger_MemoryManagerDataCache>(get_class());
        }
    } // namespace MemoryLabelDebugger_MemoryManagerDataCache
} // namespace app::classes::types
