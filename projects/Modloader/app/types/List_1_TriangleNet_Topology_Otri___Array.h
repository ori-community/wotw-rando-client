#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/List_1_TriangleNet_Topology_Otri___Array__Class.h>
#include <Modloader/app/structs/List_1_TriangleNet_Topology_Otri___Array.h>

namespace app::classes::types {
    namespace List_1_TriangleNet_Topology_Otri___Array {
        inline app::List_1_TriangleNet_Topology_Otri___Array__Class** type_info = (app::List_1_TriangleNet_Topology_Otri___Array__Class**)(modloader::win::memory::resolve_rva(0x0470ED68));
        inline app::List_1_TriangleNet_Topology_Otri___Array__Class* get_class() {
            return il2cpp::get_class<app::List_1_TriangleNet_Topology_Otri___Array__Class>(type_info, "System.Collections.Generic", "List`1[TriangleNet.Topology.Otri][]");
        }
        inline app::List_1_TriangleNet_Topology_Otri___Array* create() {
            return il2cpp::create_object<app::List_1_TriangleNet_Topology_Otri___Array>(get_class());
        }
    } // namespace List_1_TriangleNet_Topology_Otri___Array
} // namespace app::classes::types
