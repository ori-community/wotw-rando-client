#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemoryProfiler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MemoryProfiler__Class** type_info;
        inline app::MemoryProfiler__Class* get_class() {
            return il2cpp::get_class<app::MemoryProfiler__Class>(type_info, "UnityEngine.Profiling.Memory.Experimental", "MemoryProfiler");
        }
        inline app::MemoryProfiler* create() {
            return il2cpp::create_object<app::MemoryProfiler>(get_class());
        }
    } // namespace MemoryProfiler
} // namespace app::classes::types
