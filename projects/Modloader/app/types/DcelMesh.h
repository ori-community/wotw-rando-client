#pragma once
#include <Modloader/app/structs/DcelMesh.h>
#include <Modloader/app/structs/DcelMesh__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DcelMesh {
        inline app::DcelMesh__Class** type_info() {
            static app::DcelMesh__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DcelMesh__Class**)(modloader::win::memory::resolve_rva(0x04700AC8));
            }
            return cache;
        }
        inline app::DcelMesh__Class* get_class() {
            return il2cpp::get_class<app::DcelMesh__Class>(type_info(), "TriangleNet.Topology.DCEL", "DcelMesh");
        }
        inline app::DcelMesh* create() {
            return il2cpp::create_object<app::DcelMesh>(get_class());
        }
    } // namespace DcelMesh
} // namespace app::classes::types
