#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FlutteringProjectileDropBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FlutteringProjectileDropBehaviour_c__Class** type_info;
        inline app::FlutteringProjectileDropBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringProjectileDropBehaviour_c__Class>(type_info, "Moon", "FlutteringProjectileDropBehaviour", "<>c");
        }
        inline app::FlutteringProjectileDropBehaviour_c* create() {
            return il2cpp::create_object<app::FlutteringProjectileDropBehaviour_c>(get_class());
        }
    } // namespace FlutteringProjectileDropBehaviour_c
} // namespace app::classes::types
