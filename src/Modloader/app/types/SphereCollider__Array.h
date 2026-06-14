#pragma once
#include <Modloader/app/structs/SphereCollider__Array.h>
#include <Modloader/app/structs/SphereCollider__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SphereCollider__Array {
        inline app::SphereCollider__Array__Class** type_info() {
            static app::SphereCollider__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SphereCollider__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SphereCollider__Array__Class* get_class() {
            return il2cpp::get_class<app::SphereCollider__Array__Class>(type_info(), "UnityEngine", "SphereCollider[]");
        }
        inline app::SphereCollider__Array* create() {
            return il2cpp::create_object<app::SphereCollider__Array>(get_class());
        }
    } // namespace SphereCollider__Array
} // namespace app::classes::types
