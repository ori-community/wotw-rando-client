#pragma once
#include <Modloader/app/structs/X509Certificate2Enumerator.h>
#include <Modloader/app/structs/X509Certificate2Enumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509Certificate2Enumerator {
        inline app::X509Certificate2Enumerator__Class** type_info() {
            static app::X509Certificate2Enumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509Certificate2Enumerator__Class**)(modloader::win::memory::resolve_rva(0x04711230));
            }
            return cache;
        }
        inline app::X509Certificate2Enumerator__Class* get_class() {
            return il2cpp::get_class<app::X509Certificate2Enumerator__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "X509Certificate2Enumerator");
        }
        inline app::X509Certificate2Enumerator* create() {
            return il2cpp::create_object<app::X509Certificate2Enumerator>(get_class());
        }
    } // namespace X509Certificate2Enumerator
} // namespace app::classes::types
