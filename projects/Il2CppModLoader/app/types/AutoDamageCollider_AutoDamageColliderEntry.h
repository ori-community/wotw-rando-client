#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AutoDamageCollider_AutoDamageColliderEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AutoDamageCollider_AutoDamageColliderEntry__Class** type_info;
        inline app::AutoDamageCollider_AutoDamageColliderEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::AutoDamageCollider_AutoDamageColliderEntry__Class>(type_info, "", "AutoDamageCollider", "AutoDamageColliderEntry");
        }
        inline app::AutoDamageCollider_AutoDamageColliderEntry* create() {
            return il2cpp::create_object<app::AutoDamageCollider_AutoDamageColliderEntry>(get_class());
        }
        inline app::AutoDamageCollider_AutoDamageColliderEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::AutoDamageCollider_AutoDamageColliderEntry__Array>(get_class(), size);
        }
    } // namespace AutoDamageCollider_AutoDamageColliderEntry
} // namespace app::classes::types
