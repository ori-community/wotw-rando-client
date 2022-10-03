#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array__Class** type_info;
        inline app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array__Class* get_class() {
            return il2cpp::get_class<app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array__Class>(type_info, "UberShader.optimizations.gc", "MemoryLabelDebugger+MemoryLabelBucketInfoCache[]");
        }
        inline app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array* create() {
            return il2cpp::create_object<app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array>(get_class());
        }
    } // namespace MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array
} // namespace app::classes::types
