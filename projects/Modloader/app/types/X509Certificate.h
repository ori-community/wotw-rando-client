#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace X509Certificate {
        inline app::X509Certificate__Class** type_info = (app::X509Certificate__Class**)(modloader::win::memory::resolve_rva(0x04741780));
        inline app::X509Certificate__Class* get_class() {
            return il2cpp::get_class<app::X509Certificate__Class>(type_info, "Mono.Security.X509", "X509Certificate");
        }
        inline app::X509Certificate* create() {
            return il2cpp::create_object<app::X509Certificate>(get_class());
        }
    } // namespace X509Certificate
} // namespace app::classes::types
