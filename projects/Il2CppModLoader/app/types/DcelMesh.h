#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DcelMesh {
        inline app::DcelMesh__Class** type_info = (app::DcelMesh__Class**)(modloader::win::memory::resolve_rva(0x04700AC8));
        inline app::DcelMesh__Class* get_class() {
            return il2cpp::get_class<app::DcelMesh__Class>(type_info, "TriangleNet.Topology.DCEL", "DcelMesh");
        }
        inline app::DcelMesh* create() {
            return il2cpp::create_object<app::DcelMesh>(get_class());
        }
    } // namespace DcelMesh
} // namespace app::classes::types
