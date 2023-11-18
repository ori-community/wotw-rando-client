#pragma once
#include <Modloader/app/structs/AutoDamageCollider_AutoDamageColliderEntry__Array.h>
#include <Modloader/app/structs/AutoDamageCollider_AutoDamageColliderEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AutoDamageCollider_AutoDamageColliderEntry__Array {
        inline app::AutoDamageCollider_AutoDamageColliderEntry__Array__Class** type_info() {
            static app::AutoDamageCollider_AutoDamageColliderEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AutoDamageCollider_AutoDamageColliderEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AutoDamageCollider_AutoDamageColliderEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::AutoDamageCollider_AutoDamageColliderEntry__Array__Class>(type_info(), "", "AutoDamageCollider+AutoDamageColliderEntry[]");
        }
        inline app::AutoDamageCollider_AutoDamageColliderEntry__Array* create() {
            return il2cpp::create_object<app::AutoDamageCollider_AutoDamageColliderEntry__Array>(get_class());
        }
    } // namespace AutoDamageCollider_AutoDamageColliderEntry__Array
} // namespace app::classes::types
