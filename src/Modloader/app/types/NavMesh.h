#pragma once
#include <Modloader/app/structs/NavMesh.h>
#include <Modloader/app/structs/NavMesh__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NavMesh {
        inline app::NavMesh__Class** type_info() {
            static app::NavMesh__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NavMesh__Class**)(modloader::win::memory::resolve_rva(0x04721E38));
            }
            return cache;
        }
        inline app::NavMesh__Class* get_class() {
            return il2cpp::get_class<app::NavMesh__Class>(type_info(), "UnityEngine.AI", "NavMesh");
        }
        inline app::NavMesh* create() {
            return il2cpp::create_object<app::NavMesh>(get_class());
        }
    } // namespace NavMesh
} // namespace app::classes::types
