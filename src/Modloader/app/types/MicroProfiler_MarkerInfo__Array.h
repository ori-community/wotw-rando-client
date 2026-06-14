#pragma once
#include <Modloader/app/structs/MicroProfiler_MarkerInfo__Array.h>
#include <Modloader/app/structs/MicroProfiler_MarkerInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MicroProfiler_MarkerInfo__Array {
        inline app::MicroProfiler_MarkerInfo__Array__Class** type_info() {
            static app::MicroProfiler_MarkerInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MicroProfiler_MarkerInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0476CCF0));
            }
            return cache;
        }
        inline app::MicroProfiler_MarkerInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::MicroProfiler_MarkerInfo__Array__Class>(type_info(), "", "MicroProfiler+MarkerInfo[]");
        }
        inline app::MicroProfiler_MarkerInfo__Array* create() {
            return il2cpp::create_object<app::MicroProfiler_MarkerInfo__Array>(get_class());
        }
    } // namespace MicroProfiler_MarkerInfo__Array
} // namespace app::classes::types
