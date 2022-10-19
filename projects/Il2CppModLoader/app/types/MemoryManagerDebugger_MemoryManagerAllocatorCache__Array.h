#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemoryManagerDebugger_MemoryManagerAllocatorCache__Array {
        namespace {
            inline app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Array__Class* type_info_ref = nullptr;
        }
        inline app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Array__Class** type_info = &type_info_ref;
        inline app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Array__Class* get_class() {
            return il2cpp::get_class<app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Array__Class>(type_info, "UberShader.optimizations.gc", "MemoryManagerDebugger+MemoryManagerAllocatorCache[]");
        }
        inline app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Array* create() {
            return il2cpp::create_object<app::MemoryManagerDebugger_MemoryManagerAllocatorCache__Array>(get_class());
        }
    } // namespace MemoryManagerDebugger_MemoryManagerAllocatorCache__Array
} // namespace app::classes::types
