#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SecureStringHasher {
        inline app::SecureStringHasher__Class** type_info = (app::SecureStringHasher__Class**)(modloader::win::memory::resolve_rva(0x0476D3C8));
        inline app::SecureStringHasher__Class* get_class() {
            return il2cpp::get_class<app::SecureStringHasher__Class>(type_info, "System.Xml", "SecureStringHasher");
        }
        inline app::SecureStringHasher* create() {
            return il2cpp::create_object<app::SecureStringHasher>(get_class());
        }
    } // namespace SecureStringHasher
} // namespace app::classes::types
