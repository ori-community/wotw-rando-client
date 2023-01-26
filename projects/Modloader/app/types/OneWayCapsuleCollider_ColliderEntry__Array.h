#pragma once
#include <Modloader/app/structs/OneWayCapsuleCollider_ColliderEntry__Array.h>
#include <Modloader/app/structs/OneWayCapsuleCollider_ColliderEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OneWayCapsuleCollider_ColliderEntry__Array {
        inline app::OneWayCapsuleCollider_ColliderEntry__Array__Class** type_info() {
            static app::OneWayCapsuleCollider_ColliderEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OneWayCapsuleCollider_ColliderEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OneWayCapsuleCollider_ColliderEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::OneWayCapsuleCollider_ColliderEntry__Array__Class>(type_info(), "", "OneWayCapsuleCollider+ColliderEntry[]");
        }
        inline app::OneWayCapsuleCollider_ColliderEntry__Array* create() {
            return il2cpp::create_object<app::OneWayCapsuleCollider_ColliderEntry__Array>(get_class());
        }
    } // namespace OneWayCapsuleCollider_ColliderEntry__Array
} // namespace app::classes::types
