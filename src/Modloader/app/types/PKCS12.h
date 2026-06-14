#pragma once
#include <Modloader/app/structs/PKCS12.h>
#include <Modloader/app/structs/PKCS12__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PKCS12 {
        inline app::PKCS12__Class** type_info() {
            static app::PKCS12__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PKCS12__Class**)(modloader::win::memory::resolve_rva(0x04757F28));
            }
            return cache;
        }
        inline app::PKCS12__Class* get_class() {
            return il2cpp::get_class<app::PKCS12__Class>(type_info(), "Mono.Security.X509", "PKCS12");
        }
        inline app::PKCS12* create() {
            return il2cpp::create_object<app::PKCS12>(get_class());
        }
    } // namespace PKCS12
} // namespace app::classes::types
