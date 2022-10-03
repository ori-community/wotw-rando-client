#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509ExtensionEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509ExtensionEnumerator__Class** type_info;
        inline app::X509ExtensionEnumerator__Class* get_class() {
            return il2cpp::get_class<app::X509ExtensionEnumerator__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509ExtensionEnumerator");
        }
        inline app::X509ExtensionEnumerator* create() {
            return il2cpp::create_object<app::X509ExtensionEnumerator>(get_class());
        }
    } // namespace X509ExtensionEnumerator
} // namespace app::classes::types
