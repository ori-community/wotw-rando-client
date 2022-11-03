#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemoryProfiler {
        inline app::MemoryProfiler__Class** type_info = (app::MemoryProfiler__Class**)(modloader::win::memory::resolve_rva(0x04792890));
        inline app::MemoryProfiler__Class* get_class() {
            return il2cpp::get_class<app::MemoryProfiler__Class>(type_info, "UnityEngine.Profiling.Memory.Experimental", "MemoryProfiler");
        }
        inline app::MemoryProfiler* create() {
            return il2cpp::create_object<app::MemoryProfiler>(get_class());
        }
    } // namespace MemoryProfiler
} // namespace app::classes::types
