#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PerfTestTimer__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PerfTestTimer__Array__Class** type_info;
        inline app::PerfTestTimer__Array__Class* get_class() {
            return il2cpp::get_class<app::PerfTestTimer__Array__Class>(type_info, "HierarchyPerfTest", "PerfTestTimer[]");
        }
        inline app::PerfTestTimer__Array* create() {
            return il2cpp::create_object<app::PerfTestTimer__Array>(get_class());
        }
    } // namespace PerfTestTimer__Array
} // namespace app::classes::types
