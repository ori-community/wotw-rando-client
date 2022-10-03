#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PerfTestTimer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PerfTestTimer__Class** type_info;
        inline app::PerfTestTimer__Class* get_class() {
            return il2cpp::get_class<app::PerfTestTimer__Class>(type_info, "HierarchyPerfTest", "PerfTestTimer");
        }
        inline app::PerfTestTimer* create() {
            return il2cpp::create_object<app::PerfTestTimer>(get_class());
        }
        inline app::PerfTestTimer__Array* create_array(int size) {
            return il2cpp::array_new<app::PerfTestTimer__Array>(get_class(), size);
        }
    } // namespace PerfTestTimer
} // namespace app::classes::types
