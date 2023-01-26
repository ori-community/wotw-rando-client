#pragma once
#include <Modloader/app/structs/MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array.h>
#include <Modloader/app/structs/MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array {
        inline app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array__Class** type_info() {
            static app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array__Class**)(modloader::win::memory::resolve_rva(0x04770000));
            }
            return cache;
        }
        inline app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array__Class* get_class() {
            return il2cpp::get_class<app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array__Class>(type_info(), "UberShader.optimizations.gc", "MemoryLabelDebugger+MemoryLabelBucketInfoCache[]");
        }
        inline app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array* create() {
            return il2cpp::create_object<app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array>(get_class());
        }
    } // namespace MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array
} // namespace app::classes::types
