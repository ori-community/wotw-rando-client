#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeshCollider {
        inline app::MeshCollider__Class** type_info = (app::MeshCollider__Class**)(modloader::win::memory::resolve_rva(0x0478E830));
        inline app::MeshCollider__Class* get_class() {
            return il2cpp::get_class<app::MeshCollider__Class>(type_info, "UnityEngine", "MeshCollider");
        }
        inline app::MeshCollider* create() {
            return il2cpp::create_object<app::MeshCollider>(get_class());
        }
        inline app::MeshCollider__Array* create_array(int size) {
            return il2cpp::array_new<app::MeshCollider__Array>(get_class(), size);
        }
        inline app::MeshCollider__Array* create_array(const std::vector<app::MeshCollider*>& items) {
            return il2cpp::array_new<app::MeshCollider__Array>(get_class(), items);
        }
    } // namespace MeshCollider
} // namespace app::classes::types
