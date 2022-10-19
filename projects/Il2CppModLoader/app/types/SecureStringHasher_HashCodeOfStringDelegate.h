#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SecureStringHasher_HashCodeOfStringDelegate {
        inline app::SecureStringHasher_HashCodeOfStringDelegate__Class** type_info = (app::SecureStringHasher_HashCodeOfStringDelegate__Class**)(modloader::win::memory::resolve_rva(0x0471E1F0));
        inline app::SecureStringHasher_HashCodeOfStringDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::SecureStringHasher_HashCodeOfStringDelegate__Class>(type_info, "System.Xml", "SecureStringHasher", "HashCodeOfStringDelegate");
        }
        inline app::SecureStringHasher_HashCodeOfStringDelegate* create() {
            return il2cpp::create_object<app::SecureStringHasher_HashCodeOfStringDelegate>(get_class());
        }
    } // namespace SecureStringHasher_HashCodeOfStringDelegate
} // namespace app::classes::types
