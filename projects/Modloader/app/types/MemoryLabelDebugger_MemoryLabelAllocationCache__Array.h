#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MemoryLabelDebugger_MemoryLabelAllocationCache__Array__Class.h>
#include <Modloader/app/structs/MemoryLabelDebugger_MemoryLabelAllocationCache__Array.h>

namespace app::classes::types {
    namespace MemoryLabelDebugger_MemoryLabelAllocationCache__Array {
        namespace {
            inline app::MemoryLabelDebugger_MemoryLabelAllocationCache__Array__Class* type_info_ref = nullptr;
        }
        inline app::MemoryLabelDebugger_MemoryLabelAllocationCache__Array__Class** type_info = &type_info_ref;
        inline app::MemoryLabelDebugger_MemoryLabelAllocationCache__Array__Class* get_class() {
            return il2cpp::get_class<app::MemoryLabelDebugger_MemoryLabelAllocationCache__Array__Class>(type_info, "UberShader.optimizations.gc", "MemoryLabelDebugger+MemoryLabelAllocationCache[]");
        }
        inline app::MemoryLabelDebugger_MemoryLabelAllocationCache__Array* create() {
            return il2cpp::create_object<app::MemoryLabelDebugger_MemoryLabelAllocationCache__Array>(get_class());
        }
    } // namespace MemoryLabelDebugger_MemoryLabelAllocationCache__Array
} // namespace app::classes::types
