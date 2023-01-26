#pragma once
#include <Modloader/app/structs/X509Certificate.h>
#include <Modloader/app/structs/X509Certificate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509Certificate {
        inline app::X509Certificate__Class** type_info() {
            static app::X509Certificate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509Certificate__Class**)(modloader::win::memory::resolve_rva(0x04741780));
            }
            return cache;
        }
        inline app::X509Certificate__Class* get_class() {
            return il2cpp::get_class<app::X509Certificate__Class>(type_info(), "Mono.Security.X509", "X509Certificate");
        }
        inline app::X509Certificate* create() {
            return il2cpp::create_object<app::X509Certificate>(get_class());
        }
    } // namespace X509Certificate
} // namespace app::classes::types
