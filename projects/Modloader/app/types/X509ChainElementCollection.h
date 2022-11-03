#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace X509ChainElementCollection {
        inline app::X509ChainElementCollection__Class** type_info = (app::X509ChainElementCollection__Class**)(modloader::win::memory::resolve_rva(0x047605D0));
        inline app::X509ChainElementCollection__Class* get_class() {
            return il2cpp::get_class<app::X509ChainElementCollection__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509ChainElementCollection");
        }
        inline app::X509ChainElementCollection* create() {
            return il2cpp::create_object<app::X509ChainElementCollection>(get_class());
        }
    } // namespace X509ChainElementCollection
} // namespace app::classes::types
