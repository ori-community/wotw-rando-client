#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeyPairPersistence {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KeyPairPersistence__Class** type_info;
        inline app::KeyPairPersistence__Class* get_class() {
            return il2cpp::get_class<app::KeyPairPersistence__Class>(type_info, "Mono.Security.Cryptography", "KeyPairPersistence");
        }
        inline app::KeyPairPersistence* create() {
            return il2cpp::create_object<app::KeyPairPersistence>(get_class());
        }
    } // namespace KeyPairPersistence
} // namespace app::classes::types
