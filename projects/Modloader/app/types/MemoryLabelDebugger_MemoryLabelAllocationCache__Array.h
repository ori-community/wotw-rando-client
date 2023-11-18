#pragma once
#include <Modloader/app/structs/MemoryLabelDebugger_MemoryLabelAllocationCache__Array.h>
#include <Modloader/app/structs/MemoryLabelDebugger_MemoryLabelAllocationCache__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemoryLabelDebugger_MemoryLabelAllocationCache__Array {
        inline app::MemoryLabelDebugger_MemoryLabelAllocationCache__Array__Class** type_info() {
            static app::MemoryLabelDebugger_MemoryLabelAllocationCache__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MemoryLabelDebugger_MemoryLabelAllocationCache__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MemoryLabelDebugger_MemoryLabelAllocationCache__Array__Class* get_class() {
            return il2cpp::get_class<app::MemoryLabelDebugger_MemoryLabelAllocationCache__Array__Class>(type_info(), "UberShader.optimizations.gc", "MemoryLabelDebugger+MemoryLabelAllocationCache[]");
        }
        inline app::MemoryLabelDebugger_MemoryLabelAllocationCache__Array* create() {
            return il2cpp::create_object<app::MemoryLabelDebugger_MemoryLabelAllocationCache__Array>(get_class());
        }
    } // namespace MemoryLabelDebugger_MemoryLabelAllocationCache__Array
} // namespace app::classes::types
