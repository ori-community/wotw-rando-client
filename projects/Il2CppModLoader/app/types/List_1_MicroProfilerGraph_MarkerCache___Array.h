#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace List_1_MicroProfilerGraph_MarkerCache___Array {
        inline app::List_1_MicroProfilerGraph_MarkerCache___Array__Class** type_info = (app::List_1_MicroProfilerGraph_MarkerCache___Array__Class**)(modloader::win::memory::resolve_rva(0x04727098));
        inline app::List_1_MicroProfilerGraph_MarkerCache___Array__Class* get_class() {
            return il2cpp::get_class<app::List_1_MicroProfilerGraph_MarkerCache___Array__Class>(type_info, "System.Collections.Generic", "List`1[MicroProfilerGraph+MarkerCache][]");
        }
        inline app::List_1_MicroProfilerGraph_MarkerCache___Array* create() {
            return il2cpp::create_object<app::List_1_MicroProfilerGraph_MarkerCache___Array>(get_class());
        }
    } // namespace List_1_MicroProfilerGraph_MarkerCache___Array
} // namespace app::classes::types
