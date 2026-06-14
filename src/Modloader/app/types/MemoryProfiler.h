#pragma once
#include <Modloader/app/structs/MemoryProfiler.h>
#include <Modloader/app/structs/MemoryProfiler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemoryProfiler {
        inline app::MemoryProfiler__Class** type_info() {
            static app::MemoryProfiler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MemoryProfiler__Class**)(modloader::win::memory::resolve_rva(0x04792890));
            }
            return cache;
        }
        inline app::MemoryProfiler__Class* get_class() {
            return il2cpp::get_class<app::MemoryProfiler__Class>(type_info(), "UnityEngine.Profiling.Memory.Experimental", "MemoryProfiler");
        }
        inline app::MemoryProfiler* create() {
            return il2cpp::create_object<app::MemoryProfiler>(get_class());
        }
    } // namespace MemoryProfiler
} // namespace app::classes::types
