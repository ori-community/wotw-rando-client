#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AutoDamageCollider_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AutoDamageCollider_c__Class** type_info;
        inline app::AutoDamageCollider_c__Class* get_class() {
            return il2cpp::get_nested_class<app::AutoDamageCollider_c__Class>(type_info, "", "AutoDamageCollider", "<>c");
        }
        inline app::AutoDamageCollider_c* create() {
            return il2cpp::create_object<app::AutoDamageCollider_c>(get_class());
        }
    } // namespace AutoDamageCollider_c
} // namespace app::classes::types
