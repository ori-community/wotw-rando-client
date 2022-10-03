#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemoryManagerDebugger_MemoryManagerAllocatorCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Class** type_info;
        inline app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Class* get_class() {
            return il2cpp::get_nested_class<app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Class>(type_info, "UberShader.optimizations.gc", "MemoryManagerDebugger", "MemoryManagerAllocatorCache");
        }
        inline app::MemoryManagerDebugger_MemoryManagerAllocatorCache* create() {
            return il2cpp::create_object<app::MemoryManagerDebugger_MemoryManagerAllocatorCache>(get_class());
        }
        inline app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Array* create_array(int size) {
            return il2cpp::array_new<app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Array>(get_class(), size);
        }
    } // namespace MemoryManagerDebugger_MemoryManagerAllocatorCache
} // namespace app::classes::types
