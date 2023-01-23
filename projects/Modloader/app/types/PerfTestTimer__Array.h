#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PerfTestTimer__Array__Class.h>
#include <Modloader/app/structs/PerfTestTimer__Array.h>

namespace app::classes::types {
    namespace PerfTestTimer__Array {
        inline app::PerfTestTimer__Array__Class** type_info = (app::PerfTestTimer__Array__Class**)(modloader::win::memory::resolve_rva(0x04791640));
        inline app::PerfTestTimer__Array__Class* get_class() {
            return il2cpp::get_class<app::PerfTestTimer__Array__Class>(type_info, "HierarchyPerfTest", "PerfTestTimer[]");
        }
        inline app::PerfTestTimer__Array* create() {
            return il2cpp::create_object<app::PerfTestTimer__Array>(get_class());
        }
    } // namespace PerfTestTimer__Array
} // namespace app::classes::types
