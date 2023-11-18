#pragma once
#include <Modloader/app/structs/VerletSphereCollider.h>
#include <Modloader/app/structs/VerletSphereCollider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletSphereCollider {
        inline app::VerletSphereCollider__Class** type_info() {
            static app::VerletSphereCollider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletSphereCollider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletSphereCollider__Class* get_class() {
            return il2cpp::get_class<app::VerletSphereCollider__Class>(type_info(), "", "VerletSphereCollider");
        }
        inline app::VerletSphereCollider* create() {
            return il2cpp::create_object<app::VerletSphereCollider>(get_class());
        }
    } // namespace VerletSphereCollider
} // namespace app::classes::types
