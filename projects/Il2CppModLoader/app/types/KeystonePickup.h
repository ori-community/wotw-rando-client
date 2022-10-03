#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeystonePickup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KeystonePickup__Class** type_info;
        inline app::KeystonePickup__Class* get_class() {
            return il2cpp::get_class<app::KeystonePickup__Class>(type_info, "", "KeystonePickup");
        }
        inline app::KeystonePickup* create() {
            return il2cpp::create_object<app::KeystonePickup>(get_class());
        }
    } // namespace KeystonePickup
} // namespace app::classes::types
