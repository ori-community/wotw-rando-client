#pragma once
#include <Modloader/app/structs/PerfTestTimer__Array.h>
#include <Modloader/app/structs/PerfTestTimer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PerfTestTimer__Array {
        inline app::PerfTestTimer__Array__Class** type_info() {
            static app::PerfTestTimer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PerfTestTimer__Array__Class**)(modloader::win::memory::resolve_rva(0x04791640));
            }
            return cache;
        }
        inline app::PerfTestTimer__Array__Class* get_class() {
            return il2cpp::get_class<app::PerfTestTimer__Array__Class>(type_info(), "HierarchyPerfTest", "PerfTestTimer[]");
        }
        inline app::PerfTestTimer__Array* create() {
            return il2cpp::create_object<app::PerfTestTimer__Array>(get_class());
        }
    } // namespace PerfTestTimer__Array
} // namespace app::classes::types
