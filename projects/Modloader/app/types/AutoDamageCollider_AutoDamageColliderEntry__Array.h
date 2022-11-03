#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AutoDamageCollider_AutoDamageColliderEntry__Array {
        namespace {
            inline app::AutoDamageCollider_AutoDamageColliderEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::AutoDamageCollider_AutoDamageColliderEntry__Array__Class** type_info = &type_info_ref;
        inline app::AutoDamageCollider_AutoDamageColliderEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::AutoDamageCollider_AutoDamageColliderEntry__Array__Class>(type_info, "", "AutoDamageCollider+AutoDamageColliderEntry[]");
        }
        inline app::AutoDamageCollider_AutoDamageColliderEntry__Array* create() {
            return il2cpp::create_object<app::AutoDamageCollider_AutoDamageColliderEntry__Array>(get_class());
        }
    } // namespace AutoDamageCollider_AutoDamageColliderEntry__Array
} // namespace app::classes::types
