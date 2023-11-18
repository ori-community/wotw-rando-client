#pragma once
#include <Modloader/app/structs/MicroProfilerGraph.h>
#include <Modloader/app/structs/MicroProfilerGraph__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MicroProfilerGraph {
        inline app::MicroProfilerGraph__Class** type_info() {
            static app::MicroProfilerGraph__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MicroProfilerGraph__Class**)(modloader::win::memory::resolve_rva(0x04743A88));
            }
            return cache;
        }
        inline app::MicroProfilerGraph__Class* get_class() {
            return il2cpp::get_class<app::MicroProfilerGraph__Class>(type_info(), "", "MicroProfilerGraph");
        }
        inline app::MicroProfilerGraph* create() {
            return il2cpp::create_object<app::MicroProfilerGraph>(get_class());
        }
    } // namespace MicroProfilerGraph
} // namespace app::classes::types
