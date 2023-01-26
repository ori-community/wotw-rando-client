#pragma once
#include <Modloader/app/structs/X509ExtensionEnumerator.h>
#include <Modloader/app/structs/X509ExtensionEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509ExtensionEnumerator {
        inline app::X509ExtensionEnumerator__Class** type_info() {
            static app::X509ExtensionEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509ExtensionEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0474BAE0));
            }
            return cache;
        }
        inline app::X509ExtensionEnumerator__Class* get_class() {
            return il2cpp::get_class<app::X509ExtensionEnumerator__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "X509ExtensionEnumerator");
        }
        inline app::X509ExtensionEnumerator* create() {
            return il2cpp::create_object<app::X509ExtensionEnumerator>(get_class());
        }
    } // namespace X509ExtensionEnumerator
} // namespace app::classes::types
