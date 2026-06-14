#pragma once
#include <Modloader/app/structs/MeshCollider__Array.h>
#include <Modloader/app/structs/MeshCollider__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeshCollider__Array {
        inline app::MeshCollider__Array__Class** type_info() {
            static app::MeshCollider__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeshCollider__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeshCollider__Array__Class* get_class() {
            return il2cpp::get_class<app::MeshCollider__Array__Class>(type_info(), "UnityEngine", "MeshCollider[]");
        }
        inline app::MeshCollider__Array* create() {
            return il2cpp::create_object<app::MeshCollider__Array>(get_class());
        }
    } // namespace MeshCollider__Array
} // namespace app::classes::types
