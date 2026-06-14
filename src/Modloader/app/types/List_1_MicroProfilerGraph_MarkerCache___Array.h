#pragma once
#include <Modloader/app/structs/List_1_MicroProfilerGraph_MarkerCache___Array.h>
#include <Modloader/app/structs/List_1_MicroProfilerGraph_MarkerCache___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace List_1_MicroProfilerGraph_MarkerCache___Array {
        inline app::List_1_MicroProfilerGraph_MarkerCache___Array__Class** type_info() {
            static app::List_1_MicroProfilerGraph_MarkerCache___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::List_1_MicroProfilerGraph_MarkerCache___Array__Class**)(modloader::win::memory::resolve_rva(0x04727098));
            }
            return cache;
        }
        inline app::List_1_MicroProfilerGraph_MarkerCache___Array__Class* get_class() {
            return il2cpp::get_class<app::List_1_MicroProfilerGraph_MarkerCache___Array__Class>(type_info(), "System.Collections.Generic", "List`1[MicroProfilerGraph+MarkerCache][]");
        }
        inline app::List_1_MicroProfilerGraph_MarkerCache___Array* create() {
            return il2cpp::create_object<app::List_1_MicroProfilerGraph_MarkerCache___Array>(get_class());
        }
    } // namespace List_1_MicroProfilerGraph_MarkerCache___Array
} // namespace app::classes::types
