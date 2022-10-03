#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SecureStringHasher_HashCodeOfStringDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SecureStringHasher_HashCodeOfStringDelegate__Class** type_info;
        inline app::SecureStringHasher_HashCodeOfStringDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::SecureStringHasher_HashCodeOfStringDelegate__Class>(type_info, "System.Xml", "SecureStringHasher", "HashCodeOfStringDelegate");
        }
        inline app::SecureStringHasher_HashCodeOfStringDelegate* create() {
            return il2cpp::create_object<app::SecureStringHasher_HashCodeOfStringDelegate>(get_class());
        }
    } // namespace SecureStringHasher_HashCodeOfStringDelegate
} // namespace app::classes::types
