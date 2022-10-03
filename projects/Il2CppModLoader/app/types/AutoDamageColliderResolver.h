#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AutoDamageColliderResolver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AutoDamageColliderResolver__Class** type_info;
        inline app::AutoDamageColliderResolver__Class* get_class() {
            return il2cpp::get_class<app::AutoDamageColliderResolver__Class>(type_info, "", "AutoDamageColliderResolver");
        }
        inline app::AutoDamageColliderResolver* create() {
            return il2cpp::create_object<app::AutoDamageColliderResolver>(get_class());
        }
    } // namespace AutoDamageColliderResolver
} // namespace app::classes::types
