#pragma once
#include <Modloader/app/structs/MemoryManagerDebugger_MemoryManagerAllocatorCache__Array.h>
#include <Modloader/app/structs/MemoryManagerDebugger_MemoryManagerAllocatorCache__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemoryManagerDebugger_MemoryManagerAllocatorCache__Array {
        inline app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Array__Class** type_info() {
            static app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Array__Class* get_class() {
            return il2cpp::get_class<app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Array__Class>(type_info(), "UberShader.optimizations.gc", "MemoryManagerDebugger+MemoryManagerAllocatorCache[]");
        }
        inline app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Array* create() {
            return il2cpp::create_object<app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Array>(get_class());
        }
    } // namespace MemoryManagerDebugger_MemoryManagerAllocatorCache__Array
} // namespace app::classes::types
