#pragma once
#include <Modloader/app/structs/MemoryManagerDebugger_MemoryManagerAllocatorCache.h>
#include <Modloader/app/structs/MemoryManagerDebugger_MemoryManagerAllocatorCache__Array.h>
#include <Modloader/app/structs/MemoryManagerDebugger_MemoryManagerAllocatorCache__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemoryManagerDebugger_MemoryManagerAllocatorCache {
        inline app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Class** type_info() {
            static app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Class**)(modloader::win::memory::resolve_rva(0x047234F8));
            }
            return cache;
        }
        inline app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Class* get_class() {
            return il2cpp::get_nested_class<app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Class>(type_info(), "UberShader.optimizations.gc", "MemoryManagerDebugger", "MemoryManagerAllocatorCache");
        }
        inline app::MemoryManagerDebugger_MemoryManagerAllocatorCache* create() {
            return il2cpp::create_object<app::MemoryManagerDebugger_MemoryManagerAllocatorCache>(get_class());
        }
        inline app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Array* create_array(int size) {
            return il2cpp::array_new<app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Array>(get_class(), size);
        }
        inline app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Array* create_array(const std::vector<app::MemoryManagerDebugger_MemoryManagerAllocatorCache*>& items) {
            return il2cpp::array_new<app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Array>(get_class(), items);
        }
    } // namespace MemoryManagerDebugger_MemoryManagerAllocatorCache
} // namespace app::classes::types
