#pragma once
#include <Modloader/app/structs/MeshCollider.h>
#include <Modloader/app/structs/MeshCollider__Array.h>
#include <Modloader/app/structs/MeshCollider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeshCollider {
        inline app::MeshCollider__Class** type_info() {
            static app::MeshCollider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeshCollider__Class**)(modloader::win::memory::resolve_rva(0x0478E830));
            }
            return cache;
        }
        inline app::MeshCollider__Class* get_class() {
            return il2cpp::get_class<app::MeshCollider__Class>(type_info(), "UnityEngine", "MeshCollider");
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
