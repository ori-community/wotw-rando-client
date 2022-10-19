#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace X509ExtensionEnumerator {
        inline app::X509ExtensionEnumerator__Class** type_info = (app::X509ExtensionEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0474BAE0));
        inline app::X509ExtensionEnumerator__Class* get_class() {
            return il2cpp::get_class<app::X509ExtensionEnumerator__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509ExtensionEnumerator");
        }
        inline app::X509ExtensionEnumerator* create() {
            return il2cpp::create_object<app::X509ExtensionEnumerator>(get_class());
        }
    } // namespace X509ExtensionEnumerator
} // namespace app::classes::types
