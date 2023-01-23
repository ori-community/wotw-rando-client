#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MemoryLabelDebugger_MemoryLabelAllocationCache__Class.h>
#include <Modloader/app/structs/MemoryLabelDebugger_MemoryLabelAllocationCache.h>
#include <Modloader/app/structs/MemoryLabelDebugger_MemoryLabelAllocationCache__Array.h>

namespace app::classes::types {
    namespace MemoryLabelDebugger_MemoryLabelAllocationCache {
        inline app::MemoryLabelDebugger_MemoryLabelAllocationCache__Class** type_info = (app::MemoryLabelDebugger_MemoryLabelAllocationCache__Class**)(modloader::win::memory::resolve_rva(0x0470BC40));
        inline app::MemoryLabelDebugger_MemoryLabelAllocationCache__Class* get_class() {
            return il2cpp::get_nested_class<app::MemoryLabelDebugger_MemoryLabelAllocationCache__Class>(type_info, "UberShader.optimizations.gc", "MemoryLabelDebugger", "MemoryLabelAllocationCache");
        }
        inline app::MemoryLabelDebugger_MemoryLabelAllocationCache* create() {
            return il2cpp::create_object<app::MemoryLabelDebugger_MemoryLabelAllocationCache>(get_class());
        }
        inline app::MemoryLabelDebugger_MemoryLabelAllocationCache__Array* create_array(int size) {
            return il2cpp::array_new<app::MemoryLabelDebugger_MemoryLabelAllocationCache__Array>(get_class(), size);
        }
        inline app::MemoryLabelDebugger_MemoryLabelAllocationCache__Array* create_array(const std::vector<app::MemoryLabelDebugger_MemoryLabelAllocationCache*>& items) {
            return il2cpp::array_new<app::MemoryLabelDebugger_MemoryLabelAllocationCache__Array>(get_class(), items);
        }
    } // namespace MemoryLabelDebugger_MemoryLabelAllocationCache
} // namespace app::classes::types
