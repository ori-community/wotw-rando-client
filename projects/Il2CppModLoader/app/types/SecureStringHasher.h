#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SecureStringHasher {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SecureStringHasher__Class** type_info;
        inline app::SecureStringHasher__Class* get_class() {
            return il2cpp::get_class<app::SecureStringHasher__Class>(type_info, "System.Xml", "SecureStringHasher");
        }
        inline app::SecureStringHasher* create() {
            return il2cpp::create_object<app::SecureStringHasher>(get_class());
        }
    } // namespace SecureStringHasher
} // namespace app::classes::types
