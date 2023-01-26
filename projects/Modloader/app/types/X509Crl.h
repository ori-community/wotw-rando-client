#pragma once
#include <Modloader/app/structs/X509Crl.h>
#include <Modloader/app/structs/X509Crl__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509Crl {
        inline app::X509Crl__Class** type_info() {
            static app::X509Crl__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509Crl__Class**)(modloader::win::memory::resolve_rva(0x04788740));
            }
            return cache;
        }
        inline app::X509Crl__Class* get_class() {
            return il2cpp::get_class<app::X509Crl__Class>(type_info(), "Mono.Security.X509", "X509Crl");
        }
        inline app::X509Crl* create() {
            return il2cpp::create_object<app::X509Crl>(get_class());
        }
    } // namespace X509Crl
} // namespace app::classes::types
