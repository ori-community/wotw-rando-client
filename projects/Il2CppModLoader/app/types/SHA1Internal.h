#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SHA1Internal {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SHA1Internal__Class** type_info;
        inline app::SHA1Internal__Class* get_class() {
            return il2cpp::get_class<app::SHA1Internal__Class>(type_info, "System.Security.Cryptography", "SHA1Internal");
        }
        inline app::SHA1Internal* create() {
            return il2cpp::create_object<app::SHA1Internal>(get_class());
        }
    } // namespace SHA1Internal
} // namespace app::classes::types
