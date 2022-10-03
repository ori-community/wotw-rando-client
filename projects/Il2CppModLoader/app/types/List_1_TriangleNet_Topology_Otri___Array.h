#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace List_1_TriangleNet_Topology_Otri___Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::List_1_TriangleNet_Topology_Otri___Array__Class** type_info;
        inline app::List_1_TriangleNet_Topology_Otri___Array__Class* get_class() {
            return il2cpp::get_class<app::List_1_TriangleNet_Topology_Otri___Array__Class>(type_info, "System.Collections.Generic", "List`1[TriangleNet.Topology.Otri][]");
        }
        inline app::List_1_TriangleNet_Topology_Otri___Array* create() {
            return il2cpp::create_object<app::List_1_TriangleNet_Topology_Otri___Array>(get_class());
        }
    } // namespace List_1_TriangleNet_Topology_Otri___Array
} // namespace app::classes::types
