#pragma once
#include <Modloader/app/structs/X509ChainElement.h>
#include <Modloader/app/structs/X509ChainElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509ChainElement {
        inline app::X509ChainElement__Class** type_info() {
            static app::X509ChainElement__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509ChainElement__Class**)(modloader::win::memory::resolve_rva(0x0471DFB8));
            }
            return cache;
        }
        inline app::X509ChainElement__Class* get_class() {
            return il2cpp::get_class<app::X509ChainElement__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "X509ChainElement");
        }
        inline app::X509ChainElement* create() {
            return il2cpp::create_object<app::X509ChainElement>(get_class());
        }
    } // namespace X509ChainElement
} // namespace app::classes::types
