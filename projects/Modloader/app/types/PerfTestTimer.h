#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PerfTestTimer__Class.h>
#include <Modloader/app/structs/PerfTestTimer.h>
#include <Modloader/app/structs/PerfTestTimer__Array.h>

namespace app::classes::types {
    namespace PerfTestTimer {
        inline app::PerfTestTimer__Class** type_info = (app::PerfTestTimer__Class**)(modloader::win::memory::resolve_rva(0x04792630));
        inline app::PerfTestTimer__Class* get_class() {
            return il2cpp::get_class<app::PerfTestTimer__Class>(type_info, "HierarchyPerfTest", "PerfTestTimer");
        }
        inline app::PerfTestTimer* create() {
            return il2cpp::create_object<app::PerfTestTimer>(get_class());
        }
        inline app::PerfTestTimer__Array* create_array(int size) {
            return il2cpp::array_new<app::PerfTestTimer__Array>(get_class(), size);
        }
        inline app::PerfTestTimer__Array* create_array(const std::vector<app::PerfTestTimer*>& items) {
            return il2cpp::array_new<app::PerfTestTimer__Array>(get_class(), items);
        }
    } // namespace PerfTestTimer
} // namespace app::classes::types
