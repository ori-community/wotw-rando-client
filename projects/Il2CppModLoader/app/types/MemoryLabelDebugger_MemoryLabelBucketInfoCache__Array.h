#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array {
        inline app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array__Class** type_info = (app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array__Class**)(modloader::win::memory::resolve_rva(0x04770000));
        inline app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array__Class* get_class() {
            return il2cpp::get_class<app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array__Class>(type_info, "UberShader.optimizations.gc", "MemoryLabelDebugger+MemoryLabelBucketInfoCache[]");
        }
        inline app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array* create() {
            return il2cpp::create_object<app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array>(get_class());
        }
    } // namespace MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array
} // namespace app::classes::types
