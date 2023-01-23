#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/X509ChainImplMono__Class.h>
#include <Modloader/app/structs/X509ChainImplMono.h>

namespace app::classes::types {
    namespace X509ChainImplMono {
        inline app::X509ChainImplMono__Class** type_info = (app::X509ChainImplMono__Class**)(modloader::win::memory::resolve_rva(0x047311F0));
        inline app::X509ChainImplMono__Class* get_class() {
            return il2cpp::get_class<app::X509ChainImplMono__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509ChainImplMono");
        }
        inline app::X509ChainImplMono* create() {
            return il2cpp::create_object<app::X509ChainImplMono>(get_class());
        }
    } // namespace X509ChainImplMono
} // namespace app::classes::types
