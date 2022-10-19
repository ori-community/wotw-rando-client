#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SHA1Managed {
        inline app::SHA1Managed__Class** type_info = (app::SHA1Managed__Class**)(modloader::win::memory::resolve_rva(0x04788D48));
        inline app::SHA1Managed__Class* get_class() {
            return il2cpp::get_class<app::SHA1Managed__Class>(type_info, "System.Security.Cryptography", "SHA1Managed");
        }
        inline app::SHA1Managed* create() {
            return il2cpp::create_object<app::SHA1Managed>(get_class());
        }
    } // namespace SHA1Managed
} // namespace app::classes::types
