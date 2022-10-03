#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemoryLabelDebugger_MemoryLabelAllocationCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MemoryLabelDebugger_MemoryLabelAllocationCache__Class** type_info;
        inline app::MemoryLabelDebugger_MemoryLabelAllocationCache__Class* get_class() {
            return il2cpp::get_nested_class<app::MemoryLabelDebugger_MemoryLabelAllocationCache__Class>(type_info, "UberShader.optimizations.gc", "MemoryLabelDebugger", "MemoryLabelAllocationCache");
        }
        inline app::MemoryLabelDebugger_MemoryLabelAllocationCache* create() {
            return il2cpp::create_object<app::MemoryLabelDebugger_MemoryLabelAllocationCache>(get_class());
        }
        inline app::MemoryLabelDebugger_MemoryLabelAllocationCache__Array* create_array(int size) {
            return il2cpp::array_new<app::MemoryLabelDebugger_MemoryLabelAllocationCache__Array>(get_class(), size);
        }
    } // namespace MemoryLabelDebugger_MemoryLabelAllocationCache
} // namespace app::classes::types
