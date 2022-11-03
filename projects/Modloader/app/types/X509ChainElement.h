#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace X509ChainElement {
        inline app::X509ChainElement__Class** type_info = (app::X509ChainElement__Class**)(modloader::win::memory::resolve_rva(0x0471DFB8));
        inline app::X509ChainElement__Class* get_class() {
            return il2cpp::get_class<app::X509ChainElement__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509ChainElement");
        }
        inline app::X509ChainElement* create() {
            return il2cpp::create_object<app::X509ChainElement>(get_class());
        }
    } // namespace X509ChainElement
} // namespace app::classes::types
