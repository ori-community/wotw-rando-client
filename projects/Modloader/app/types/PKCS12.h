#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PKCS12 {
        inline app::PKCS12__Class** type_info = (app::PKCS12__Class**)(modloader::win::memory::resolve_rva(0x04757F28));
        inline app::PKCS12__Class* get_class() {
            return il2cpp::get_class<app::PKCS12__Class>(type_info, "Mono.Security.X509", "PKCS12");
        }
        inline app::PKCS12* create() {
            return il2cpp::create_object<app::PKCS12>(get_class());
        }
    } // namespace PKCS12
} // namespace app::classes::types
